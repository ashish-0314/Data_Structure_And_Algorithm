#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <ctime>
#include <cstdlib>
#include <limits>

using namespace std;

// Days of the week
const vector<string> DAYS = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
// Time slots (assuming each class is 1 hour)
const vector<string> TIME_SLOTS = {"9:00-10:00", "10:00-11:00", "11:00-12:00", "12:00-13:00", 
                                  "13:00-14:00", "14:00-15:00", "15:00-16:00"};

class Subject {
public:
    string name;
    string code;
    int weeklyClasses;

    Subject(string n, string c, int w) : name(n), code(c), weeklyClasses(w) {}
    
    void display() const {
        cout << "Subject: " << name << " (" << code << "), Classes per week: " << weeklyClasses << endl;
    }
};

class Teacher {
public:
    string name;
    string id;
    vector<Subject*> subjects;

    Teacher(string n, string i) : name(n), id(i) {}

    void addSubject(Subject* sub) {
        subjects.push_back(sub);
    }
    
    void display() const {
        cout << "Teacher: " << name << " (ID: " << id << "), Subjects: ";
        for (const auto& sub : subjects) {
            cout << sub->name << " ";
        }
        cout << endl;
    }
};

class Classroom {
public:
    string roomNumber;
    int capacity;

    Classroom(string r, int c) : roomNumber(r), capacity(c) {}
    
    void display() const {
        cout << "Classroom: " << roomNumber << ", Capacity: " << capacity << endl;
    }
};

class TimetableEntry {
public:
    Subject* subject;
    Teacher* teacher;
    Classroom* classroom;
    string day;
    string timeSlot;

    TimetableEntry(Subject* s, Teacher* t, Classroom* c, string d, string ts)
        : subject(s), teacher(t), classroom(c), day(d), timeSlot(ts) {}

    void display() const {
        cout << day << " " << timeSlot << " | " << subject->name << " (" << subject->code << ") | "
             << teacher->name << " | Room: " << classroom->roomNumber << endl;
    }
};

class TimetableGenerator {
private:
    vector<Teacher*> teachers;
    vector<Subject*> subjects;
    vector<Classroom*> classrooms;
    vector<TimetableEntry*> timetable;

public:
    // Helper function to clear input buffer
    void clearInputBuffer() {
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    // Check if teacher is available at given time
    bool isTeacherAvailable(Teacher* teacher, string day, string timeSlot) {
        for (auto entry : timetable) {
            if (entry->teacher == teacher && entry->day == day && entry->timeSlot == timeSlot) {
                return false;
            }
        }
        return true;
    }

    // Check if classroom is available at given time
    bool isClassroomAvailable(Classroom* classroom, string day, string timeSlot) {
        for (auto entry : timetable) {
            if (entry->classroom == classroom && entry->day == day && entry->timeSlot == timeSlot) {
                return false;
            }
        }
        return true;
    }

    // Get valid integer input
    int getValidIntegerInput(const string& prompt, int minValue = 0) {
        int value;
        while (true) {
            cout << prompt;
            cin >> value;
            if (cin.fail() || value < minValue) {
                cin.clear();
                clearInputBuffer();
                cout << "Invalid input. Please enter a valid number (>= " << minValue << ")." << endl;
            } else {
                clearInputBuffer();
                return value;
            }
        }
    }

public:
    ~TimetableGenerator() {
        // Clean up dynamically allocated memory
        for (auto entry : timetable) delete entry;
        for (auto teacher : teachers) delete teacher;
        for (auto subject : subjects) delete subject;
        for (auto classroom : classrooms) delete classroom;
    }

    void addSubject() {
        cout << "\n--- Add New Subject ---" << endl;
        string name, code;
        int weeklyClasses;

        cout << "Enter subject name: ";
        getline(cin, name);
        
        cout << "Enter subject code: ";
        getline(cin, code);
        
        weeklyClasses = getValidIntegerInput("Enter number of classes per week: ", 1);

        Subject* newSubject = new Subject(name, code, weeklyClasses);
        subjects.push_back(newSubject);
        cout << "Subject added successfully!\n";
    }

    void addTeacher() {
        cout << "\n--- Add New Teacher ---" << endl;
        string name, id;

        cout << "Enter teacher name: ";
        getline(cin, name);
        
        cout << "Enter teacher ID: ";
        getline(cin, id);

        Teacher* newTeacher = new Teacher(name, id);
        
        if (!subjects.empty()) {
            cout << "\nAvailable Subjects:" << endl;
            for (size_t i = 0; i < subjects.size(); ++i) {
                cout << i + 1 << ". ";
                subjects[i]->display();
            }

            cout << "Enter subject numbers this teacher can teach (comma separated, 0 to finish): ";
            string input;
            getline(cin, input);
            
            size_t pos = 0;
            while (pos != string::npos) {
                pos = input.find(',');
                string token = input.substr(0, pos);
                input.erase(0, pos == string::npos ? pos : pos + 1);
                
                try {
                    int choice = stoi(token);
                    if (choice == 0) break;
                    if (choice > 0 && static_cast<size_t>(choice) <= subjects.size()) {
                        newTeacher->addSubject(subjects[choice - 1]);
                    }
                } catch (...) {
                    // Ignore invalid entries
                }
            }
        }

        teachers.push_back(newTeacher);
        cout << "Teacher added successfully!\n";
    }

    void addClassroom() {
        cout << "\n--- Add New Classroom ---" << endl;
        string roomNumber;
        int capacity;

        cout << "Enter room number: ";
        getline(cin, roomNumber);
        
        capacity = getValidIntegerInput("Enter room capacity: ", 1);

        Classroom* newClassroom = new Classroom(roomNumber, capacity);
        classrooms.push_back(newClassroom);
        cout << "Classroom added successfully!\n";
    }

    void generateTimetable() {
        if (subjects.empty() || teachers.empty() || classrooms.empty()) {
            cout << "Cannot generate timetable. Please ensure you have added subjects, teachers, and classrooms." << endl;
            return;
        }

        srand(time(0)); // Seed for random number generation

        for (auto subject : subjects) {
            // Find teachers who can teach this subject
            vector<Teacher*> availableTeachers;
            for (auto teacher : teachers) {
                for (auto tSub : teacher->subjects) {
                    if (tSub == subject) {
                        availableTeachers.push_back(teacher);
                        break;
                    }
                }
            }

            if (availableTeachers.empty()) {
                cout << "Warning: No teacher available for subject " << subject->name << endl;
                continue;
            }

            // Schedule each class for this subject
            for (int i = 0; i < subject->weeklyClasses; i++) {
                bool scheduled = false;
                int attempts = 0;
                const int MAX_ATTEMPTS = 100; // Prevent infinite loops

                while (!scheduled && attempts < MAX_ATTEMPTS) {
                    attempts++;

                    // Randomly select day, time, teacher and classroom
                    string day = DAYS[rand() % DAYS.size()];
                    string timeSlot = TIME_SLOTS[rand() % TIME_SLOTS.size()];
                    Teacher* teacher = availableTeachers[rand() % availableTeachers.size()];
                    Classroom* classroom = classrooms[rand() % classrooms.size()];

                    // Check constraints
                    if (isTeacherAvailable(teacher, day, timeSlot)) {
                        if (isClassroomAvailable(classroom, day, timeSlot)) {
                            // Create new timetable entry
                            TimetableEntry* entry = new TimetableEntry(
                                subject, teacher, classroom, day, timeSlot);
                            timetable.push_back(entry);
                            scheduled = true;
                        }
                    }
                }

                if (!scheduled) {
                    cout << "Warning: Could not schedule all classes for subject " 
                         << subject->name << endl;
                }
            }
        }

        cout << "\nTimetable generated successfully!\n";
    }

    void displayTeacherTimetable() {
        if (teachers.empty()) {
            cout << "No teachers available." << endl;
            return;
        }

        cout << "\nAvailable Teachers:" << endl;
        for (size_t i = 0; i < teachers.size(); ++i) {
            cout << i + 1 << ". ";
            teachers[i]->display();
        }

        int choice = getValidIntegerInput("Select teacher (1-" + to_string(teachers.size()) + "): ", 1);
        if (choice < 1 || static_cast<size_t>(choice) > teachers.size()) {
            cout << "Invalid selection." << endl;
            return;
        }

        Teacher* teacher = teachers[choice - 1];
        cout << "\nTimetable for " << teacher->name << " (ID: " << teacher->id << ")\n";
        cout << "----------------------------------------\n";

        vector<TimetableEntry*> teacherEntries;
        for (auto entry : timetable) {
            if (entry->teacher == teacher) {
                teacherEntries.push_back(entry);
            }
        }

        if (teacherEntries.empty()) {
            cout << "No classes scheduled for this teacher." << endl;
            return;
        }

        // Sort by day and time slot
        sort(teacherEntries.begin(), teacherEntries.end(), 
            [](TimetableEntry* a, TimetableEntry* b) {
                int dayA = find(DAYS.begin(), DAYS.end(), a->day) - DAYS.begin();
                int dayB = find(DAYS.begin(), DAYS.end(), b->day) - DAYS.begin();
                if (dayA != dayB) return dayA < dayB;
                
                int timeA = find(TIME_SLOTS.begin(), TIME_SLOTS.end(), a->timeSlot) - TIME_SLOTS.begin();
                int timeB = find(TIME_SLOTS.begin(), TIME_SLOTS.end(), b->timeSlot) - TIME_SLOTS.begin();
                return timeA < timeB;
            });

        for (auto entry : teacherEntries) {
            entry->display();
        }
    }

    void displayAllTimetables() {
        if (timetable.empty()) {
            cout << "No timetable generated yet." << endl;
            return;
        }

        cout << "\nComplete Timetable\n";
        cout << "========================================\n";

        // Group by day and time slot
        map<string, map<string, vector<TimetableEntry*>>> dayTimeMap;

        for (auto entry : timetable) {
            dayTimeMap[entry->day][entry->timeSlot].push_back(entry);
        }

        // Display organized by day and time slot
        for (auto day : DAYS) {
            if (dayTimeMap.find(day) == dayTimeMap.end()) continue;
            
            cout << "\nDay: " << day << "\n";
            cout << "-------------------------\n";

            for (auto timeSlot : TIME_SLOTS) {
                if (dayTimeMap[day].find(timeSlot) == dayTimeMap[day].end()) continue;
                
                cout << timeSlot << ":\n";
                for (auto entry : dayTimeMap[day][timeSlot]) {
                    cout << "  - " << entry->subject->name << " (" << entry->subject->code << ")";
                    cout << " with " << entry->teacher->name;
                    cout << " in Room " << entry->classroom->roomNumber << "\n";
                }
            }
        }
    }

    void displayAllData() const {
        cout << "\n--- Current Data ---\n";
        
        cout << "\nSubjects:\n";
        for (const auto& sub : subjects) {
            sub->display();
        }
        
        cout << "\nTeachers:\n";
        for (const auto& teacher : teachers) {
            teacher->display();
        }
        
        cout << "\nClassrooms:\n";
        for (const auto& room : classrooms) {
            room->display();
        }
    }
};

void displayMenu() {
    cout << "\n===== Timetable Generator Menu =====" << endl;
    cout << "1. Add Subject" << endl;
    cout << "2. Add Teacher" << endl;
    cout << "3. Add Classroom" << endl;
    cout << "4. View All Data" << endl;
    cout << "5. Generate Timetable" << endl;
    cout << "6. View Complete Timetable" << endl;
    cout << "7. View Teacher Timetable" << endl;
    cout << "8. Exit" << endl;
    cout << "===================================" << endl;
}

int main() {
    TimetableGenerator generator;
    int choice;

    do {
        displayMenu();
        cout << "Enter your choice (1-8): ";
        cin >> choice;
        generator.clearInputBuffer(); // Clear the input buffer after reading choice

        switch (choice) {
            case 1:
                generator.addSubject();
                break;
            case 2:
                generator.addTeacher();
                break;
            case 3:
                generator.addClassroom();
                break;
            case 4:
                generator.displayAllData();
                break;
            case 5:
                generator.generateTimetable();
                break;
            case 6:
                generator.displayAllTimetables();
                break;
            case 7:
                generator.displayTeacherTimetable();
                break;
            case 8:
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 8);

    return 0;
}
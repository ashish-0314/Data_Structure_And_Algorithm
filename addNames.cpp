#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    // Group of names
    int n;
    cout<<"Enter n: ";
    cin>>n;
    vector<string> names(n) ;
    
    
    for(int i = 0; i< names.size(); i++){
        cin>>names[i];
    }
    // Display current names
    cout << "Current names: " << endl;
    for (int i = 0; i < names.size(); i++) {
        cout <<  names[i] << " " ;
    }
    cin.ignore();
    // Input the name to insert
    string newName;
    cout << "\nEnter the name you want to insert: ";
    getline(cin, newName);
    cout<<endl;
    // Input the position to insert the name
    int position;
    cout << "Enter the position:  ";
    cin >> position;

    // Insert the name at the specified position
    if (position >= 1 && position < names.size() + 1) {
        names.insert(names.begin() + position - 1, newName);
        cout << "\nUpdated names list: " << endl;
        for (int i = 0; i < names.size(); i++) {
            cout <<  names[i] <<" ";
        }
    } else {
        cout << "Invalid position!" << endl;
    }

    return 0;
}

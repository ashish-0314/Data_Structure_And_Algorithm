#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string str, word;

    // Input string
    cout << "Enter the string: ";
    getline(cin, str);
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    // Input word to search
    cout << "Enter the word to search: ";
    cin >> word;
    transform(word.begin(), word.end(), word.begin(), ::tolower);
    // Find the word in the string
    size_t found = str.find(word);

    if (found != string::npos) {
        cout << "Word '" << word << "' found at position: " << found << endl;
    } else {
        cout << "Word '" << word << "' not found in the string." << endl;
    }

    return 0;
    
}

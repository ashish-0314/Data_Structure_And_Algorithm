// #include <iostream>
// #include<string.h>
// #include <conio.h>
// using namespace std;
// class error{
//     int err_code;
//     char *err_desc;
//     public:
//     error(int c, const char *d){
//         err_code=c;
//         err_desc= new char[strlen(d)];
//         strcpy(err_desc,d);
//     }
//     void err_display(void){
//         cout<<"Error code: "<<err_code<<" Error description: "<<err_desc;
//     }
// };

// int main(){
//     try{
//         throw error(99,"test exception");
//     }
//     catch (error e){
//         cout<<"exception caught successfully";
//         e.err_display();
//     }
//     return 0;
// }






// #include <iostream>
// #include <cstring> // For strlen and strcpy
// using namespace std;

// class error {
//     int err_code;
//     char *err_desc;

// public:
//     // Constructor
//     error(int c, const char *d) {
//         err_code = c;
//         err_desc = new char[strlen(d) + 1]; // Allocate memory for string including null terminator
//         strcpy(err_desc, d); // Copy the string
//     }

//     // Destructor
//     ~error() {
//         delete[] err_desc; // Free allocated memory
//     }

//     // Copy Constructor
//     error(const error &e) {
//         err_code = e.err_code;
//         err_desc = new char[strlen(e.err_desc) + 1];
//         strcpy(err_desc, e.err_desc);
//     }

//     // Assignment Operator
//     error& operator=(const error &e) {
//         if (this != &e) {
//             delete[] err_desc; // Free existing memory
//             err_code = e.err_code;
//             err_desc = new char[strlen(e.err_desc) + 1];
//             strcpy(err_desc, e.err_desc);
//         }
//         return *this;
//     }

//     // Display Error
//     void err_display() const {
//         cout << "Error code: " << err_code << " Error description: " << err_desc << endl;
//     }
// };

// int main() {
//     try {
//         throw error(99, "Test exception");
//     }
//     catch (const error &e) { // Catch by reference to avoid slicing
//         cout << "Exception caught successfully." << endl;
//         e.err_display();
//     }

//     return 0;
// }



#include <iostream>
using namespace std;
void divide(double x, double y){
    cout<<"Inside function";
    try{
        if(y==0.0) throw y;
        else cout<<
    }
}
#include <iostream>
using namespace std;

void InputArray(int arr[], int n) {
    cout << "Inputs: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

void PrintArray(int arr[], int n) {
    cout << "Printing the Array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Printing Done" << endl;
}

int FirstOccu(int arr[], int n, int key) {
    int s = 0;
    int e = n - 1;
    int mid;
    int ans = -1;
    while (s <= e) {
        mid = s + (e - s) / 2;
        if (arr[mid] == key) {
            ans = mid;
            e = mid - 1;
        } else if (arr[mid] < key) {
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }
    return ans;
}

int LastOccu(int arr[], int n, int key) {
    int s = 0;
    int e = n - 1;
    int mid;
    int ans = -1;
    while (s <= e) {
        mid = s + (e - s) / 2;
        if (arr[mid] == key) {
            ans = mid;
            s = mid + 1;
        } else if (arr[mid] < key) {
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }
    return ans;
}

// int TotalOccu(int first, int Last){
//     first = FirstOccu(arr, n, key);
//     Last = LastOccu(arr, n, key);
//     int Total= (Last-first)+1;
//     return Total;
// }

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;
    int arr[n];
    InputArray(arr, n);
    PrintArray(arr, n);
    int key;
    cout << "Enter key: ";
    cin >> key;
    int first = FirstOccu(arr, n, key);
    int Last = LastOccu(arr, n, key);
    cout << "First Occurrence of " << key << " is at index " << first << endl;
    cout << "Last Occurrence of " << key << " is at index " << Last << endl;
    cout<<"Total no of occurence of "<< key << " is "<< (Last-first)+1;
    return 0;
}

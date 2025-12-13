#include <iostream>
using namespace std;

void InputArray(int arr[],int n){
    cout << "Inputs: ";
    for (int i = 0;i<n;i++){
        cin>>arr[i];
    }
}

int Pivotindex(int arr[],int n){
    int start = 0;
    int end = n-1;
    int mid;
    while (start < end){
        mid = start + (end - start)/2;
        if(arr[mid] >= arr[0]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
    }
    return end ;
}

int main(){
    int n;
    cout<<"Enter Size: ";
    cin>>n;
    int arr[n];
    InputArray(arr,n);
    cout<< "Pivot Element is at Index: "<<Pivotindex(arr,n)<<endl;
    int pivotElement = arr[Pivotindex(arr,n)];
    cout<< "Pivot Element is: "<< pivotElement;

}



// #include <vector> // Required for std::vector
// #include <numeric> // Not strictly needed for this solution but often useful with vectors

// class Solution {
// public:
//     std::vector<int> productExceptSelf(std::vector<int>& nums) {
//         int n = nums.size(); 
//         std::vector<int> answer(n);
//         answer[0] = 1;
//         for (int i = 1; i < n; ++i) {
//             answer[i] = answer[i - 1] * nums[i - 1];
//         }
//         int right_product = 1;
//         for (int i = n - 1; i >= 0; --i) {
//             answer[i] = answer[i] * right_product;
//             right_product = right_product * nums[i];
//         }

//         return answer;
//     }
// };
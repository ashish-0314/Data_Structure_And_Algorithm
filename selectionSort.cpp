#include <iostream>
using  namespace std;

void InputArray(int arr[],int n){
    cout<<"Inputs: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}

void PrintArray(int arr[],int n){
    cout<<"Printing the Array: "<< endl;
    for(int i = 0; i< n; i++){
        cout << arr[i] << " " ;
    }
    cout<<endl;
    cout<< "Printing Done" << endl;
}

void SelectionSortAsc(int arr[],int n ){
    for (int i = 0; i< n-1 ; i++){
        int minIndex = i;
        for (int j = i+1; j<n ; j++){
            if( arr[j] < arr[minIndex]){
                minIndex = j ;
            }
        }
        swap(arr[minIndex],arr[i]);
    }
}

void SelectionSortDesc(int arr[],int n ){
    for (int i = 0; i< n-1 ; i++){
        int maxIndex = i;
        for (int j = i+1; j<n ; j++){
            if( arr[j] > arr[maxIndex]){
                maxIndex = j ;
            }  
        }
        swap(arr[maxIndex],arr[i]); 
    }
}

int main(){
    int size;
    cout << "Enter size: ";
    cin>> size;
    int arr[size];
    InputArray(arr,size);
    PrintArray(arr,size);
    SelectionSortAsc(arr,size);
    PrintArray(arr,size);
    SelectionSortDesc(arr,size);
    PrintArray(arr,size);
}





class Solution {
    public:
        int maximumGap(vector<int>& nums) {
            sort(nums.begin(),nums.end());
            int size = nums.size();
            if(size==1) return 0;
            int ans= 0;
            for(int i = 0 ; i< nums.size()-1 ; i++){
                int mindiff=nums[i+1]-nums[i];
                if (ans < mindiff ){
                    ans=mindiff;
                }
            }
            return ans;
        }
    };
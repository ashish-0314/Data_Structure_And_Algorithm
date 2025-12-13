#include <iostream>
using namespace std;
int factorial(int n){
    if(n>1){
        return n * factorial((n-1));
    }
    else if(n<0){
        cout<<"Factorial of negative number is not possible"<<endl;
    }
    else {
        return 1;
    }
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int res=factorial(n);
    cout<<"The factorial of "<<n<<" is: "<<res;

}
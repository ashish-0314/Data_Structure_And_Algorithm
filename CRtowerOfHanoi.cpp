#include <iostream>
using namespace std;

int moveDisks(int n , char source, char auxiliary, char destination){
    if(n==1){
        cout<<"move disk 1 from rod "<<source<<" to rod "<<destination<<endl;
        return 1;
    }
    int moves = moveDisks(n-1, source, destination, auxiliary);

    cout<<"move disk "<<n<<" from rod "<<source<<" to rod "<<destination<<endl;
    moves = moves +1 ;
    moves = moves + moveDisks(n-1, auxiliary, source, destination);
    return moves;
}

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int totalMoves = moveDisks(n,'1','2','3');

    cout<<totalMoves<<endl;

    return 0;
}
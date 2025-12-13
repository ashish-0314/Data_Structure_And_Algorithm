#include<bits/stdc++.h>
using namespace std;

void readKeys(int keys[], int numKeys){
    for(int i = 0 ; i< numKeys; i++){
        cin>>keys[i];
    }
}

void initializeHashTable(int hashTable[], int tableSize){
    for(int i = 0 ; i< tableSize ; i++){
        hashTable[i]= -1 ;
    }
}

void insertKey(int hashTable[], int tableSize ,  int key){
    int hashIndex= key % tableSize;
    int j = 0 ;
    while(hashTable[hashIndex] != -1){
        j++;
        hashIndex = (hashIndex + j*j) % tableSize;
    }
    hashTable[hashIndex] = key;
}

void printHashTable(int hashTable[], int tableSize){
    for(int  = 0 ; i< tableSize ; i++){
        if(hashTable[i] != -1){
            cout<<hashTable[i]<<" ";
        }
    }
}

int main(){
    const int tableSize = 10 ;
    int numKeys;
    int keys[numKeys];
    readKeys(keys,numKeys);

    int hashTable[tableSize];
    initializeHashTable(hashTable , tableSize);

    for(int i = 0 ; i < numKeys ; i++){
        insertKey(hashTable,tableSize,keys[i];)
    }

    printHashTable(hashTable , tableSize);

    return 0 ;
}





#include <bits/stdc++.h>
using namespace std;

#define HASH_SIZE 1000

struct Student{
    int id;
    char name[50];
};

Student studentDB[HASH_MAX];

void initDB(){
    for(int i  0 ; i<HASH_SIZE ; i++){
        studentDB[i].id = -1;
    }
}

void insertStudent(int id , const char* name){
    int index = id % HASH_SIZE ;
    while(studentDB[index].id != -1){
        index = (index+1)% HASH_SIZE;
    }
    studentDB[index].id = id ;
    strcpy(studentDB[index].name,name);
}

const char* searchStudent(int id){
    int index = id % HASH_SIZE;
    while(studentDB[index].id != -1){
        if(studentDB[index].id == id){
            return studentDB[index].name;
        }
        index = (index+1) % HASH_SIZE;
    }
    return "Student not found";
}
int main(){
    initDB();
    int numStudents;
    for(int i = 0 ; i < numStudents ;i++){
        int id;
        char name[50];

        cin>>id;
        cin>>name;

        insertStudent(id , name);

    }

}


#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[],int size){
    for(int i = 0 ; i< size ; i++){
        cout<<arr[i]<<" ";
    }
}

void hashing(int table[], int tsize, int arr[] , int N){
    for(int i = 0; i<N ; i++){
        int hv = arr[i] % tsize ;
        if(table[hv] != -1){
            table[hv]= arr[i];
        }
        else{
            for(int j = 0 ; j<tsize ; j++){
                int t = (hv + j*j) % tsize;
                if(table[t]== -1){
                    table[t] = arr[i];
                    break;
                }
            }
        }
    }
    printArray(table,tsize);
}

int main(){
    int n
}

































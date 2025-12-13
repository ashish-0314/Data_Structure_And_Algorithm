// #include <iostream>
// using namespace std;
// struct node{
//     int data;
//     struct node * right;
//     struct node* left;
// }

// struct node *createbst(struct node *root, int item){
//     if(root == NULL){
//         struct node *newnode = new Node();
//         newnode-> data= value;
//         newnode -> left = NULL:
//         newnode -> right = NULL;
//         return newnode;
//     }
//     if(item < root -> data){
//         root -> left = createbst(root -> left, item);
//     }
//     else {
//         root -> right = createbst(root -> right, item);
//     }
// }

// void inorder(struct node *root){
//     if(root!=Null){
//         inorder(root-> left);
//         cout<<root-> data;
//         inorder(root-> right);
//     }
// }

// struct node* minvaluenode(strucr node *root){
//     struct node *current = root;
//     while(current && current -> left != NULL){
//         current = current -> left;
//     }
//     return current;
// }

// struct node *deletenode(struct node *root , int key){
//     if(root == NULL){
//         return root;
//     }
//     if(key < root-> data){
//         root -> left = deletenode(root -> left , key);
//     }
//     else if(key> root-> data){
//         root -> right = deletenode(root -> right ,key);
//     }
//     else {
//     if (root -> left == NULL){
//         struct node * temp = root -> right;
//         delete root;
//         return temp;
//     }
//     else if (root -> right == NULL){
//         struct node * temp = root -> left;
//         delete root;
//         return temp;
//     }
//     struct node *temp = minvaluenode(root -> right);
//     root -> data = temp -> data;
//     root - right = deletenode(root -> right , temp -> data);
        
//     }
//     return root;
// }

// int main(){
//     struct node *root = NULL;
//     int choice , item , n , i;
//     while(1){
//         cin>>choice;
//         switch(choice){
//             case 1:
//             root = NULL;
//             cin>> n;
//             for(i = 1 ; i< = n ; i++){
//                 cin>>item;
//                 root = createbst(root, item);
//             }
//             break;
//             case 2:
//             cout<<"inorder: ";
//             inorder(root);
//             cout<<endl;
//             break;
//             case 3:
//             cin>>item;
//             root = deletenode(root, item);
//             break;
//             case 4:
//             return 0;
//             break;
//             default :
//             cout<<"Invalid choice"<<endl;
//             break;
//         }
//     }
//     return 0;
// }


#include <iostream>
using namespace std;
void swap( int *x , int *y){
    int temp = *x;
    *x = * y;
    *y = temp;
}

void minheapify(int heap[], int size , int i){
    int smallest = i;
    int left = 2*i+1;
    int right = 2*i+2;
    if(left <size && heap[left]<heap[smallest]){
        smallest= left;
    }
    if(right<size && heap[right]<heap[smallest]){
        smallest = right;
    }
    if(smallest!= i){
        swap(&heap[i], &heap[smallest]);
        minheapify(heap, size , smallest);
    }
}

void deleteroot(int heap[], int &size){
    if(size<=0){
        cout<<"Heap is empty";
        return;
    }
    if(size==1){
        size--;
        return;
    }
    heap[0] = heap[size -1];
    size--;
    minheapify(heap, size , 0);
}

void heapsort(int heap[], int size){
    buildmaxheap(heap, size);
    for(int i = size-1; i>0)
}
void insertMinHeap(int heap[], int &size , int value){
    heap[size]= value ;
    size++;

    int i = size - 1;
    while ( i != 0 && heap[(i-1)/2]> heap[i]){         // for insertMaxHeap heap[(i-1)/2]< heap[i] 
        swp(&heap[i], &heap[(i-1)/2]);
        i = (i-1)/2;
    }
}

void insertMaxHeap(int heap[], int &size , int value){
    heap[size]= value ;
    size++;

    int i = size - 1;
    while ( i != 0 && heap[(i-1)/2] < heap[i]){         
        swp(&heap[i], &heap[(i-1)/2]);
        i = (i-1)/2;
    }
}

void printHeap(int heap[], int size){
    cout<<"Heap elements: ";
    for(int i = 0; i< n ; i++){
        cout<<heap[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n ;
    cin>> n ;
    int heap[100];
    int size = 0;
    for(int i = 0; i< n; i++){
        int value;
        cin>>value;
        insertMinHeap(heap, size, value);
    }
    printHeap(heap, size);
    deleteroot(heap,size);
    printHeap(heap, size);
}
















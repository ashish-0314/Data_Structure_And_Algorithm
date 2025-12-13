#include <iostream>
#include <queue>
using namespace std;

class Node{

    public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        this->data = d;
        this->left= NULL;
        this->right=NULL;
    }
};

void levelOrderTraversal(Node* root) {
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {
        Node* temp = q.front();
        q.pop();

        if(temp == NULL) { 
            //purana level complete traverse ho chuka hai
            cout << endl;
            if(!q.empty()) { 
                //queue still has some child ndoes
                q.push(NULL);
            }  
        }
        else{
            cout << temp -> data << " ";
            if(temp ->left) {
                q.push(temp ->left);
            }

            if(temp ->right) {
                q.push(temp ->right);
            }
        }
    }

}

void inorder(Node* root) {
    //base case
    if(root == NULL) {
        return ;
    }

    inorder(root->left);
    cout << root-> data << " ";
    inorder(root->right);

}

void preorder(Node* root) {
    //base case
    if(root == NULL) {
        return ;
    }

    cout << root-> data << " ";
    preorder(root->left);
    preorder(root->right);

}

void postorder(Node* root) {
    //base case
    if(root == NULL) {
        return ;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root-> data << " ";

}

Node* insertIntoBST(Node* root , int d){
    //base class
    if(root == NULL){
        root = new Node(d) ;
        return root;
    }

    if(d > root -> data){
        root->right= insertIntoBST(root->right , d);
    }

    else{
        root->left = insertIntoBST(root->left , d);
    }

    return root;
}

void takeInput(Node* &root){
    int data;
    cin>>data;

    while(data != -1){
        root = insertIntoBST(root , data);
        cin>>data;
    }
}

bool searchInBST(Node* root , int x){
    if(root ==NULL){
        return false;
    }
    if(root->data == x){
        return true;
    }
    if(root->data >x){
        //left part
        return searchInBST(root->left , x);
    }
    else{
        return searchInBST(root->right, x);
    }
}

bool SearchInBst(Node* root,int x){
    Node* temp = root;

    while(temp != NULL){
        if(temp->data == x){
            return true;
        }
        if(temp->data > x){
            temp = temp->left;
        }
        else{
            temp = temp->right;
        }
    }
    return false;
}

Node* minValue(Node* root){
    Node* temp = root;

    while(temp->left != NULL){
        temp = temp->left;
    }
    return temp;
}

Node* maxValue(Node* root){
    Node* temp = root;
    while(temp->right != NULL){
        temp=temp->right;
    }
    return temp;
}

Node* deleteFromBST(Node *root , int value){
    //base case
    if(root == NULL){
        return root;
    }

    if(root->data == value){
        //0 child
        if(root->left ==NULL && root->right == NULL){
            delete root;
            return NULL;
        }
        //1 child
            //left child
        if(root->left != NULL && root->right == NULL){
            Node* temp= root->left;
            delete root;
            return temp;
        }
            //right child
        if(root->left == NULL && root->right != NULL){
            Node* temp = root->right;
            delete root;
            return temp;
        }
        //2 child
        if(root->left != NULL && root->right != NULL){
            int mini = minValue(root->right) ->data ;
            root->data = mini;
            root->right = deleteFromBST(root->right, mini);
            return root;
        }
    }

    else if(root->data > value){
        //left part me jao
        root->left = deleteFromBST(root->left,value);
        return root;
    }

    else{
        //right part me jao
        root->right = deleteFromBST(root->right,value);
        return root;
    }
}

int main(){

    //10 8 21 7 27 5 4 3 -1
    Node* root = NULL;
    cout<<"Enter data to create BST"<<endl;
    takeInput(root);
    cout<<"printing the BST"<<endl;
    levelOrderTraversal(root);
    cout<<endl<<"Inorder"<<endl;
    inorder(root);
    cout<<endl<<"preorder"<<endl;
    preorder(root);
    cout<<endl<<"postorder"<<endl;
    postorder(root);

    // int key ;
    // cout<<"Enter key : ";
    // cin>>key;
    // if(searchInBST(root,key)){
    //     cout<<"present";
    // }
    // else{
    //     cout<<"Absent";
    // }
    // if(SearchInBst(root,key)){
    //     cout<<"present";
    // }
    // else{
    //     cout<<"Absent";
    // }

    cout<<endl;
    cout<<"Min Value: "<<minValue(root)->data<<endl;
    cout<<"Max value: "<<maxValue(root)->data<<endl;
    return 0;

}

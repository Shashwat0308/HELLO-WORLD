#include<iostream>
using namespace std;


class  Node {
    public :
    int data;
     Node* left;
     Node* right;
    
     //constructor creation 
     Node(int d){
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;

     }
}; 


Node* insertIntoBST(Node* &root , int d){
    //base case

    if(root == NULL){
        root = new Node(d);
        return root;
    }
    if(d > root -> data){
        //insert in right part
        root -> right = insertIntoBST(root -> right , d); 
    }

    else{
        // insert in the left part 
        root -> left = insertIntoBST(root -> left , d);

    }
    return root; 

}

Node* takeInput(){

    int data;
    cin >> data;

    Node* root = NULL;

    while( data !=  -1) {
        root = insertIntoBST(root, data);
        cin>> data;

    }
    return root;
}

// inorder function  made for traversal using lnr 
void inorder(Node* root) {
    if(root == NULL) 
        return;

    inorder(root->left);        // Left subtree
    cout << root->data << " ";  // Root
    inorder(root->right);       // Right subtree
}


 int main(){

   

    cout << "enter data to creste BST  "  << endl;

       Node* root = takeInput();

       cout << "the inoder traversal are " << "  ";

       inorder(root);

     return 0;

 }
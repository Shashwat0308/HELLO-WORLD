#include<iostream>
using namespace std;


class Node{
    public :
    int data;
    Node* left;
    Node* right;

    Node(int d){
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;

    }
};

Node* buildTree(Node* root){
    cout << "enter the data" << endl;
    int data;
    cin >> data;
    

    if(data == -1){
        return NULL;
    }
    root = new Node(data);
    cout << "enter the data for left insertion   " << data << endl;
    root -> left = buildTree(root -> left);
    cout << "enter the data for right insertion " << data << endl;
    root -> right = buildTree(root -> right);
    return root;
}


int main(){

    Node* root = NULL;
     root = buildTree(root);

}

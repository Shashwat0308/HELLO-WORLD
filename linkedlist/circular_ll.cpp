#include<iostream>
using namespace std;

class Node{
    public :
    int data;
    Node* next;

    //constructor here 
    Node(int d){
        this-> data =  d;
        this -> next = NULL;
    }
    //destructor here 
    ~Node(){
        int value = this -> data;
        if(this -> next != NULL){

            next = NULL;

        }
    }

};

void insertNode(Node* &tail, int element , int d){ 
    //assuming the element is present in the list 
    //EMPTY LIST
    if(tail == NULL){
     Node* newNode = new Node(d);
     tail = newNode;
     newNode -> next = newNode;
    } 
else{
       // non empty list 
       // assuming that the element is present in the list 

       Node* curr = tail;
       while(curr -> data  != element){
        curr =  curr -> next;
       }

       // element found -> current is representig element wla node 

       Node* temp =  new Node(d);
       temp -> next = curr -> next;
       curr -> next = temp;
}

}

//traversing of circlar linked list 
void print(Node* tail){
    if(tail == NULL){
        cout << "list is empty" << endl;
        return;
    }
    Node* temp = tail;
    do{
        cout << temp -> data << " ";
         temp = temp -> next;
    } while( temp != tail);
    cout << endl;
}


void deleteNode(Node* &tail, int value){
    //empty list 

    if(tail == NULL){
        cout << "list is empty " << endl;
    }
    else{

        //non empty
        //assuming that value is presnet in the linked list
        Node* prev = tail;
        Node* curr = prev -> next;
        while ( curr -> data !=  value) {
            prev = curr;
            curr = curr -> next;
        }
    prev -> next = curr -> next;
    curr -> next = NULL;
    delete curr;

    }


}


int main(){

Node* tail = NULL;


insertNode(tail, 5 , 3);
print(tail);


insertNode(tail, 3 , 10);
print(tail);

deleteNode(tail, 2);
print(tail);

}


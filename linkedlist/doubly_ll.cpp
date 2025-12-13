#include<iostream>
using namespace std;

class  Node{
    public : 
    int data;
    Node* prev;
    Node*  next;

    //constructor
        Node(int d){
            this ->  data = d;
            this -> prev = NULL;
            this -> next = NULL;
        }
        ~Node(){
            int val = this -> data;
            if(next != NULL){
                delete next;
                next = NULL;
            }
            cout << "memory free " << val << endl;
        }
};

//traversing a  linked list 
void print(Node* head){
    Node* temp =  head;

    while( temp != NULL){
       cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}


// getting lenght of the linked list 
int getLength(Node* head){
    int len = 0;
    Node* temp = head;
    while( temp != NULL){
        len++;
        temp = temp -> next;
    }
    return len;
}
//insertion at head 
void InsertatHead(Node* &head , int d){
    Node* temp = new Node(d);
    temp -> next = head;
    head -> prev = temp;
    head = temp;
     
}

//insertion at tail
void InsertAtTail (Node* &tail, int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    temp -> prev = tail;
    tail = temp;
}

//deletion of node in singly linked list 

void deleteNode(int position, Node* &head){
    //deletion first or start node 
    if(position == 1){
        Node* temp = head;
        temp ->  next  -> prev = NULL;
        temp -> next = NULL;
        head = temp -> next;
        temp -> next = NULL;
        //memory free
        delete temp;
    }
    else{
        //deletion of  any middle or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
         while(cnt < position) {
        prev = curr;
        curr = curr -> next;
        cnt++;
         }
       curr ->   prev = NULL;
       prev -> next = curr -> next;
       curr -> next = NULL;
     delete curr;
    }
}




int main(){

    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    print(head);


    cout << getLength(head) << endl;
    InsertAtTail(tail, 25);
    print(head);

    deleteNode(1, head);
    print(head);

      deleteNode(3, head);
          print(head);

    return 0;





}
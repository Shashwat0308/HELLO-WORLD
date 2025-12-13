#include<iostream>
using namespace std;

 //creating a node here named as Node 
class Node {
    public :
    int data;  //data of the node 
     Node* next; // using pointer to point the address of the next node 
     
     // created a constructor here 
     Node(int data){
        this -> data = data;
        this -> next  = NULL;
     }
     //destructor here
     ~Node(){
        int value = this -> data;
        if(this -> next  != NULL){
            delete next;
            this-> next = NULL;
        }
        cout << "memory is free for node with data" << value  << endl;
     }
};

 // inserting at head in singllly linked list 
void InsertAtHead( Node* &head, int d) {

    //new node created 
    Node* temp = new Node(d);
     temp -> next  = head;
     head = temp;
}
//insertion at end 
void InsertAtTail( Node* &tail , int d){
    //new node created
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = tail -> next;
}

 // traversing in singly linked list
void  print(Node* &head){
    Node* temp = head;
   

    while(temp != NULL){
        cout << temp -> data << "  " ;
        temp = temp -> next;
  }
  cout << endl;
}

//insertion in middle of single linkly list
void InsertAtPosition(Node* &head, Node* &tail,int position, int d ){
    //inserting at firsrt positon
    if(position == 1){
        InsertAtHead(head, d);
        return ;
    }
    Node* temp = head;
    int cnt = 1;
    while(cnt < position - 1){
        temp =  temp -> next;
        cnt++;
    }
   // inserting at last positioon
    if(temp -> next == NULL){
        InsertAtTail(tail,d);
        return ;

    }

    Node* nodeToInsert = new Node(d);
    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert ; 
}

//deletion of node in singly linked list 

void deleteNode(int position, Node* &head){
    //deletion first or start node 
    if(position == 1){
        Node* temp = head;
        head = head -> next;
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
         prev -> next = curr -> next;
         curr -> next = NULL;
         delete curr;

    }

     

}

int main(){

    Node* node1 = new Node(10);
    //cout << node1 -> data << endl;
    //cout << node1 -> next << endl;
     //cout << "what is my name  " << endl;

     Node* head = node1;
      Node* tail = node1;
     print(head);


     InsertAtHead(head , 12);
     print(head);

      InsertAtHead(head , 15);
      print(head);

      InsertAtPosition(head,tail, 3,  23);
      print(head);

      InsertAtTail(tail , 22);
      print(head);

      deleteNode(1,head);
      print(head); 
      
         
}
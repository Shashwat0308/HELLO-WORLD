#include<iostream>
using namespace std;


class List{
    public :
    int data;
    List* next;

     List(int data) {
        this->data = data;
        this->next = NULL;
     }

};


int main(){
    List*  prev = NULL;
    List* head = new List(1);  
    List* curr =  head;
    List* forward = NULL;
    while( curr != NULL){
        forward = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = forward;

    } 
     cout << prev -> data << endl;
     return 0;
}
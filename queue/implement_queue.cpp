#include<iostream>
using namespace std;


class Queue{
    public :
    int *arr;
    int size;
    int front;
    int rear;
    
  //   creating a construcit with s as size of the quesue which will store the element . 
    Queue(int s){
         size = s;
         arr = new int[size];
         front = -1;
         rear = -1;

    }

    void enqueue(int s){
        if(rear == size -1){
            cout << "queue is full" << endl;
        }
        else{
            if(front == -1) front = 0;
            arr[++rear] = s;
    
        }
    }

    void dequeue(){
        if(front == -1 || front > rear){
            cout << "queue is empty" << endl;
        }
        else{
            cout << arr[front] << endl;
            front++;
        }
    }

    bool isEmpty(){
        if(front == -1 || front > rear){
            return true;
        }
        else{
            return false;
        }
    } 
};


int main(){
    Queue q(5);
    q.enqueue(22);
    q.enqueue(11);
    q.enqueue(20);
    q.enqueue(19);
    q.dequeue();
     q.dequeue();
      q.dequeue();
       q.dequeue();

   
   if(q.isEmpty()){
    cout << "queue is empty" << endl;
   }
   else{
    cout << "queue is not empty" << endl;
   }
   
}


#include<iostream>
using namespace std;


class Stack {
    //propeeries

     public :
     int *arr;
     int top;
     int size;
  

     // behaviour 
     Stack(int size){
        this -> size = size;
        arr = mew int(size);
        top = -1;

     }

     void push( int element){

     }

     void pop(){

     }

     int peek(){

     }
     bool isEmpty(){

     }




     int  main(){

        stack s1(5);
        s1.push(22);
        s1.push(20);
        s1.push(33); 

        
     }








}
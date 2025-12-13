#include<iostream>
#include<queue>
using namespace std;


int main(){
    deque<int> d;
   // STL USED IN DEQUEUE 
    d.push_back(19);
    d.push_front(22);
    cout << "the queue is " << d.back () << endl; 
    d.pop_front();
    d.push_back(11);
    d.pop_back();
    d.pop_back(); 

    if(d.empty()){
        cout << "queueu is empty" << endl;
    }
    else{
        cout << "queueu is not empty " << endl;
    }





    return 0;
}
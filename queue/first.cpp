#include<iostream>
#include<queue>
using namespace std;


int main(){
      queue<int> q;
      q.push(22);
      q.push(11);
      cout << "front of queue is  " << q.front() << endl;
      q.push(02);



        cout << "size of queue is " << q.size() << endl;

        q.pop();
         cout << "size od queue is " << q.size() << endl;  

         if(q.empty()){
            cout << "queue is empty" ;

         }
         else{
            cout << "queue is not empty" << endl;
         }
       







}
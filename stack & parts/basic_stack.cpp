#include<iostream>
#include<stack>
using namespace std;

/* creation of a stack takes place using the stack library and inside the
     < >   , the type of data type is written which type u want to make the stack */

int main(){
    stack <int> s;
    s.push(5);
    s.push(4);
    s.push(8);// to know more  about it 
    //using pop is mainly remove the top element present inside the  stack 
    s.pop();
    s.pop();

    cout << "print the top element " << s.top() << endl;
    if(s.empty()){
        cout << "stack is empty " << endl;
    }
    else{
        cout << "stack is not empty" << endl;
    }

   cout << "size of stack is " << s.size() << endl;
}
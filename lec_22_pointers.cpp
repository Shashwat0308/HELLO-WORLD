#include<iostream>
using namespace std;

int main(){

    int num = 5;
    int *ptr = &num;

    char ch = 'a';
    char *p = &ch;



    cout << "the address of ch is  " << *p << "\n";    

    //address of a operator 

//  cout << "the sum is " <<  num  << "\n";

    cout<<  "value  of num is " << *ptr << endl;
     cout<< "addrweas of num is " << ptr << endl;

     cout<< "the size of num is " << sizeof(num) << endl;
     cout<< "the size of character is " << sizeof(ch) << endl;
      cout<< "the size of pointer  is " << sizeof(ptr) << endl;
       cout<< "the size of pointer  is " << sizeof(p) << endl;
    

    return 0;







}
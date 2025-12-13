#include<iostream>
using namespace std;

int main(){
   // int *p = 0;
    
  // cout << "the address of pointer   is " <<  *p << endl;

      
 int i = 5;
 cout << "before "<< i << "\n";
 int *ptr = &i;
 (*ptr)++; // using ++ increases the value stored on pointer by 1  . that  is num ;


 cout << "after " << i  << "\n";
 int *p = 0;
 p = &i;
  cout << p << endl;
 cout << *p << endl;
  
  p = p +1;
  cout << "after is  size is " << p ; 






}
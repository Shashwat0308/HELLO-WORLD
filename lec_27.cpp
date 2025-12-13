#include<iostream>
using namespace std;
int main(){
    int i = 5;
    int *p = &i;
    int** p2 = &p;



    cout << "all  is right " <<  endl;

    cout << "printing p " << p << endl;
   // cout << "address of p " << &p<< endl;
    //cout << "printing p2 " << &p2 << endl;
  cout << *p2 << endl;
  cout << i << endl;
  cout << *p << endl;
  cout << **p2<< endl;

  






}
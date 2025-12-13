#include<iostream>
using namespace std;


void update(int &n){ // here after int we used a refernece variable; 
    n++; // this conecpt is called pass by reference.
}
int main(){
    int i = 5;
    //refernece varibele created
    int &j = i;

    cout << i <<  endl;
    i++;
    cout << i << endl;
    j++;
    cout << j << endl;


    int n = 8;
    cout << "before" << n << endl;
     
    update(n);
    cout << "after " << n<< endl;
    
     char ch = 'a';
     cout << sizeof(ch)<< endl;
     char *c = &ch;
    cout << sizeof(c)<< endl;

    return 0;















}
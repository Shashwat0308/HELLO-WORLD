#include<iostream>
using namespace std;
int main(){
    int  m ,n;
    cout<< " the numbers  are:  ";
    cin>> m>> n;
    if( n == 0){
        cout<< "false";
    } 
    else if( m % n == 0) {
        cout<< "true";
    }
    else {
        cout<< "false";
    }
return 0;
}









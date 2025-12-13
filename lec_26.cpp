#include<iostream>
using namespace std;

int main(){
    int arr[10] = {2,5,6,18};



    cout << "address of first memmory block is " << arr << endl;
    cout << arr[0]<< endl;
    cout << "address of first memmory block is " << &arr[0] << endl;
    cout << "first " << *arr <<  endl;
    cout << "second " << *arr +1 << endl;
    cout << "third " << *(arr + 1) << endl;
    cout << "fourth " << *(arr) + 1 << endl;
    int i = 3;      
    cout << "fifth " << i[arr]<< endl;



    return 0;

















}

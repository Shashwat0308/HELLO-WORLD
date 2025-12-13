#include<iostream>

#include<vector>
using namespace std;
 int main(){
vector<int> v;  // vector stl command is used here in this program 

cout<<"Size ->" << v.capacity() << endl;

v.push_back(0);
cout<<"Size ->" << v.capacity() << endl;



v.push_back(1);
cout<<"Size ->" << v.capacity() << endl;



v.push_back(2);
cout<<"Size ->" << v.capacity() << endl;

v.push_back(5);
cout<<"Size ->" << v.capacity() << endl;


v.push_back(6);
cout<<"Size ->" << v.capacity() << endl;
 }

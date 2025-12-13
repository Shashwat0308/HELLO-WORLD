#include<iostream>
#include<vector>
using namespace std;

// Find the Frequency of an Element
//  Write a function to count how many times a given number appears in a vector.

int count_num(vector<int>v2, int x){
int num = 0;
for(int i =0; i<v2.size(); i++){
  if(v2[i]== x){
   num = num + 1;
  }  
    

}
return num;
}

int main(){
    int y;
    cout << "enter the number you want the frequency : ";
    cin>>y;
    int n;
    cout << "Enter number of elements: ";
    cin >> n; // Take size input

    vector<int> v(n); // Create a vector of size n
    cout << "Enter " << n << " elements: ";

    for(int i = 0; i < n; i++) {
        cin >> v[i]; // Take input for each element
    }

    cout<< "the number of times: " << y << " appears in given vector is : "<< count_num(v,y);
}

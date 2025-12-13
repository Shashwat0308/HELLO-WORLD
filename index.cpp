#include<iostream>
#include<vector>
using namespace std;

//.Find the Index of an Element
//  Write a function to find the index of a given element in a vector. If the element is not found, return -1.


int index_pos(vector<int>v1,int target){
    int start=0;
  for(int i =0; i<v1.size();i++){
    if(v1[i] == target){
       return i;
  }



}
 return -1;

}

int main(){

    int w;
    cout<<"the target element is : ";
    cin>>w;
    int n;
    cout<<"size of the vector is : ";
    cin>>n;
 vector<int>v1(n);
 cout<<"enter the vector: ";
for(int i =0; i<n;i++){
  cin>>v1[i];
   if(index_pos(v1,w) != -1){
    cout<<" the index of element is : "  <<  index_pos(v1,w);
  
   }
   else{
    cout<<"element not found";
   }
   
  

}


}







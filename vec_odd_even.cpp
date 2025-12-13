#include<iostream>
#include<vector>
using namespace std;

void set_of_numbers(vector<int> v1){
    int numbers_of_even = 0;
    for(int i =0; i<v1.size(); i++){
   if(v1[i] % 2 == 0){
     numbers_of_even = numbers_of_even + 1;
   }
}
cout<<"number of even are : " << numbers_of_even<<"\n";
cout<<"number of odd are : "<< v1.size() - numbers_of_even<<"\n";

}


int main(){
    
    int n;
    cout<<"Enter the size of  vector : ";
    cin>>n;
 vector<int> v1(n);
 
 cout<<"enter the vector: " ;
  for(int i = 0; i<v1.size(); i++){
 cin>>v1[i];
  }
 
 set_of_numbers(v1);
}






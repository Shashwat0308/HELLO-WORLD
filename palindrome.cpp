#include<iostream>
#include <vector>
using namespace std;

//. Check if a Vector is Palindromic
//Write a function to check if a vector reads the same forward and backward.


bool   palindrome_check(vector<char> word){
    int n = word.size();
    for(int i = 0;i< n/2 ;i++){
        if(word[i] != word[n -i- 1]){
           return  false; 
        } 
        

    } 
   
  return true;
        
    }

    int main(){
        
        vector<char>word = {'m','a','d','a',};
       if(palindrome_check(word)){
 cout<<"it is  a palindrome";
       }
       else{
        cout<<"it is not a palindrome";
       }
    }



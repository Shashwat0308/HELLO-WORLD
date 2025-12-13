#include<iostream>
#include<vector>
using namespace std;



// (m,a,d,a,m) v4 ko  v0 se, v1 ko v3 se, v2 ko v2 se ; iski size 5 hai 
// (r,a,s,t,s,s,t,s,a,r) v0 ko v9 se, v1 ko v8 , v2 ko v7 se, v3 ko v6 - return false
// iski size 10 hai 
bool palindrome(vector<char>v1){
 int n = v1.size();

    for(int i=0; i<v1.size()/2;i++){
   if(v1[i] !=v1[v1.size()-i-1]){
  return false;
   }
     
    }

  return true;


  










}
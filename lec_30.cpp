#include<iostream>
using namespace  std;



#define PI 5 // creating a macros 

inline int getmax(int a , int b){
    return (a>b) ? a : b;
}

 int main(){
    int  r = 4;
    int area = PI * r * r;
    cout << "area of circle is " << area << endl;


    //inline functions 

     int a = 1, b = 3;
     int ans = 0;


     ans = getmax(a,b);
      
     a = a+ 3;
     b = b + 1;

     ans = getmax(a,b);
     cout << ans << endl;

     // inline funcntions are used that we have to not write the function again and again.it also saves memory space and time too.
     

      return 0;




  




 }
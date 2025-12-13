#include<iostream>
using namespace std;
int main(){
     int n;
    cout<<"the number  is ";
    cin>>n;
    int sum = 0;

   // n = 232, 23 , 2, 0
   //sum =0,  2 ,  5 , 7 

    while(n>0){
          sum = sum + (n % 10 );
          n = n / 10 ;

         

    }
    


  
  cout<<"sum is "<< sum; 

}   




/*take the remainder after dividing by 10 and update the number  by dividing it by 10 ;
196 :  sum = 6 + 9 + 1 
n = n /10 
  19 :  n % 10 where n is  19


for ex : 234 
sum = 4 + 3 + 2 = 9
first the  sum is 0   then we have sum = 0 + (4 )
  now n becomes n / 10 so we have n = 23 
  then we do it and now the sum is 23 % 10 gives 3; 
  now n becomes 2/10 which gives us  2 in intger valaue and now as we again go we see n has become lesss than 0 , so the
   while loop gets terminated and   we get the sum of the digits of the numbers .abort






*/
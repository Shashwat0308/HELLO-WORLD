/*#include<iostream>
#include<math.h>
using namespace std;
int main(){
    bool check = 1;
    int noofloop=3;
    while(noofloop>0){
    int n;
    cout<<"the number to be checked is ";
    cin>>n;

    for(int i= 2; i<=sqrt(n); i++) {
        if(n % i == 0){
             cout<<"the number is not prime\n";
            check = 0;
            break ;

        }

    
    }
 if(check == 1){
cout<<"number is prime\n";
 }
noofloop--;
check = 1;
    }


}











// check == 0

/*
12 
divisor  = 2, 3 , 4 , 6 
quotient = 6, 4 , 3 , 2

98 
divisor =  2 , 7 , 14  , 44
quotient = 44 , 14 , 7 , 2

root n * root n = n

a * b = n 
36 
2,18
3, 12,
4,9,
6,6
9,4
12,3
18,2









  */ 






 #include<iostream>
 #include<vector>
 using namespace std;

 int sum_of_numbers(vector<int>v1){
  int sum = 0;
  for(int i = 0; i <v1.size(); i++){
    sum = sum + v1[i];
  }
  return sum;
 }

 int largest_numbers(vector<int>v2){
   int number = INT32_MIN;
   for(int i = 0; i <v2.size(); i++){
    if( number < v2[i]){
       number = v2[i];
    }
   }
   return number;
 }

 int main(){

  cout << sum_of_numbers({23,4,34,2,4,234,2445,454,355,256}) << "\n" << largest_numbers({223,33,4,433,2,22,3,223,3,33,3})<< endl;




 }



 






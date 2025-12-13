
#include<iostream>
using namespace std;
// write a function to  return  twice of  the input number  n  where n is integer and input to function

int double_number(int n){
     int ans = 2*n;
     return ans;
}

// write a function to return sum of n     natural numbers where n is input to fucntion and is integer 

int sum_natural_numbers(int n ){
    int sum = 0;
    for(int i = 1; i <= n ; i++){
        sum = sum + i;
    }
    return sum;
} 
/* 
 n = 5 
 i    =   1 2 3 4  5

 sum  = 0 1 3 6 10 15



*/

//write a function to return true if string s  is my  brother  and false if not. take s as input to function

bool isBrother(string s){
    
    if( s == "shivank"){
        return true;
    }
    else{
        return false; 
    }
}


int main(){
    string brother_name;
    cout << "the name given is " ;
    cin >> brother_name;

    bool answer = isBrother(brother_name);
    if(answer){
        cout << "yes " << endl;
    }
    else{
        cout << "no " << endl;
    }
 
}


  
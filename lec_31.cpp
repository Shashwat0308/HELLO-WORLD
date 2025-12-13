#include<iostream>
using namespace std;

int factorial(int n){
    /* base case is always returned with 1 as if not then the  stack memmory
    overflow and  then segementation fault is shown in the code .

   */
    if(n==0)  // base case is n = 0 for factorial of any number '
    return 1;

    int smallproblem = factorial(n-1);
    int bigproblem = n * smallproblem;


    return bigproblem;
}
 // here we are doing the  2^n =  2 * 2^(n-1)
int power(int m){
    if(m==0)
    return 1;
 int smallerproblem  = power(m-1);
 int biggerproblem =  2 * smallerproblem;

 return biggerproblem;
}




int main(){

    int n;
    cout << "the value of  n  is  " ;
    cin>>n;

    int ans = factorial(n);
    cout << ans << endl;

    int m;
    cout << "the value of m  is " ;
        cin>>m;

    int answer = power(m);
    cout << answer << endl;

    return 0;



}
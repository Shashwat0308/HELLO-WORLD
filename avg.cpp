#include <iostream>
using namespace std;

int main(){
    int  numbers[5];

   
    int sum = 0;
    float average;

     cout << "enter the numbers :  ";

     for (int i = 0; i < 5; i++){
        cin >> numbers[i];
        sum = sum + numbers[i];
        
     }
      average = sum / 5.0 ;

      cout << "average of numbers is  " << average << endl;

      return 0;









}
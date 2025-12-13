#include<iostream>
using namespace std;


bool checkPalindrome(string str, int i , int j){
    if(i >j){
        return true;
    }

    if(str[i] != str[j]){
        return  false;
    }
    else{
        return checkPalindrome(str, i+1, j -1 );
    }
}



int main(){
    string name = "whaahw";

    bool isPalindrome = checkPalindrome(name, 0 , name.length()-1);

    if(isPalindrome){
        cout << "it is palindrome" << endl;
    }
    else{
        cout << "it is not a palindrome " << endl;
    }
}
#include<iostream>
using namespace  std;

int main(){
    int arr[5] = {1,3,2,3,4};
    char ch[6] = "abcde"; // here take size as 6 as there is a space for null
                    // character at last of

    cout << arr << endl;
    cout << ch << endl;
 // use iof cout is different in char arrays as to integer arrays .

 char *c = &ch[0];
 cout << c << endl;

 char temp = 'z';
 char *p = &temp;
 cout << p << endl;


    return 0;


}
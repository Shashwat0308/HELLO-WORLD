#include<iostream>
#include<vector>
using namespace std;

int check_num(vector<int>number,int num){
    for (int i = 0; i < number.size(); i++) {
        if (number[i] == num) {
            return 1;  
        }
    }
    return 0;  
}


int main(){
    int n;
    cout<<"the number to be checked is : ";
    cin>>n;

    int size_of_vector;
    cout<<"the size of the vector is : ";
    cin>>size_of_vector;

    cout<<"the vector is here: ";

    vector<int>v1(size_of_vector);
    for(int i = 0; i< size_of_vector; i++){
        cin >> v1[i];
    }
    //here the check_num function is being called and executed with the if condition and that is defined above the main function.

        if(check_num(v1,n)){
            cout<<"the number is in the vector";
        }
        else{
            cout<<"the number is not presnet in the vector";
        }
 }

 


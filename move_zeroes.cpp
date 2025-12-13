
#include<iostream>
#include<vector>
using namespace std;

void moveZeroes( vector<int>&v1 ){
    int n = v1.size();
    int pos = 0;

    for(int i = 0 ; i < n ; i++){
        if(v1[i] != 0){
            v1[pos] = v1[i];
            pos++;
        }
    }
    for(int i = pos; i < n; i++){
        v1[i] = 0;
    }
}

//[0, 1, 0, 3, 12]
//[1, 3, 12, 0, 0]

//[0, 0, 1]
//[1, 0, 0]

//[4, 2, 4, 0, 0, 3, 0, 5, 1, 0]
//[4, 2, 4, 3, 5, 1, 0, 0, 0, 0]


int main(){
    vector<int>v1 = {0, 1, 0, 3, 12};

    moveZeroes(v1);
    for(int i = 0; i < v1.size(); i++){
        cout << v1[i] << "  ";
    }
   
}
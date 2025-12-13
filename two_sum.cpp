#include<iostream>
#include<vector>

using namespace std;

int main(){
    
    vector<int>numbers = {1, 2,3, 4, 0};
    int n = numbers.size();
    int target = 6;
    for(int i = 0; i < n-1  ; i++){
        int j = i + 1;
        for(j = 0 ; j < n ; j++ ){
            if(numbers[i] +  numbers[j] == target){
                cout << "indices " << i << " " << j << endl;
              
            }
        }
    }
    
}


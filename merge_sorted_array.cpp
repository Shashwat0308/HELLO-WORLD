#include<iostream>
#include<vector>
using namespace  std;

int main(){

    vector<int> v1 = {1,2,3,4,0, 0};
    vector<int> v2 = {3, 4, 6 , 9};
    vector<int> v3;


    for( int i  = 0; i < v1.size(); i++ ){
        for(int j = 0; j < v2.size(); j++ ){
            if(v1[i] < v2[j]){
                v3.push_back(v1[i]);
            }
            else if(v1[i] < v2[j]){
                v3.push_back(v2[i]);
            }
            else{
                v3.push_back(v1[i]);
                v3.push_back(v2[j]);
            }
        }
        for(int i = 0 ; i < v3.size(); i++){
            int x = v3[i];
            cout << x << " " << endl;
        }
    }
    return 0;

}
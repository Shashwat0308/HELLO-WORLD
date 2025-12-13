#include<iostream>
using  namespace std;

int main(){
     int arr[] = {1,2,2,4,5};
    int n = 5;

    int i = 0;
    for( int j = 1; j < n ; j++){
        if(arr[i] != arr[j]){
              i++;
            arr[i] = arr[j];
        }
    }
   
    int newLength = i + 1;

    for(int k = 0; k < newLength; k++){
        cout << arr[k] << "  " ;
    }

    cout<< endl;

    return 0;
}
#include<iostream>
using namespace std;

bool BinarySearch(int *arr, int start, int end, int k ){
    //first base case declaration 
    if(start > end){
        return false;
    }

    int mid = start + (end - start)/2;

    if(arr[mid] == k){
        return true;
    }
 if (arr[mid]< k){
    return BinarySearch(arr, mid+1, end , k);
 }
else{
    return BinarySearch(arr, start, mid - 1, k);
}
}

int main(){


    int arr[5]= {12,14,18,22,33};
    int size = 5;
    int key = 22;

     bool ans = BinarySearch(arr, 0, size -1, key);

     if(ans){
        cout << "present" << endl;

     }

     else{
        cout << "absent" << endl;
     }


    
       // cout << "element presnet" << BinarySearch(arr, 0, 5, 22) << endl;
   
       
   
}












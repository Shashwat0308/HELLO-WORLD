#include<iostream>
using namespace std;


bool isSorted(int arr[], int size){
    // base case as if tthere are only no elemeent or one elemet then   array is already sorted.
    if(size == 0 || size == 1 ){
        return  true;
    }

  // checking one case and then on down using recursion for remaining elements 
    if(arr[0] > arr[1])
      return false;
    else{
        bool remainingPart = isSorted(arr+1, size-1);
        return remainingPart;
    }
}

int main(){

    int arr[5] = {2,4,6,7,14};

    int  size = 5;

    bool ans = isSorted(arr, size);

    if(ans){
        cout << "the array is sorted" << endl;

    }
else{
    cout << "thr array  is not sorted" << endl;
}







     
}
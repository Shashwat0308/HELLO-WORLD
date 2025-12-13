#include<iostream>
using namespace std;

int  partition(int arr[], int s , int e){
    int pivot = arr[s];

    int count = 0;
    for(int i = s +1 ; i <= e; i++){
        if(arr[i] <=pivot){
            count++;
        }
    }

    int pivotIndex = s + count ;
    swap(arr[pivotIndex] , arr[s]);
     
    int i = s , j = e;

    while(i < pivotIndex && j > pivotIndex){

        while(arr[i] <= pivot){
            i++;
        }
        while( arr[j] > pivot){
            j--;
        }
        while(i < pivotIndex && j > pivotIndex){
            swap(arr[i] , arr[j]);
            i++;
            j--;
            
        }
    }

}

void quickSort(int arr[], int s , int e){
    if (s>=e){
        return ;
    }

    int p  = partition(arr ,s , e);
    //for left wala part
    quickSort( arr , s , p );

    //for right side
    quickSort(arr, p +1 , e );
}




int main(){
    int arr[8] = {1,3,5,33,11,33,12,34};
    int n = 8;

    quickSort(arr, 0 , n-1);
    for(int  i = 0 ; i < n ; i++){
        cout << arr[i] << "  " ;
    }
    cout << endl;
}
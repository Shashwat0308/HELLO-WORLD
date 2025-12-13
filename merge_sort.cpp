#include<iostream>
using namespace std;

void merge(int *arr,  int  s , int mid ,  int e){
       
       // declaring lenght of first part of array
       int len1 = mid - s + 1;
       // declaring lenght of second  part of array
       int len2 =  e - mid  ;


       // creating pointers for both part  of arrays 
       int *first = new int[len1];
       int *second = new int[len2];

       // for first part of  array
       int k = s;
       for ( int i = 0; i < len1; i++){
          first[i] = arr[k++];
       }
      // for second part of array 
        k  =  mid + 1;
       for ( int i = 0; i < len2; i++){
          second[i] = arr[k++];
       }

       
       int index1 = 0;
       int index2 = 0;
        k = s;
           // now merging both sorted arrays 
       while(index1 <  len1  &&  index2 < len2){
         if(first[index1] < second[index2]){
            arr[k++] = first[index1++];

         }
         else{
            arr[k++] = second[index2++];
         }
       }
         while(index1 < len1 ){
             arr[k++] = first[index1++];
         }
         while(index2 < len2){
            arr[k++] = second[index2++];
         }
}


void mergeSort(int *arr, int s , int e){
    if(s >= e){
        return;
    }

    int mid = (s + e)/2;
     
    // for left part
    mergeSort(arr , s , mid);
    mergeSort(arr, mid +1 , e);

    merge(arr, s , mid , e);

}




int main(){
    int arr[7] = {2,3,444,31,1,222,344};
    int n = 7;

    mergeSort( arr , 0 , n - 1);

    for(int i = 0; i < n; i++){
        cout << arr[i] <<  " " ;
    }cout << endl;

    return 0;


}
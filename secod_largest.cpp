/*

 Input: {10, 20, 5, 8, 25}
✅ Output: 20 (largest = 25, second largest = 20)

Input: {1, 2, 3, 4, 5}
✅ Output: 4 (largest = 5, second largest = 4)

Input: {7, 3, 9, 10, 2,23,4,23,4,4,44,56,64,12,34,4,34,4,5,5,43,2,4,5,}
✅ Output: 9 (largest = 10, second largest = 9)



vector<int> v = { 485, 123, 678, 94, 251, 700, 981, 302, 59, 431,
                 982, 176, 531, 604, 278, 749, 811, 365, 927, 143,
                 618, 792, 254, 873, 409, 569, 725, 934, 287, 603,
                 140, 758, 835, 296, 901, 467, 381, 652, 100, 719,
                 245, 867, 350, 982, 126, 745, 537, 821, 210, 634,
                 472, 963, 548, 395, 809, 287, 695, 904, 273, 684,
                 152, 769, 346, 598, 942, 185, 410, 563, 837, 261,
                 305, 787, 919, 642, 487, 320, 890, 576, 139, 732,
                 654, 871, 264, 519, 730, 495, 689, 803, 927, 148,
                 634, 285, 498, 713, 123, 256, 378, 856, 712, 609};

                 982,

                 int nearest_index 
max - v[i] < d 
then d = max - v[i]
nearest_index = i;
int  
*/
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;



// vector = {-2,-4,-5,-10,-4}

int max_element(vector<int>v2){
    int max_number=INT32_MIN;
 for(int i=0;i<v2.size();i++){
  if(max_number<v2[i]){
     max_number = v2[i];
  }
  
 }
 
 return max_number;
 
 }

int second_largest(vector<int>v1){
  int max_number_v1 = max_element(v1);
  int d = INT32_MAX;
  int second_index;
   for(int i= 0; i< v1.size(); i++){
if(max_number_v1 - v1[i]<d &&  max_number_v1 - v1[i] >0 ){
  d = max_number_v1 - v1[i];
second_index = i;
}
 
   }

   return  v1[second_index];

}

int main(){

    vector<int> v = { 485, 123, 678, 94, 251, 700, 981, 302, 59, 431,
        982, 176, 531, 604, 278, 749, 811, 365, 927, 143,
        618, 792, 254, 873, 409, 569, 725, 934, 287, 603,
        140, 758, 835, 296, 901, 467, 381, 652, 100, 719,
        245, 867, 350, 982, 126, 745, 537, 821, 210, 634,
        472, 963, 548, 395, 809, 287, 695, 904, 273, 684,
        152, 769, 346, 598, 942, 185, 410, 563, 837, 261,
        305, 787, 919, 642, 487, 320, 890, 576, 139, 732,
        654, 871, 264, 519, 730, 495, 689, 803, 927, 148,
        634, 285, 498, 713, 123, 256, 378, 1022,1111, 609};
cout << second_largest(v) << endl;
 
}

#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

/*
Input: {10, 20, 5, 8, 25}
✅ Output: 20 (largest = 5, second smallest = 8)
*/



int smallest(vector<int>v1){
 int min_number = INT32_MAX;
 for(int i =0; i<v1.size();i++){
    if(min_number>v1[i]){
    min_number = v1[i];
    }

 }
 return min_number;

}

int second_smallest(vector<int>v2){

  int min_number_v2 = smallest(v2);
   int d = INT32_MAX;
 int second_index;
  for(int i =0; i< v2.size(); i++){
if(  v2[i]- min_number_v2 < d && min_number_v2 - v2[i]<0){
    d = min_number_v2 - v2[i];
  second_index = i;

}

 // v = {2,4,5,-3,1}

 }
 return v2[second_index];
}

int main(){
    
    //  vector<int> v = { -93, 123, 678, 94, 251, 700, 981, 302, 59, 431,
    //     982, 176, 531, 604, 278, 749, 811, 365, 927, 143,
    //     618, 792, 254, 873, 409, 569, 725, 934, 287, 603,
    //     140, 758, 835, 296, 901, 467, 381, 652, 100, 719,
    //     245, 867, 350, 982, 126, 745, 537, 821, 210, 634,
    //     472, 963, 548, 395, 809, 287, 695, 904, 273, 684,
    //     152, 769, 346, 598, 942, 185, 410, 563, 837, 261,
    //     305, 787, 919, 642, 487, 320, 890, 576, 139, 732,
    //     654, 871, 264, 519, 730, 495, 689, 803, 927, 148,
    //     634, 285, 498, 713, 123, 256, 378, 1022, 609};




    vector<int>v = {-12,-11,-101,-23};
        cout<< second_smallest(v) << endl;


}


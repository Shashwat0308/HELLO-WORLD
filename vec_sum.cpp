#include<iostream>
#include<vector>
using namespace std;

 // v1 = {4,6,21};
int sum_of_vector(vector<int>v1){
  int total_sum=0;
for(int i=0; i<v1.size();i++){
 total_sum = total_sum + v1[i];
}
  
 return  total_sum;


}

// v2 = {-10,-13,-123,-2}
int max_element(vector<int>v2){
   int max_number=INT32_MIN;
for(int i=0;i<v2.size();i++){
 if(max_number<v2[i]){
    max_number = v2[i];
 }
 
}

return max_number;

}

int main(){
   
   cout << sum_of_vector({2,8,-4,13})<<"\n"<< max_element({3,12,234,222});
}




//v1 = {2,18,-4,3}



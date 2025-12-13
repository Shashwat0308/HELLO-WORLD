#include<iostream>
#include<vector>
using namespace std;


int main(){

    vector<int>v1 = {1,3,4,5,10};
    vector<int>v2 = {48,23,33,233,22,13,12};
    cout << " the size of vector is  " << v1.size() << endl;
    cout << " the last  element is :  " << v1.back() << endl;
    cout << " the first element is :  " << v1.front() << endl;

    v1.push_back(19);
    cout << " the elements after push back is:  " << v1.back() << endl;
    v1.pop_back();
    cout << " the elements after pop back is:  " << v1.back() << endl;

    v1.clear();
    cout << "after clear the vector is : " << v1.size() << endl;

    v1.swap(v2);
    cout << "after swapping :  " << "\n";
    cout << "size of v1 is :  " << v1.size() << "\n";
    cout << "size of v2 is : " << v2.size()<< endl;
    v2.swap(v1);
    

    // v1 = (2,3,4,5)    v2 = (4,5,3,12,23)
}


/*
class Solution {
public:
    int removeDuplicates(vector<int>& nums){

 
// in this program what we have done is mainly there is a vector as input of integer type and hume usme se jo values repeat ho rahi  hai usko remove krke output me new vector dena hau.
//starting se check krte jayenege and pahle wala element ko print krenege and aage check krnenge agar wo dobara repeat hua hai then usko hata  ke aage naye wale element pe bad jayenege.

   vector<int> v1;
    int size = 0;
    for(int i = 0; i <v1.size();i++){
        if(v1[i] != nums[i]){

             
            size = size + 1;
        }
        return size;
    }   

    return v1();




    }

}




*/









#include <iostream>
#include <vector>
using namespace std;
int main() {
   
  std::vector<double> subway_adult;
  
  // Declare another vector here:
  std::vector<double>subway_child;
  std::vector<std::string>akash;
  /* adding a element into vector*/
  akash.push_back("shashwat"); 
  akash.push_back("yadav");

  for(int i = 0; i<2;i++){
    cout<< akash[i] <<" ";
  }



/*method to get the size of vector*/
cout<<"\n"<< "size of vector is:  " <<akash.size();

//method to remove last element from the vector
akash.pop_back();
cout<<"\n"<< "size of vector is:  " <<akash.size()<<"\n";

//method to print or iterate the entire vector
akash.push_back("yadav");
akash.push_back("ahir");
akash.push_back("anshu");
for(int i = 0; i<akash.size();i++){
    cout<<akash[i]<<" ";
}

akash = {"ipl"};
cout<<"\n"<< "size of vector is:  " <<akash.size()<<"\n";








}

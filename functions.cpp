#include<iostream>
using namespace std;

int sum(int x, int y) {  // Function defined before main
    return x + y;
}

void make_sandwich() {

    std::cout << "bread\n";
    std::cout << "egg\n";
    std::cout << "cheese\n";
    std::cout << "avocado\n";
    std::cout << "bread\n";
  
  }

  std::string always_blue() {
  std::cout << "Returned blue!";
    return "akash!\n";
  
   
  
  }
  
  


int main() {
    int z = sum(3, 5);
    cout << z<<"\n";

    make_sandwich();
    always_blue();
    cout<< always_blue();
}






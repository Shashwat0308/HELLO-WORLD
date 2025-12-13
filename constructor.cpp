#include<iostream>
using namespace std;

class Hotel{
     public :
    int room;
    char pool;

   /*using constructor if we not used by own thhen default constrcutoe is defined on its own but when we define it on own then the
   default one gets destroyed itself. */
   //paramterised constructor 
    Hotel( int r ,  char s){
        room = r;
        pool = s;
    }
};

int main(){
    Hotel taj(101, 'A');
    
    cout << "room number is :  " << taj.room <<  "\n "<< " pool is : " << taj.pool << endl;
    return 0; 
}
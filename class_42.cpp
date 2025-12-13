#include<iostream>
#include<string>
using namespace std;

class Hotel{
    public :
    int room;
    int floor;

    void setBar(string r){
         barAvailable = r;
         
    }

    void setPlay(char s ){
        pool = s;
    }

    string getBar(){
        return barAvailable;
    }

    char getPlay(){
        return pool;
    }

    
    private :
    string barAvailable;
    char pool;


    
    

};

int main(){
    Hotel Taj;

    Taj.room = 334;
    Taj.setBar("yes");
    

    cout << "the number of room in hotel taj is : " << Taj.room << endl;
   //  cout << "pool is availabe or not : " << Taj.barAvailable << endl;
   cout << "bar is  " <<  Taj.getBar() << endl;

   return 0;

}
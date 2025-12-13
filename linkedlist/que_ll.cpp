#include<iostream >
using namespace std;

class List{
    public : 
    int data;
    string name;
    char reply;

    private :

    int item;

    public :
    void  setitem(int value){
         item = value;
    }

    int getitem(){
        return  item;

    }
   
};

int main(){
    List hotel;
    hotel.setitem(20);
    cout << " item is " << hotel.getitem()  << endl;

}


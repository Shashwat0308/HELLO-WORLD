 #include<iostream>
using namespace std;
int main(){
    int n, t1=0 , t2 = 1, newterm = 0;
    cout<<"Enter the value of n ";
    cin>>n;
     
     for(int i = 0; i<=n; ++i){
        if(i == 1){

            cout<< t1 << "   " ;
            continue;

        }
        if( i == 2){

            cout<< t2 <<"  ";
            continue;
        }
        newterm = t1 + t2 ;
        t1 = t2;
        t2 = newterm;
        cout<< newterm << "   " ;

          


     }


 return 0;



}
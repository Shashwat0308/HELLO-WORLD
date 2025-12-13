#include<iostream>
#include<stack>
using namespace std;

bool isParenthesis(string s ){
    //base  case 
    stack<char> st;
    for(char c : s){
     if(c == '(' || c == '[' || c == '{'){
        st.push(c);
     }
        else{
            if(st.empty())
            return false;
        }
        char top() = st.top();
        st.pop();
        if((c == '(' && top != ')') || c == ('[' && top != ']') || c == ('{' && top != '}')){
            return false;
        }
    }
}
     return st.empty();



int main(){
    string s = "({[]})";
    if(isParenthesis(s)){
        cout << "valid parenthesis" << endl;
    }
    else{
        cout << "invalid parenthesis" << endl;
    }

    return 0;



    }
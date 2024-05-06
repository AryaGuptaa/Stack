#include<iostream>
#include<stack>
using namespace std;

//reversing a string using stack

int main() {
    string str = "ARYA";
    stack<char> st;

    for(int i = 0; i<str.length(); i++){
        char ch = str[i];
        st.push(ch);
    }

    cout<<endl;
    while(! st.empty()){
        cout<<st.top();
        st.pop();
    }cout<<endl;

    return 0;
}
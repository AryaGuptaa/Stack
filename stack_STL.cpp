#include<iostream>
#include<stack>
using namespace std;

int main() {

    //creation
    stack<int> st;

    //inseertion
    st.push(10);
    st.push(20);
    st.push(30);

    //size
    cout<<"size of stack is: "<<st.size()<<endl;

    //remove
    st.pop();

    //check empty
    if(st.empty()){
        cout<<"stack is empty"<<endl;
    }
    else
    cout<<"stack is not empty"<<endl;

    //top element
    cout<<st.top();

    return 0;
}
#include<iostream>
#include<stack>
using namespace std;

//insert at bottom

void insertAtbottom(stack<int> &st, int& element){
    int size = st.size();

    if(st.empty()){
        st.push(element);
        return;
    }

    int temp = st.top();
    st.pop();

    insertAtbottom(st,element);

    st.push(temp);
    
}

int main() {
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    int element= 400;
    insertAtbottom(st, element);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }

    return 0;
}
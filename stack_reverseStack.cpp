#include<iostream>
#include<stack>
using namespace std;

//reverse a stack

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

void reversestack(stack<int> &st){
    if(st.empty()){
        return;
    }

    int temp = st.top();
    st.pop();

    //recurssion
    reversestack(st);

    //backtrack
    insertAtbottom(st,temp);

}

int main() {
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    // cout<<"without reverse: "<<endl;
    // while(!st.empty()){
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }

    // output- without reverse: 
            //    40 30 20 10


    reversestack(st);
    cout<<"After reverse: "<<endl;
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }

    // output- After reverse: 
            //   10 20 30 40

    return 0;
}
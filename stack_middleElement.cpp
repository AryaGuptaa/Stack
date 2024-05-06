#include<iostream>
#include<stack>
using namespace std;

//finding the middle element using stack

void solve(stack<int> &st, int& pos, int& ans ) {

    //base case
     if(pos == 1){
        ans = st.top();
            return;
        }

    //1 case hum solve krenge
    pos--;
    int temp = st.top();
    st.pop();

    //recurssion
    solve(st,pos,ans);

    //backtracking
    st.push(temp);

}


int getMiddleElement(stack<int> &st) {

    int size = st.size();
    int pos =0;

    if(st.empty()){
        return -1;
    }

    else{
        if(size & 1){      //odd
        pos = size/2 + 1;
         }
        else {             //even
        pos = size/2;
         }
    }

    int ans = -1;
    solve(st,pos,ans);
    return ans;

}


int main() {
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    st.push(70);
    st.push(80);

    int mid = getMiddleElement(st);
    cout<<"Middle element: "<<mid<<endl;
    
}
#include<iostream>
using namespace std;

//stack implementation
//push
//pop
//isempty
//get top
//get size
//print


class stack{
    public:
    int *arr;
    int size;
    int top;

    stack(int size){
        arr = new int[size];
        this -> size = size;
        this-> top = -1;
    }

    void push(int data){
        if(top== size -1){
            cout<<"stack overflow"<<endl;
        }
        else {
            top++;
            arr[top] = data;
        }
    }

    void pop(){
        if(top == -1) {
            cout<<"stack underflow"<<endl;
        }
        else{
            top--;
        }
    }

    bool isempty(){
          if(top == -1){
            return true;
          }
          else
          return false;
    }

    int gettop() {
        if(top == -1){
            cout<<"stack is empty"<<endl;
        }
        else{
            return arr[top];
        }
    }

    int getsize(){
        return top+1;
    }

    int print(){
        for(int i =0; i<=top; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){

    stack st(8);         //creation

    st.push(12);         //insertion
    st.push(8);
    st.push(25);
    st.push(9);
    st.print();
    st.pop();            //deletion
    int ans =st.getsize();  
    cout<<"size of stack is: "<<ans<<endl;
    st.print();

return 0;
}

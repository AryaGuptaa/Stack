#include<iostream>
#include<stack>
using namespace std;

// cheacking if redundant bracket is present or not

bool checkRedundant(string &str){
    stack<char> st;
 
    for(int i =0; i<str.length();i++){
        char ch = str[i];

        if(ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/') { 
            st.push(ch);
        }

        else if(ch == ')') {
            int operatorCount = 0;
            while(!st.empty() && st.top() != '('){
                int temp = st.top();
                if(temp == '+' || temp == '-' || temp == '*' || temp == '/' ){
                    operatorCount++;
                }
                st.pop();
            }
            st.pop();

           if(operatorCount == 0){
            return true;             // brackets k beach koi operator nhi h
          }  
        }

    }

    return false;
}

int main() {

    string str = "((a+b)*(c+d))";
    bool ans = checkRedundant(str);

    if(ans == true) {
        cout << "Redundant Bracket Present"<<endl;
    }
    else{
        cout << "Redundant Bracket Not Present"<<endl;
    }

    return 0;
}
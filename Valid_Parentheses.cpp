/**
* author: asif_102
* created: 2023-01-25 23:00:45
**/
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    string s;
    cin >> s;
    stack<char> st;
    for(int i = 0; i < s.size(); i++){
        char c = s[i];
        if(c == '(' or c == '{' or c == '[') st.push(c);
        else if(c == ')' and st.empty() == false and st.top() == '('){
            st.pop();
        }
        else if(c == '}' and st.empty() == false and st.top() == '{'){
            st.pop();
        }
        else if(c == ']' and st.empty() == false and st.top() == '['){
            st.pop();
        }
        else{
            st.push(c);
        }
    }
    if(st.empty()== true) cout << "valid";
    else cout << "invalid";
    return 0;
}
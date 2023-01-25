/**
* author: asif_102
* created: 2023-01-25 22:37:00
**/
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int tc;
    cin >> tc;
    for(int t = 1; t <= tc; t++){
        int sz;
        cin >> sz;
        string s;
        cin >> s;
        stack<char> q_st;
        for(int i = 0; i < sz; i++){
            char c = s[i];
            if(c == 'Q') q_st.push(c);
            else{ // c == 'A'
                if(q_st.empty() == false){
                    q_st.pop();
                }
            }
        }
        if(q_st.empty() == true) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
/**
* author: asif_102
* created: 2023-01-25 22:16:31
**/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    stack<int> st;
    for(int i = 1; i <= n; i++){
        int x;
        cin >> x;
        st.push(x);
    }

    while(st.empty() == false){
        cout << st.top() << " ";
        st.pop();
    }
    
    return 0;
}
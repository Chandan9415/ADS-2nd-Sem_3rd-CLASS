#include<bits/stdc++.h>
using namespace std ;
string rad(string s ) {
    stack<char> st ;
    for(int i=0 ; i<s.size() ; i++) {
        char ch =s[i] ;
        if(st.empty()) {
            st.push(ch) ;
        } else if (ch == st.top()) {
            st.pop() ;
        } else {
            st.push(ch) ; 
        }
    }
    string ans  ;
    while(!st.empty()) {
        ans += st.top() ;
        st.pop() ;
    }
    reverse(ans.begin(),ans.end()) ;
    return ans ;
}
int main () {
    cout << rad("abbaca") << endl;
    return 0 ;
}
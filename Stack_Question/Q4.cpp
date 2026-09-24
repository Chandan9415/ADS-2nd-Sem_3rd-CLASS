#include<bits/stdc++.h>
using namespace std ;
int main () {
    int n ;
    cin >> n ;
    stack<int>st ;
    for (int i=0 ; i<n ;i++) {
        int ele ;
        cin >> ele ;
        st.push(ele) ;
    }
    vector<int>nextg(n,-1) ;
    int mx =st.top() ;
    int idx = n-2 ;
    while(!st.empty()) {
        if(st.top() <mx) {
            nextg[idx] = mx ;
        } else {
            mx = st.top() ;
            idx-- ;
            st.pop() ;
        }
    }
    for(int i=0 ; i<n ; i++) {
        cout << nextg[i] << endl;
    }
    return 0 ;
}
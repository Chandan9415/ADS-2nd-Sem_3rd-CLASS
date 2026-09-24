#include<bits/stdc++.h>
using namespace std ;
int main () {
    // int n ;
    // cin >> n ;
    stack<int>st ;
    int arr[100] = {9,7,11,10} ;
    for (int i=0 ; i<4;i++) {
        st.push(arr[i]) ;
    }
    vector<int>nextg(4,-1) ;
    int mx =st.top() ;
    int idx = 4-1 ;
    while(!st.empty()) {
        int temp = st.size()-2 ;
        while(temp>0) {
            if(st.top() < arr[temp]) {
                nextg[idx] =arr[temp] ;
                st.pop() ;
            } else {
                temp-- ;
            }
            idx--;
        }
    }
    for(int i=0 ; i<4 ; i++) {
        cout << nextg[i] << endl;
    }
    return 0 ;
}
//  Covert the binary number into decimal number //
#include<bits/stdc++.h>
using namespace std ;
int bintodec(int n ) {
    if(n==0) {
        return n ;
    }
    return bintodec(n/10) *2+(n%10) ;
}
int main () {
    int n ; 
    cin >> n ;
    cout << bintodec(n) << endl;
}
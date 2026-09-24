// Convert decimal to binary 
#include<bits/stdc++.h>
using namespace std ;
string dectobin(int n) {
    if (n<=0) {
        return to_string(n) ;
    }
    return dectobin(n/2) + to_string(n%2) ;
}
int main () {
    int n ;
    cout << "Enter the value of n :" ;
    cin >> n ;
    cout << "The number " << n << "into binary = " << dectobin(n) << endl;
    return 0; 
}
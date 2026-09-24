#include<bits/stdc++.h>
using namespace std ;
void TOH(int n , char from , char to , char temp) {
    if(n==0) {
        return ;
    }
    TOH(n-1 , from , temp , to) ;
    cout << n << " "<< from << "->" << to << endl;
    TOH(n-1 , temp , to , from) ; 
}
int main () {
    int n ;
    cin >> n ;
    TOH(n , 'A','C','B') ;
    return 0 ;
}
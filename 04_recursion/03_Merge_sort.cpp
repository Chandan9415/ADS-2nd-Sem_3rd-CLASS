#include <bits/stdc++.h>
using namespace std ;
void merge(vector<int>&arr , int l , int mid , int r) {
    
}
void mergesort(vector<int>& arr , int l , int r) {
    if (l<r) {
        int mid = l +(r-l)/2 ;
        mergesort(arr , l , mid) ;
        mergesort(arr , mid+1 , r) ;
        merge(arr , )
    }
}
int main () {

}
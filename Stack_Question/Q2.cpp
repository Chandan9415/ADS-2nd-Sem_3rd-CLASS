/*Problem Statement: First Non-Repeating Character
You are given a string s containing lowercase English letters.
Your task is to find the index of the first character that occurs exactly once in the string.
The index starts from 0.
If no character occurs exactly once, return -1. */
#include<bits/stdc++.h>
using namespace std ;
int find(string s) {
    unordered_map<char,int> m ;
    char store ;
    for (char x :s) {
        m[x]++;
    }
    for(int i=0 ;i<s.length();i++) {
        if(m[s[i]]==1) {
            return i ;
        }
    }
    return -1 ;
}
int main () {
    cout <<find("ayush") ;
}
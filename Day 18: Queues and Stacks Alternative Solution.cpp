#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string str;
    getline(cin,str);
    int n= str.length();
    for(int i=0; i<n/2; i++){
        if(str[i]!=str[n-i-1]){
        cout<<"The word, "<<str<<", is not a palindrome."<<endl;
        return 0;
        }
    }
    cout<<"The word, "<<str<<", is a palindrome."<<endl;
    return 0;
}

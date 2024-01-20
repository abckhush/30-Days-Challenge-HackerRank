#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string str;
    getline(cin,str);
    int n= str.length();
    stack<char> s;
    queue<char> q;
    for (int i = 0; i < n; i++) {
        if (isalpha(str[i])){
            s.push(tolower(str[i]));
            q.push(tolower(str[i]));
        }
    }
    while (!s.empty() && !q.empty()) {
        if (s.top() != q.front()) {
            cout << "The word, " << str << ", is not a palindrome." << endl;
            return 0;
        }
        s.pop();
        q.pop();
    }
    cout<<"The word, "<<str<<", is a palindrome."<<endl;
    return 0;
}

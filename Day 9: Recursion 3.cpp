#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

unsigned long long factorial(unsigned int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    unsigned int n;
    cin >> n;  
    cout<<factorial(n)<<endl;
    return 0;
}

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    int sum=0;
    for (int i = 1; i <=n; ++i){
        if (n%i == 0)
            sum= sum+i;
    }
    cout<<"I implemented: AdvancedArithmetic\n"<<sum<<endl;
    return 0;
}

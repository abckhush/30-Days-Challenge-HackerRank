#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Calculator{
    public:
        int power(int n, int p){
            if (n < 0 || p < 0)
                throw invalid_argument("n and p should be non-negative");
            
            return pow(n, p);
        }
        
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    Calculator myCalculator;
    int T, n,p;
    cin>>T;
    for (int i = 0; i < T; i++) {
        cin >> n >> p;
        try {
            int ans = myCalculator.power(n, p);
            cout << ans << endl;
        }
        catch (exception &e) {
            cout << e.what() << endl;
        }
    }
    return 0;
}

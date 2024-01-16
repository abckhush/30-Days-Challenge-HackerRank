#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Difference {
private:
    vector<int> elements;
  
public:
    int maximumDifference;
    
    Difference(vector<int> elements) : elements(elements) {}
    
    void computeDifference() {
        sort(elements.begin(), elements.end());
        maximumDifference = abs(elements.at(0) - elements.back());
    }
        
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    Difference d(a);
    d.computeDifference();
    cout << d.maximumDifference;
    return 0;
}

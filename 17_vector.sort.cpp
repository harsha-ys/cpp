#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int size, x;
    vector<int> V;
    cin>> size;
    while(cin>>x)
    {
        V.push_back(x);
    }
    sort(V.begin(), V.end());
    for(int i=0; i<size; i++) cout<< V.at(i)<<" ";
    return 0;
}

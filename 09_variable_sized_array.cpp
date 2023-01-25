#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,q;
    cin>>n>>q;
    vector<int> V[n];
    for (int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        for (int l=0;l<k;l++)
        {
            int get;
            cin>>get;
            V[i].push_back(get);
        }
    }
    vector<int> Q;
    for(int i=0;i<q;i++)
    {
        int ii,j;
        cin>>ii>>j;
        Q.push_back(V[ii].at(j));
        
    }
    for(int i=0;i<q;i++) cout<<Q[i]<<endl;
    return 0;
}

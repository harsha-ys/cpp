#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void reverse(int *array)
{
    if(!(*array)) return ;
    cout<<*array<<" ";
    reverse(array+1);
    
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int size;
    cin>>size;
    int array[size];
    array[size]='\0';
    for(;size>=0;size--) cin>>array[size-1];
    reverse(array);
    return 0;
}

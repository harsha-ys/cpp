#include <iostream>
#include <cstdio>
using namespace std;


int max_of_four(int a, int b, int c, int d)
{
    return (!c&&!d)? ((a>=b) ? a : b) :max_of_four((a>=b)?a:b, (c>=d)?c:d, 0, 0);
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

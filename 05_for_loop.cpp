#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a,b;
    cin>>a>>b;
    for(;a<=b;a++)
    {
        if(1<=a && a<=9)
        {
            if(a==1) cout<<"one"<<endl;
            else if(a==2) cout<<"two"<<endl;
            else if(a==3) cout<<"three"<<endl;
            else if(a==4) cout<<"four"<<endl;
            else if(a==5) cout<<"five"<<endl;
            else if(a==6) cout<<"six"<<endl;
            else if(a==7) cout<<"seven"<<endl;
            else if(a==8) cout<<"eight"<<endl;
            else cout<<"nine"<<endl;
        }
        else if (a>9)
        {
            if(a%2==0) cout<<"even"<<endl;
            else cout<<"odd"<<endl;
        }
    }
    return 0;
}

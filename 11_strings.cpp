#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a,b;
    cin>>a>>b;
    cout<<a.size()<<" "<<b.size()<<endl<<a+b<<endl;
    char c=a[0];
    a[0]=b[0];
    b[0]=c;
    cout<<a<<" "<<b<<endl;
    return 0;
}

#include <iostream>

using namespace std;

int gcd(int a, int b){
    if(b==0) return a;
    else return gcd(b, a%b);
}

int main()
{
    int m=3, n=6;
    cout << gcd(m,n);
    return 0;
}
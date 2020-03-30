#include <iostream>

using namespace std;

int gcd(int a, int b){
    if(b==0) return a;
    else return gcd(b, a%b);
}

int main()
{
    int m=7, n=6;
    int num = gcd(m,n); //最小公约数
    int num_1 = m/num*n;
    cout << num_1;
    return 0;
}
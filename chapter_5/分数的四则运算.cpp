#include <iostream>
#include <stdlib.h>
using namespace std;

struct Fraction{
    int up,down;
};
int gcd(int a, int b){
    if(b==0) return a;
    else return gcd(b, a%b);
}

Fraction reduction(Fraction result){
    if(result.down<0){
        result.up = -result.up;
        result.down = -result.down;
    }
    if(result.up == 0){
        result.down =1;
    }else{
        int d = gcd(abs(result.up), abs(result.down)); //注意abs，否则返回带符号的公约数
        result.up = result.up / d;
        result.down = result.down / d;
    }
    return result;
}

Fraction add(Fraction f1, Fraction f2){
    Fraction result;
    result.down = f1.down*f2.down;
    result.up = f1.up*f2.down + f1.down*f2.up;
    result = reduction(result);
    return result;
}
Fraction minu(Fraction f1, Fraction f2){
    Fraction result;
    result.down = f1.down*f2.down;
    result.up = f1.up*f2.down - f1.down*f2.up;
    result = reduction(result);
    return result;
}
Fraction multi(Fraction f1, Fraction f2){
    Fraction result;
    result.down = f1.down*f2.down;
    result.up = f1.up*f2.up;
    result = reduction(result);
    return result;
}
Fraction divide(Fraction f1, Fraction f2){
    Fraction result;
    result.down = f1.down*f2.up;
    result.up = f1.up*f2.down;
    result = reduction(result);
    return result;
}

int main()
{
    int m=2, n=4;
    Fraction f;
    f.down = n;
    f.up = -m;
    f = reduction(f);
    cout <<f.up <<'/'<<f.down;
    return 0;
}
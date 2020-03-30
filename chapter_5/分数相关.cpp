#include <iostream>
#include <stdlib.h>
using namespace std;

// 分数的定义
struct Fraction{
    int up,down;
};

// 求最小公约数
int gcd(int a, int b){
    if(b==0) return a;
    else return gcd(b, a%b);
}

// 分数的化简
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

// 分数加法
Fraction add(Fraction f1, Fraction f2){
    Fraction result;
    result.down = f1.down*f2.down;
    result.up = f1.up*f2.down + f1.down*f2.up;
    result = reduction(result);
    return result;
}

// 分数减法
Fraction minu(Fraction f1, Fraction f2){
    Fraction result;
    result.down = f1.down*f2.down;
    result.up = f1.up*f2.down - f1.down*f2.up;
    result = reduction(result);
    return result;
}

// 分数乘法
Fraction multi(Fraction f1, Fraction f2){
    Fraction result;
    result.down = f1.down*f2.down;
    result.up = f1.up*f2.up;
    result = reduction(result);
    return result;
}

// 分数除法
Fraction divide(Fraction f1, Fraction f2){
    Fraction result;
    result.down = f1.down*f2.up;
    result.up = f1.up*f2.down;
    result = reduction(result);
    return result;
}

// 分数表示
void show(Fraction r){
    r = reduction(r);
    if(r.down == 1)
        cout<<r.up;
    else if(r.up>r.down)
        cout << r.up/r.down << r.up%r.down << r.down;
    }   else{
        cout << r.up << r.down;
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
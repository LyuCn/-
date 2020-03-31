// 求解100以内的素数
#include <iostream>
#include <math.h>

using namespace std;

// 判断该数是否为素数
bool isPrime(int n){
    if(n<=1) return false;
    int sqr = (int)sqrt(1.0*n); //开根号
    for(int i=2; i<=sqr; i++){       // i从2开始
        if(n%i==0) return false;    //判断
    }
    return true;
}

int maxn = 101;
int prime[maxn],pNum=0;



void Find_Prime(){
    for(int i=1; i<maxn; i++){
        if(isPrime(i) == true){
            prime[pNum++] = i;
        }
    }
}


int main()
{
    Find_Prime();
    for(int i=0; i<pNum; i++){
        cout << prime[i] << ' ';
    }
    return 0;
}
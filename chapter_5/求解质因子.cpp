#include <iostream>
#include <math.h>

using namespace std;
const int maxn= 100001;
int prime[maxn],pNum =0;
bool p[maxn] = {0};
int Num = 0;

void Find_Prime(){
    for(int i=2; i<maxn; i++){
            if(p[i] == false){
                prime[pNum++] = i;
                for(int j = i+i; j<maxn; j+=i)
                    p[j] = true;
            }
    }
}

struct factor{
    int x, cnt;
}fac[10];

int main()
{
    int n;
    cin >> n;

    if(n==1){
    cout << "1=1";
    return 0;
    }else{
    int sqr = (int)sqrt(1.0*n);
    Find_Prime();
    int Num =0;     //质因子个数
    for(int i =0; i<pNum&&prime[i]<=sqr; i++){
        if(n%prime[i] == 0){
            fac[Num].x = prime[i];
            fac[Num].cnt = 0;
            while(n%prime[i] == 0){
                fac[Num].cnt += 1;
                n /= prime[i];
            }
             Num++;
        }
        if(n==1) break;
    }
    if(n!=1){
        fac[Num].x = n;
        fac[Num++].cnt = 1; //为了统一输出+1
    }
    for(int i=0; i<Num; i++){
        if(i>0) cout << '*';
        cout << fac[i].x << '^' <<fac[i].cnt;
    }

    return 0;
    }
}
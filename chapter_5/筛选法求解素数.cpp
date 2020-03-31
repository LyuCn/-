// 筛选法求解100以内的素数
#include <iostream>

using namespace std;

const int maxn = 101;
int prime[maxn], pNum=0;
bool p[maxn] = {0}; // 不是素数为1

void Find_Prime(){
    for(int i=2; i<maxn; i++){
        if(p[i] == false){
            prime[pNum++] = i;
            for(int j=i+i; j<=maxn; j+=i){
                p[j] = true;
            }
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

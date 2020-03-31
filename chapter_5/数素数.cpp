#include <iostream>

using namespace std;
const int maxn= 100001;
int prime[maxn],pNum =0;
bool p[maxn] = {0};
int Num = 0;

void Find_Prime(int N){
    for(int i=2; i<maxn; i++){
            if(p[i] == false){
                prime[pNum++] = i;
                if(pNum >= N) break;
                for(int j = i+i; j<maxn; j+=i)
                    p[j] = true;
            }
    }
}
int main()
{
    int m,n;
    cin >> m >> n;
    Find_Prime(n);
    for(int i=m-1; i<n; i++){
        cout << prime[i] << ' ';
    }
    return 0;
}
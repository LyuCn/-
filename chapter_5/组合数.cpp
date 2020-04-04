#include <stdio.h>
#include <string.h>
using namespace std;

// 计算n！中有多少个质因子p
int cal(int n, int p){
    int ans;
    int temp;
    for(int i=2; i<=n; i++){
        temp = 2;
        while(temp%p==0){
            ans++;
            temp /= p;
        }
    }
    return ans;
}

// 计算n！中有多少个质因子p
int cal(int n, int p){
    int ans=0;
    while(n){
        ans += n/p;
        n/=p;
    }
    return ans;
}

// 计算n！中有多少个质因子p[递归版本]
int cal(int n, int p){
    if(n<p) return 0;
    return n/p+cal(n/p,p)
}

// n<20;m<20
long long C(long long n, long long m){
    long long ans = 1;
    for(long long i=1; i<=n; i++){
        ans *= i;
    }
    for(long long i=1; i<=m; i++){
        ans /= i;
    }
    for(long long i=1; i<=n-m; i++){
        ans /= i;
    }
    return ans;
}

// 递归1
long long C(long long n, long long m){
    if(m==0 || n==m) return 1;
    return C(m,n-1)+C(m-1, n-1);
}

// 递归2
long long res[67][65]={0};
long long C(long long n, long long m){
    if(n==m || m==0) return 1;
    if(res[n][m]!=0) return res[n][m];
    return res[n][m] = C(m,n-1) + C(m-1, n-1);
}

// 公式变形
long long C(long long n, long long m){
    long long ans =1;
    for(long long i=1; i<=m; i++){
        ans = ans*(n-m+i)/i;
    }
    return ans;
}





int main()
{
    char str1[1000], str2[1000];
    scanf("%s%s", str1, str2);
    bign a = change(str1);
    bign b = change(str2);
    print(add(a,b));
    return 0;
}

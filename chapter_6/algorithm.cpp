#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int x = 1, y = -2;

    // min max abs
    cout << max(x,y) << min(x,y)<<endl;
    cout << abs(x) << abs(y) << endl;

    // swap
    swap(x,y);
    cout << x << y << endl;

    //reverse()
    int a[3] = {1,2,3};
    reverse(a, a+2);
    cout << a[0]<<endl;

    vector<int> b;
    b.push_back(1);
    b.push_back(2);
    b.push_back(3);
    reverse(b.begin(), b.begin()+1);

    // next_permutation()?????
    int c[3]={1,2,3};
    do{
        cout << c[0] << c[1] << c[2]<< endl;
    } while(next_permutation(a, a+3));

    // fill()
    fill(a,a+2,233);

    // sort()

    // lower_bound 和 upper_bound
    cout << lower_bound(c,c+3,0)-c<<endl;
    cout << lower_bound(c,c+3,2)-c<<endl;
    cout << lower_bound(c,c+3,3)-c<<endl;

    return 0;
}
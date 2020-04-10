#include <map>
#include <iostream>
#include <string>

using namespace std;

int main(){
    pair<string, int> p;
    p.first = "haha";
    p.second = 5;
    cout<<p.first<<p.second<<endl;
    p=make_pair("xixi", 5);
    cout<<p.first<<p.second<<endl;
    p=pair<string, int>("heihei", 555);
    cout<<p.first<<p.second<<endl;

    // 比较大小

    // 作为map的键值对来插入
    map<string, int> mp;
    mp.insert(make_pair("heihei",6));
    map<string,int>::iterator it = mp.begin();
    cout <<it->first << it->second <<endl;

    return 0;
}
#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){
    map<char,int> mp;
    mp['a'] = 1;
    mp['b'] = 2;
    mp['c'] = 3;

    // find
    map<char,int>::iterator it = mp.find('b');
    cout<<it->first<<' '<<it->second<<endl;

    // erase
    cout <<"----------------------"<<endl;
    mp.erase(it);
    for(map<char,int>::iterator it=mp.begin(); it!=mp.end(); it++){
        cout<<it->first<<it->second<<endl;
    }

    cout <<"----------------------"<<endl;
    mp.erase('a');
    for(map<char,int>::iterator it=mp.begin(); it!=mp.end(); it++){
        cout<<it->first<<it->second<<endl;
    }

    cout <<"----------------------"<<endl;
    mp['a'] = 1;
    mp['b'] = 2;
    mp['c'] = 3;

    it = mp.find('b');
    mp.erase(it,mp.end());
    for(map<char,int>::iterator it=mp.begin(); it!=mp.end(); it++){
        cout<<it->first<<it->second<<endl;
    }
    
    mp['a'] = 1;
    mp['b'] = 2;
    mp['c'] = 3;
    
    //size
    cout <<"----------------------"<<endl;
    cout << mp.size() <<endl;
    
    // clear()
    mp.clear();
    
    
    
    return 0;
}
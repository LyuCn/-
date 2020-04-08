// set操作
#include <iostream>
#include <set>

using namespace std;

int main(){
    set<int> st;
    st.insert(3);
    st.insert(5);
    st.insert(2);
    st.insert(3);
    for(set<int>::iterator it=st.begin(); it!=st.end(); it++){
        cout<<*it;
    }

    cout << endl<<"-----------------"<<endl;
    // find
    set<int>::iterator it=st.find(2);
    cout <<*it;
    // erase
    st.erase(it);
    st.erase(3);
    cout << endl<<"-----------------"<<endl;
    for(set<int>::iterator it=st.begin(); it!=st.end(); it++){
        cout<<*it;
    }

    st.insert(3);
    st.insert(4);
    st.insert(1);
    it = st.find(4);
    st.erase(it, st.end());
     cout << endl<<"-----------------"<<endl;
    for(set<int>::iterator it=st.begin(); it!=st.end(); it++){
        cout<<*it;
    }

    //size
    cout << endl<<"-----------------"<<endl;
    cout << st.size();
    st.clear();
    cout << endl<<"-----------------"<<endl;
    cout<<st.size();
    return 0;
}
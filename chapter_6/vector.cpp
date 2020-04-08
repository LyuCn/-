// vector 相关操作
#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> vi;
    for(int i=1; i<=5; i++){
        vi.push_back(i);
    }

    // 利用iterator访问vector
    vector<int>::iterator it = vi.begin();
    for(int i=0; i<5; i++){
        cout<<*(it+i)<< ' ';
    }
    cout <<endl << "-----------------"<<endl;

    // 迭代访问
    for(vector<int>::iterator it=vi.begin(); it!=vi.end(); it++){
        cout << *it;
    }

    // popback()
    vi.pop_back();
    cout <<endl << "-----------------"<<endl;
    for(vector<int>::iterator it=vi.begin(); it!=vi.end(); it++){
        cout << *it;
    }

    // size
    cout <<endl << "-----------------"<<endl;
    cout <<vi.size();

//    //clear
//    vi.clear();
//    cout <<vi.size();

    // insert
    vi.insert(vi.begin()+2, -1);
        cout <<endl << "-----------------"<<endl;
    for(vector<int>::iterator it=vi.begin(); it!=vi.end(); it++){
        cout << *it;
    }

    // erase()
    vi.erase(vi.begin()+1);
    cout <<endl << "-----------------"<<endl;
    for(vector<int>::iterator it=vi.begin(); it!=vi.end(); it++){
        cout << *it;
    }


    vi.erase(vi.begin()+1,vi.begin()+3);
    cout <<endl << "-----------------"<<endl;
    for(vector<int>::iterator it=vi.begin(); it!=vi.end(); it++){
        cout << *it;
    }

    return 0;
}
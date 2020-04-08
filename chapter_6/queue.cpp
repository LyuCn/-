#include <iostream>
#include <queue>

using namespace std;

int main(){
    queue<int> q;
    for(int i=1;i<=5;i++){
        q.push(i);
    }
    cout<<q.front()<<q.back()<<endl;

    // pop()队首元素出队
    cout <<"-------------"<<endl;
    q.pop();
    cout<<q.front()<<endl;

    // empty()
    cout <<"-------------"<<endl;
    if(q.empty()!=true){
        cout <<"NO empty!"<<endl;
    }

    // size()
    cout <<"-------------"<<endl;
    cout << q.size();
    return 0;
}
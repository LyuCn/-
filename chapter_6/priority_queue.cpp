#include <iostream>
#include <vector>
#include <queue>
#include <string>
using namespace std;

// 结构体的优先级设置
struct fruit{
    string name;
    int price;
    friend bool operator < (fruit f1, fruit f2){
        return f1.price > f2.price; // 价格低的在前
    }
}f1,f2,f3;

int main(){
    priority_queue<int> q;

    // push
    q.push(3);
    q.push(4);
    q.push(1);

    // top()
    cout<<q.top()<<endl;

    // pop()
    cout<<"---------------"<<endl;
    q.pop();
    cout<<q.top()<<endl;

    // size()

    // 基本数据类型优先级设置
    priority_queue<int,vector<int>,greater<int> > q_;

    priority_queue<fruit> fq;
    f1.name = "桃子";
    f1.price = 3;
    f2.name = "梨子";
    f2.price = 4;
    f3.name = "苹果";
    f3.price = 1;
    fq.push(f1);
    fq.push(f2);
    fq.push(f3);
    cout<<"--------------------"<<endl;
    cout << fq.top().name <<fq.top().price<<endl;


    return 0;
}

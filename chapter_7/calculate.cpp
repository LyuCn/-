#include <iostream>
#include <string>
#include <stack>
#include <queue>
#include <map>

using namespace std;

// 定义结构体，便于操作
struct node{
    double num;     // 操作数
    char op;        // 操作符
    bool flag;      // true表示操作数，flase表示操作符
};

string str;
stack<node> s;
queue<node> q;
map<char, int> op;

void Change(){ //将中缀表达式转换为后缀表达式
    node temp;
    for(int i=0; i<str.length();){ //遍历字符串
        if(str[i]>='0' && str[i]<='9'){ //数字
            temp.flag = true; // 标记数字
            temp.num = str[i++]-'0'; // 计算数字
            while(i<str.length() && str[i]>='0' && str[i]<='9'){
                temp.num = temp.num*10+(str[i]-'0');
                i++;
            }
            q.push(temp);
        }else{
            temp.flag = false; //操作数
            // 只要操作数的栈顶元素比该操作数
            // 优先级高， 则弹出栈顶元素
            while(!s.empty() && op[str[i]] <= op[s.top().op]){
                q.push(s.top());
                s.pop();
            }
            temp.op = str[i];
            s.push(temp);
            i++;
        }
    }
    // 如果遍历完毕还有操作数
    if(!s.empty()){
        q.push(s.top());
        s.pop();
    }
}


double Cal() { // 计算后缀表达式
    double temp1, temp2;
    node cur,temp;
    while(!q.empty()){
        cur = q.front();
        q.pop();
        if(cur.flag==true)s.push(cur);
        else{   //操作符
            temp1 = s.top().num;
            s.pop();
            temp2 = s.top().num;
            s.pop();
            temp.flag = true; // 临时操作数
            if(cur.op='+')  temp.num = temp1 + temp2;
            else if(cur.op='-')temp.num = temp1 - temp2;
            else if(cur.op='*')temp.num = temp1 * temp2;
            else temp.num = temp1/temp2;
            s.push(temp);
        }
    }
    return s.top().num;
}


int main(){
    op['+'] = op['-'] = 1;
    op['*'] = op['/'] = 2;
    while(getline(cin,str), str != "0"){
        for(string::iterator it=str.end(); it!=str.begin(); it--){
            if(*it == ' ') str.erase(it);
        }
        while(!s.empty()) s.pop();
        Change();
        cout << Cal() << endl;
    }
    return 0;
}
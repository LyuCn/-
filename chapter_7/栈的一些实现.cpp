#include <iostream>

using namespace std;


// 清空
void clear(){
    TOP = -1;
}

// size
void size(){
    return TOP+1;
}

// empty()
bool empty(){
    if(TOP==-1) return true;
    else return false;
}

// push 进栈
void push(int x){
    st[++TOP] = x;
}

// pop 出栈
void pop(){
    TOP--;
}

// top 取栈顶元素
void top(){
    return st[TOP];
}

#include <iostream>

using namespace std;


// 清空
void clear(){
    front = rear = -1;
}

// size
void size(){
    return rear-front;
}

// empty()
bool empty(){
    if(front==rear) return true;
    else return false;
}

// push 入队
void push(int x){
    q[++rear] = x;
}

// pop 出队
void pop(){
    front++;
}

// get_front 取队首元素
void get_front(){
    return q[front+1];
}

// get_rear 取队尾元素
void get_rear(){
    return q[rear];
}
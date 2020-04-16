#include <iostream>

using namespace std;

// 链表节点
struct node {
    int data;
    node* next;
};

// 创建链表
node* create(int Array[]){
    node *pre, *head, *p;  // pre保存当前节点，head为头结点
    head = new node;     // 创建头结点
    head->next = NULL;   // 头结点不需要数据域，指针域初始为空
    pre = head;          // 记录头结点
    for(int i=0; i<5; i++){
        p = new node;
        // 赋值
        p->data = Array[i];
        p->next = NULL; //新节点指针域设为NULL
        pre->next = p;  // 连接
        pre = p;        // pre作为下一个节点的前驱结点
    }
    return head;
}

// 以head为头结点的链表上计数元素x的个数
int search(node* head, int x) {
    int count = 0;  // 计数器
    node* p = head->next;
    while(p != NULL){
        if(p->data == x){
            count++;
        }
        p = p->next;
    }
    return count;
}

// 将x插入以head为头结点的链表的第pos个位置上
void insert(node* head, int pos, int x){
    node* p = head;
    for(int i=0; i<pos-1; i++){
        p = p->next;
    }
    node* q = new node; //建立新节点
    q->data = x;        // 数据域
    q->next = p->next;  // 指针域
    p->next = q;        //连接
}

// 删除以head为头结点的链表中所有数据域为x的节点
void del(node* head, int x) {
    node *p, *pre;
    p = head->next; // 第一个节点
    pre = head;     // p前一个节点
    while(p != NULL){
        if(p->data == x){
            pre->next = p->next;    //
            delete(p);              // 释放P
            p = pre->next;          // 移动到下一个位置
        } else{ // 移动一位
            pre = p;
            p = p->next;
        }

    }
}


int main(){
    int Array[5] = {5,3,6,1,2};
    node* L = create(Array);
    L = L->next;
    while(L != NULL){
        cout << L->data <<endl;
        L = L->next;
    }

    // 查找
    cout << "----------------------" << endl;
    L = create(Array);
    int c;
    c = search(L,2);
    cout << c <<endl;

     // 插入
    cout << "----------------------" << endl;
    L = create(Array);
    insert(L,3,4);
    L = L->next;
    while( L != NULL){
        cout << L->data << endl;
        L = L->next;
    }


    return 0;
}
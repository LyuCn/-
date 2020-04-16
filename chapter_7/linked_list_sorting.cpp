#include <cstdio>
#include <algorithm>

using namespace std;

const int maxn = 100005;

struct Node {
    int address, data, next;
    bool flag;
}node[maxn];

bool cmp(Node a, Node b) {
    if(a.flag == false ||b.flag == false){
        return a.flag > b.flag;
    } else {
        return a.data < b.data;
    }
}

int main(){
    for(int i =0; i<maxn; i++){
        node[i].flag = false;
    }
    int n, begin, address;
    scanf("%d%d", &n, &begin);
    for(int i=0; i<n; i++){
        scanf("%d", &address);
        scanf("%d%d", &node[address].data, &node[address].next);
        node[address].address = address;
    }
    int count = 0, p = begin;
    // 枚举链表，对flag标记，同时计数
    while( p != -1){
        node[p].flag = true;
        count++;
        p = node[p].next;
    }
    if(count == 0){ // 链表没有节点
        printf("0 -1");

    }  else{
        // 筛选有效节点，排序
        sort(node, node+maxn, cmp);
        // 输出
        printf("%d %05d\n", count, node[0].address);
        for(int i=0; i<count; i++){
            if(i != count-1){
                printf("%05d %d %05d\n", node[i].address, node[i].data, node[i].next);
            } else{
                printf("%05d %d -1\n", node[i].address, node[i].data);
            }
        }
    }
    return 0;
}
#include <iostream>
#include <stack>

using namespace std;

int main(){
    stack<int> st;
    for(int i=1; i<=5; i++){
        st.push(i);
    }
    cout << st.top() << endl;

    // pop()
    for(int i=1; i<=3; i++){
        st.pop();
    }
    cout << "---------------" << endl;
    cout << st.top() << endl;

    // size()
    cout << "---------------" << endl;
    cout << st.size() << endl;

    return 0;
}

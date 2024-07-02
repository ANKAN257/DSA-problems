#include <bits/stdc++.h>
using namespace std;

class StackUsingQueue {
    queue<int> q1, q2;

public:
    void push(int val) {
        // q2.push(val);// it uses double queuu

        int size=q2.size();
        q2.push(val);
        for(int i=0;i<n;i++){
             
        }

        // while (!q1.empty()) {
        //     q2.push(q1.front());
        //     q1.pop();
        // }
        // swap(q1, q2);
    }

    void pop() {
        if (q1.empty()) {
            cout << "Stack is empty!" << endl;
            return;
        }
        q1.pop();
    }

    int top() {
        if (q1.empty()) {
            cout << "Stack is empty!" << endl;
            return -1;
        }
        return q1.front();
    }

    bool isEmpty() {
        return q1.empty();
    }

    int size() {
        return q1.size();
    }
}; // Added missing semicolon here

int main() {
    StackUsingQueue st;
    st.push(20);
    st.push(90);
    st.push(40);
    st.push(60);
    st.push(23);

    while (!st.isEmpty()) { // Corrected method call to isEmpty()
        cout << st.top() << " \n";
        st.pop();
    }
    cout << endl;

    return 0;
}

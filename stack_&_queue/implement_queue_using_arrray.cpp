#include <bits/stdc++.h>

using namespace std;
#define MAX_SIZE 100

class Queue {
    int arr[MAX_SIZE];
    int frontIdx;
    int rearIdx;
public:
    void push_fun(int val);
    void pop_fun();
    int top_fun();
    bool isEmpty_fun();
    int size_fun();

    // Constructor
    Queue() {
        frontIdx = -1;
        rearIdx = -1;
    }
};

void Queue::push_fun(int val) {
    if (rearIdx == MAX_SIZE - 1) {
        cout << "Queue is full now!" << endl;
        return;
    } else if (isEmpty_fun()) {
        frontIdx = 0;
        rearIdx = 0;
    } else {
        rearIdx++;
    }
    arr[rearIdx] = val;
}

bool Queue::isEmpty_fun() {
    return frontIdx == -1 && rearIdx == -1;
}

void Queue::pop_fun() {
    if (isEmpty_fun()) {
        cout << "Empty queue " << endl;
        return;
    } else if (frontIdx == rearIdx) {
        frontIdx = -1;
        rearIdx = -1;
    } else {
        frontIdx++;
    }
}

int Queue::top_fun() {
    if (isEmpty_fun()) {
        cout << "Queue is empty" << endl;
        return -1;
    }
    return arr[frontIdx];
}

int Queue::size_fun() {
    if (isEmpty_fun()) return 0;
    return rearIdx - frontIdx + 1;
}

int main() {
    Queue q;

    q.push_fun(10);
    q.push_fun(20);
    q.push_fun(40);
    q.push_fun(80);
    q.push_fun(160);

    cout << "Front or top of queue: " << q.top_fun() << endl;

    q.pop_fun();

    cout << "Top after pop queue: " << q.top_fun() << endl;

    while (!q.isEmpty_fun()) {
        cout << q.top_fun() << "  ";
        q.pop_fun();
    }
    cout << endl;

    return 0;
}

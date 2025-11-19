#include <iostream>
#include <vector>
#include <list>
#include <stack>
using namespace std;

class Stack {
    // vector<int> v;
    list<int> ll;

public:

    void push(int val) { //O(1)
        // v.push_back(val);
        ll.push_front(val);
    }

    void pop() {//O(1)
        // v.pop_back();
        ll.pop_front();
    }

    int top() {//O(1)
        // return v[v.size()-1];
        return ll.front();
    }

    bool empty() {
        // return v.size() == 0;
        return ll.size() == 0;
    }

};

int main() {

    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);

    while(!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
    return 0;
}
 
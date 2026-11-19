#include <bits/stdc++.h>
#include <stack>
#include <iostream>

using namespace std;
class MyQueue {
  stack<int>stack1;
  stack<int>stack2;
public:
    MyQueue() {
    }
    
    void push(int x) {
        stack1.push(x);
    }
    
    int pop() {
        int front_item = peek();
        stack2.pop();
        return front_item;
    }
    
    int peek() {
        if(stack2.empty()){
            while(!stack1.empty()){
                stack2.push(stack1.top());
                stack1.pop();
            }
        }
        return stack2.top();
    }
    
    bool empty() {
       return stack1.empty() && stack2.empty();
         }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */

// ENGR 151 Lab 06
// 
// Author: Aditya Shah
// Date: October 25 2016
//
// This file implements a stack that holds integers using a vector

#include <iostream>
#include <cassert>
#include <vector>

using namespace std;

class Stack {
  public:
    // Creates a stack
    Stack();
    // Pushes element onto the stack
    void push(int element);
    // Returns the top element of the stack. 
    // Should be called only if stack is non empty
    int top();
    // Removes the top element from the stack.
    // Popping an empty stack should have no effect on the stack
    void pop();
    // Returns the size of the stack.
    size_t size();
    // Returns true if the stack is empty, false otherwise.
    bool empty();
  private:
    vector<int> data;
};

// Empty implementation (No need to do anything).
Stack::Stack() { }

// Size has already been implemented for you.
size_t Stack::size() {
    return data.size();
}

int main() {
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    assert(!s.empty());
    assert(s.top() == 3);
    s.pop();
    assert(s.top() == 2);
    assert(s.size() == 2);
    s.pop();
    s.pop();
    assert(s.empty());
    return 0;
}

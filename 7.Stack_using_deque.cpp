#include<bits/stdc++.h>
#include <bits/stdc++.h> 
class Stack
{
public:
    deque<int> dq;
    int len ;

    Stack()
    {
    len = 0;    
    }

    // Pushes 'X' into the stack. Returns true if it gets pushed into the stack, and false otherwise.
    bool push(int x)
    {
       dq.push_back(x);
       len ++;
       return true;
    }

    // Pops top element from Stack. Returns -1 if the stack is empty, otherwise returns the popped element.
    int pop()
    {
        if(isEmpty()) return -1;
        int a = dq.back();
        dq.pop_back();
        len--;
        return a;
    }

    // Returns the topmost element of the stack. In case the stack is empty, it returns -1.
    int top()
    {
        if(isEmpty()) return  -1;
       
      
       return dq.back();
       
    }

    // Returns true if the stack is empty, otherwise false.
    bool isEmpty()
    {
        if(len ==0) return true;
        return false;
    }

    // Returns the number of elements currently present in the stack.
    int size()
    {
        return len;
    }
};

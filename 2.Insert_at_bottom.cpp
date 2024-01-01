#include <bits/stdc++.h> 
/*this fun() check if stack is empty
if it is not then pop else push x*/
void emptystack(stack<int>& myStack, int x){
//base case
    if(myStack.empty()){

        myStack.push(x);

        return ;
        }

        int a = myStack.top();
        myStack.pop();
        emptystack(myStack,x);
/*when the x insert at bottom insert 
remaining elements back at their position*/        
          myStack.push(a);

}

stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    emptystack(myStack,x);
    return myStack;


}

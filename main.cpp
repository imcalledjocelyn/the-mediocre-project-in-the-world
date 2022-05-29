#include "Queue.h"

int main(){
    Stack s;
    Queue q;
    
    s.push(1);
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    s.push(10);
    s.print_stack();
    s.push(20);
    s.print_stack();
    s.pop();
    s.print_stack();
    s.push(30);
    s.print_stack();
    s.push(40);
    s.print_stack();
    cout<< s.peek() <<endl;
    s.pop();
    s.print_stack();
    
 
    return 0;
} 

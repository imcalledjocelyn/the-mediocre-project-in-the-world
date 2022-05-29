#include "Queue.h"

//constructor initialize stacks 
Queue::Queue(){
    stack1 = new Stack;
    stack2 = new Stack;
}

Queue::~Queue(){
    delete stack1;
    delete stack2;
}

void Queue::enqueue(int i){
    if(stack2->peek()==INT_MIN){
        stack1->push(i);
    }
    else{
        while(stack2->peek()!=INT_MIN){
            stack1->push(stack2->peek());
            stack2->pop();
        }
        stack1->push(i);
        }
} //end of enqueue

int Queue::dequeue(){
    if(stack2->peek()!=INT_MIN){
        return stack2->pop();
    }
   
    else{
        while(stack1->peek()!=INT_MIN){
            stack2->push(stack1->peek());
            stack1->pop();
        }
    }
    return stack2->pop();
    
} //end of dequeue

void Queue::print_queue(){
    
    while(stack1->peek()!= INT_MIN){
        stack2->push(stack1->peek());
        stack1->pop();
    }

    while(stack2->peek()!=INT_MIN){
        stack1->push(stack2->peek());
        stack2->pop();    
     }
    cout<<"(top)";
    while(stack1->peek()!=INT_MIN){
        cout<<stack1->peek();
        stack2->push(stack1->peek());
        stack1->pop();
        cout<<" ";
     }
    cout<<""<<endl;
} 











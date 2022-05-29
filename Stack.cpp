#include"Stack.h"

Stack::Stack(){
    top = NULL;
}

Stack::~Stack(){
    while(top!= NULL){
        Node* current = top;
        top = top->prev;
        delete current;
    }
}

void Stack::push(int i){
    //create the new Node
    Node* newNode = new Node;
    newNode->val = i;
    newNode->prev = NULL;
    
    //if top is null 
    if(top==NULL){
        //make the new node the top
        top = newNode;
        return;
    }
    newNode->prev = top;
    top = newNode;
   }
  
int Stack::pop(){
    if (top == NULL){
        return INT_MIN;
    }
    Node* temp=top;
    top=top->prev;
    int value = temp->val;
    delete temp;
    return value;
}

int Stack::peek(){
    if (top == NULL){
        return INT_MIN;
    }
    Node* temp=top;
    int value = temp->val;
    return value;
}

void Stack::print_stack(){
    Node* current = top;
    cout<<"(top)";
    while(current != NULL){
        cout<< current->val <<" ";
        current = current-> prev;
    } 
    cout<<""<<endl;
}






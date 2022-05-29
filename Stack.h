#include<iostream>
#include <climits> // for INT_MIN
using namespace std;

struct Node{
	int val;
	Node* prev;
};

class Stack{
	public:
		Stack();
		~Stack();
		void push(int i);
		int pop();
		int peek();
		void print_stack();

	private:
		Node* top;
};


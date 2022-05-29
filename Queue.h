#include "Stack.h"

class Queue{
	public:
		Queue();
		~Queue();
		void enqueue(int i);
		int dequeue();
		void print_queue();

	private:
		Stack* stack1;
		Stack* stack2;
};



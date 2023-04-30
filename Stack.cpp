#include<iostream>
using namespace std;

#define size 5

struct stack{
	int data[size];
	int top = -1;
	
	void push(){
		if (top < size - 1){
			int value;
			cout << "\nEnter the value you want to push onto the stack -> ";
			cin >> value;
			top++;
			data[top] = value;
			cout << endl << value << " has been pushed onto the stack\n";
		}
		else
			cout << "\nStack is full (push)\n";
 	}
 	void pop(){
 		if (top != -1){
			cout << endl << data[top] << " has been popped from the stack\n";
			top--; 
		}
 		else
 			cout << "\nStack is already empty (pop)\n"; 			
	}
	void peek(){
		if (top != -1)
			cout << endl << "The element on top of the stack is "<< data[top] << endl;
		else
			cout << "\nStack is empty (peek)\n";
	}
	void clear(){
 		if (top != -1){
			top = -1;
			cout << "\nStack has been cleared successfully\n";
		}
 		else
 			cout << "\nStack is already empty (clear)\n";
	}
	void print(){
 		if (top != -1){
			int i = 0;
 			while (i <= top) {
				cout << endl << i + 1 << ". Element -> " << data[i] << endl;
				i++;
			}
		}
		else
			cout << "\nStack is empty (peek)\n";
 	}
 	void status(){
 		if (top == -1)
 			cout << "\nStack has " << size << " empty slots (status)\n";
 		else
 			cout << "\nCurrently stack contains " << top + 1 << " element(s) and stack has " << size - top - 1 << " empty slots\n";
	 }
};
int main(){
	stack example;
	int menu = 1;
	
	while (menu){
		cout << "\n0 - Quit\n1 - Push\n2 - Pop\n3 - Peek\n4 - Clear\n5 - Print\n6 - Status\nYour input -> ";
		cin >> menu;
		switch (menu){
			case 0:
				cout << "\nI knew you were a quitter\n";
				break;
			case 1:
				example.push();
				break;
			case 2:
				example.pop();
				break;
			case 3:
				example.peek();
				break;
			case 4:
				example.clear();
				break;
			case 5:
				example.print();
				break;
			case 6:
				example.status();
				break;
			default:
				cout << "\nPlease enter a valid input\n";
		}
	}
}


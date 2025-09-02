#include	<iostream>
#include	"Stack.h"
#include <iomanip>
#include <string>
#include "Stack.cpp"
#include "List.cpp"
#include "List.h"


using namespace std;



int main() {
	Stack stack;
	int x, y, temp;

	x = 4;
	y = 0;

	stack.push(7);
	stack.push(x);
	stack.push(x + 5);
	stack.pop(y);
	stack.push(x + y);
	stack.push(y - 2);
	stack.push(3);
	stack.pop(x);

	cout << "\nx: " << x << "\ty: " << y << endl;

	while(!stack.empty())
	{
		stack.pop(temp);
		cout << temp << setw(5);
	}



	
	system("pause");
	return 0;
}
#include<iostream>
using namespace std;
int add(int a, int b);
int subtract(int a, int b);

int main() {
/*
	//1. Basic Pointer Declaration and Initialization:
	int* prt0;
	int value = 42;
	int* ptr; // Declare an integer pointer
	ptr = &value; // Assign the address of 'value' to 'ptr'


	cout << "Value: " << value << endl;
	cout << "Address of 'value': " << &value << endl;
	cout << "Value via pointer: " << *ptr << endl;
	cout << "Address stored in 'ptr': " << ptr << endl;
	cout << "Address of 'ptr': " << &ptr << endl;
	cout << "Address of 'ptr': " << &ptr << endl;


	cout << "----------------------------------------\n\n\n\n\n " << endl;

	//--------------------------------------------------------------------
	//2. Changing a Value via a Pointer:
	int x = 10;
	int* ptr2 = &x;

	cout << "Original x: " << x << endl;
	*ptr2 = 20; // Change the value of x through the pointer
	cout << "Modified x: " << x << endl;
	cout << "----------------------------------------\n\n\n\n\n " << endl;

	//--------------------------------------------------------------------
	//3. Pointers and Arrays:
	int arr[] = { 1, 2, 3, 4, 5 };
	int* ptr3 = arr; // 'ptr' points to the first element of 'arr'

	for (int i = 0; i < 5; i++) {
		cout << "Element " << i << ": " << *ptr3 << endl;
		ptr3++; // Move the pointer to the next element
	}
	cout << "----------------------------------------\n\n\n\n\n " << endl;

	//--------------------------------------------------------------------
	//4. Dynamic Memory Allocation :
	int* dynamicValue = new int; // Allocate memory for an integer dynamically
	*dynamicValue = 100; // Assign a value
	cout << "Dynamic Value: " << *dynamicValue << endl;
	delete dynamicValue; // Deallocate the memory
	cout << "----------------------------------------\n\n\n\n\n " << endl;

	//--------------------------------------------------------------------
	//5. Pointer to Functions:

	

	
		int (*operation)(int, int); // Declare a pointer to a function
		operation = add; // Point to the 'add' function

		int result = operation(5, 3); // Call the function through the pointer
		cout << "Result: " << result << std::endl;

		operation = subtract; // Point to the 'subtract' function
		result = operation(5, 3);
		cout << "Result: " << result << std::endl;

		
	

	cout << "----------------------------------------\n\n\n\n\n " << endl;
	*/


	int **ptr0;
	int value = 42;
	int* ptr; // Declare an integer pointer
	ptr = &value; // Assign the address of 'value' to 'ptr'
	ptr0 = &ptr;



	cout << "val    : " << value << endl;
	cout << "&value : " << &value << endl;
	cout << "ptr    : " << ptr << endl;
	cout << "*ptr   : " << *ptr << endl;
	cout << "&ptr   : " << &ptr << endl;
	cout << "ptr0   : " << ptr0 << endl;
	cout << "*ptr0  : " << *ptr0 << endl;
	cout << "&ptr0  : " << &ptr0 << endl;
	cout << "**ptr0  : " << **ptr0 << endl;
	cout << "&*ptr0  : " << &(*ptr0) << endl;
	cout << "*&ptr0  : " << *(&ptr0) << endl;
}
int add(int a, int b) {
	return a + b;
}

int subtract(int a, int b) {
	return a - b;
}
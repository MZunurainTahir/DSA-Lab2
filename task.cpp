#include <iostream>
using namespace std;

void analyze_pointer(int *ptr) {
	cout << "Memory location: " << ptr << endl;
	cout << "Value: " << *ptr << endl;
}

int main() {
	int iValue = 42;
	cout << "Stack Allocation:" << endl;
	analyze_pointer(&iValue);

	int *pHeapValue = new int(24);
	cout << "\nHeap Allocation:" << endl;
	analyze_pointer(pHeapValue);

	delete pHeapValue;

	return 0;
}

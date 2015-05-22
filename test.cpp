#include <iostream>

int main()
{
	// Testing cout
	std::cout << "TESTING 1 2 3...\n";
	
	// Testing calling a function
	std::cout << getNum();
	
	// Testing cin.ignore()
	cin.ignore();
	
	// Bail
	return 0;
}

void getNum()
{
	return (5 * 5);
}

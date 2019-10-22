#include <iostream>

#define LOG(x) std:: cout << x << std::endl

void Increment(int& value) //reference
{
	value++;
}

int main()
{
	int a = 5;
	int b = 8;
	
	int* ref = &a;
	*ref = 2; //pointer 
	ref = &b;
	*ref = 1;
	
//	Increment(a);
	LOG(a);
	LOG(b);
}

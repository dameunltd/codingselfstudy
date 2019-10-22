//A POINTER is an integer/number that stores a memory address//

#include <iostream>
#include <cstring>

using namespace std;

#define LOG(x) std::cout << x << std::endl

int main()
{
	char* buffer = new char[8];
	memset(buffer, 0, 8);
	
	char** ptr = &buffer; /*double pointer = pointer that points to another pointer.
							char pointer points to address of buffer pointer*/
	

} 



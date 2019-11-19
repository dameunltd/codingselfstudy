#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

std::string birthdate;
    
void printString(const std::string& string)
{
    std::cout << string << std::endl;
}

void getBirthdate()
{
    std::cout<<"When is your birthday? "<<std::endl;
    cin>>birthdate;
}

int main()
{

    
    std::string name = std::string("Dame") + " hello!";
    
    printString(name);
    getBirthdate();
    std::string logSuccess = std::string("Thank you! We will send you a postcard in ") + birthdate + "!";
    printString(logSuccess);
    
    
    std::cin.get();
}

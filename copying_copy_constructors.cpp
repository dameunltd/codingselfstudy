#include <iostream>
#include <string>
#include <string.h>

/* struct Vector2
{
    float x, y;
};
*/

class String
{
private:
    char* m_Buffer;
    unsigned int m_Size;
public:
    String(const char* string)
    {
        m_Size = strlen(string);
        m_Buffer = new char[m_Size+1];
        memcpy(m_Buffer, string, m_Size);
        m_Buffer[m_Size] = 0;
    }

    // copy constructor used to do DEEP COPY to solve crashing/copying problem from line 55-58
    String(const String& other)
        : m_Size(other.m_Size) // int shallow copied
    {
        m_Buffer = new char[m_Size+1]; // allocate new m_Buffer/memory on the heap
        memcpy(m_Buffer, other.m_Buffer, m_Size+1);
    }

    ~String()
    {
        delete[] m_Buffer;
    }

    // allows operator to work with string class
    char& operator[](unsigned int index)
    {
        return m_Buffer[index];
    }

    // friend allows operator<< below to access private "m_Buffer"
    friend std::ostream& operator<<(std::ostream& stream, const String& string);
};

std::ostream& operator<<(std::ostream& stream, const String& string)
{
    stream <<  string.m_Buffer;
    return stream;
}

/*function does not modify string so you want to pass object as a const reference
   avoids object being copied a 3rd time*/
void PrintString(const String& string)
{
    std::cout<<string<<std::endl;
}

int main()
{
    String string = "Dame";
    String second = string; // two strings of memory created, and copied the char* m_Buffer pointer from the String class

    second[2] = 'v'; // 2nd index(3rd character) changed to 'v'

    PrintString(string);
    PrintString(second);

//    Vector2* a = new Vector2();

//  Vector2 a = { 2, 3 };

    /* when copying using pointer*, you are copying both pointers and assigning to
    same value */
//    Vector2* b = a;
//    b->x = 2 // here you are effecting the memory address, not the memory at pointer pointer

    std::cin.get();
}

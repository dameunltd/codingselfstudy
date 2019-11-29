#include <iostream>
#include <string>

using namespace std;

class Entity
{
private:
    int m_X, m_Y;
    mutable int var;
public:
    int GetX() const // function is not going to modify variables(read-only)
    {
        m_X = 2;
        return m_X;
    }

    int GetX() // sometimes identical function set without *const*
    {
        return m_X;
    }

    void SetX(int x)
    {
        m_X = x;
    }
};

void PrintEntity(const Entity& e) //pass entity through const reference(can't modify)
{
    std::cout<<e.GetX()<<std::endl;
}
int main()
{
    Entity e;

    const int MAX_AGE = 90;

    const int* const a = new int;

    *a = 2;
    a = (int*)&MAX_AGE;
    a = nullptr;
    std::cout<<*a<<std::endl;
}

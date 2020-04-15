#include <iostream>
#include <string>

class Entity
{
public:
    void Print() const { std::cout<<"Hello!"<<std::endl; }
};

// this class deletes the entity from memory when it goes out of scope
class ScopedPtr
{
private:
    Entity* m_Obj;
public:
    ScopedPtr(Entity* entity)
        : m_Obj(entity)
    {
    }

    ~ScopedPtr()
    {
        delete m_Obj;
    }

    Entity* operator->()
    {
        return m_Obj;
    }

     const Entity* operator->() const
    {
        return m_Obj;
    }
};

struct Vector3
{
    float x, y, z; // each float is 4 bytes(offset of 'x' = 0, 'y' = 4, 'z' = 8
};

int main()
{
    ScopedPtr entity = new Entity();
    entity->Print();

    /*line 47 uses arrow operator to get the offset of the certain values in Vec3 struct above
    starting at 0(nullptr)*/
    auto theOffset = (intptr_t)&((Vector3*)nullptr)->z;
    std::cout<<theOffset<<std::endl;

    /*
    Entity e;
    e.Print();

    Entity* ptr = &e;

    ptr->Print(); // shortcut for dereferencing*/

    std::cin.get();
}

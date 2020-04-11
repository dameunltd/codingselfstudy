#include <iostream>
#include <string>

class Entity
{
private:
    std::string m_Name;
    int m_Age;
public:
    Entity(const std::string& name)
        : m_Name(name), m_Age(-1) {}

    explicit Entity(int age)
        : m_Name("Unknown"), m_Age(age) {}
};

void PrintEntity(const Entity& entity)
{
    // printing
}
int main()
{
    PrintEntity(Entity(22));
    PrintEntity(Entity("Dame"));

    Entity a("Dame");
    Entity b(22); // when explicit is called, the constructor must be EXPICITLY called
    std::cin.get();
}

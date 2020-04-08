#include <iostream>
#include <string>

class Entity
{
private:
    std::string m_Name;
public:
    Entity()
    {
        m_Name = "Unknown";
    }

    Entity(const std::string& name) //pass name string into Entity constructor
    {
        m_Name = name;
    }

    const std::string& GetName() const { return m_Name; }
};

int main()
{
    Entity e0;
    std::cout<<e0.GetName()<<std::endl;

    Entity e1("Dame");
    std::cout<<e1.GetName()<<std::endl;

    std::cin.get();
}

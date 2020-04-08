#include <iostream>
#include <string>

class Example
{
public:
    Example()
    {
        std::cout<<"Created Entity!"<<std::endl;
    }

    Example(int x)
    {
        std::cout<<"Created Entity with " <<x<< "!"<<std::endl;
    }
};
class Entity
{
private:
    Example m_Example;
    std::string m_Name;
    int m_Score;
    int x, y, z;
public:
    Entity()
        : m_Name("Unknown"), m_Score(0), x(0), y(0), z(0) // initializers needed to be in order of variables listed
    {
        /* cluttery code(Initializer list gives more form and also some function)
        m_Name = "Unknown";
        m_Score = 0;
        x=0;
        y=0;
        z=0;
        */

        m_Example = Example(8);
    }

    Entity(const std::string& name) //pass name string into Entity constructor
        : m_Name(name)
    {
 //       m_Name = name;
    }

    const std::string& GetName() const { return m_Name; }
};

int main()
{
    Entity e0;

    std::cin.get();
}

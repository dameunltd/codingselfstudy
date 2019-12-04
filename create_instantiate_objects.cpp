#include <iostream>
#include <string>

#include <stdio.h>

using String = std::string;

class Entity
{
private:
  String m_Name;
public:
  Entity() : m_Name("Unkown") {}
  Entity(const String& name) : m_Name(name) {}

  const String& GetName() const { return m_Name; }
};


int main()
{
/*  Entity* e;
  {
    Entity* entity = new Entity("Dame");
    e = &entity
    std::cout<<entity.GetName()<<std::endl;

  }
*/
  Entity entity("Dame");
  std::cout<<entity.GetName()<<std::endl;

  std::cin.get();
//  delete entity;
}

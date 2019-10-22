#include <iostream>
#include <string>

class Entity
{
	public:
		virtual	std::string GetName() { return "Entity"; }
};

class Player : public Entity
{
	private:
		std::string m_Name;
	public:
		Player(const std::string& name)
		: m_Name(name) {}
		
	std::string GetName() override { return m_Name; } // "override" signifies to computer to skip virtual function set
};

void PrintName(Entity* entity)
{
	std::cout<<entity->GetName()<<std::endl; //PrintName function uses Entity pointer in 'entity' to GetName of whatever entity passed in
}

int main()
{
	Entity* e = new Entity();
	PrintName(e);
	
	Player* p = new Player("Dame");
	PrintName(p);
	
	std::cin.get();
}

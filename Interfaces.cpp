#include <iostream>
#include <string>

class Printable
{
	public:
		virtual std::string GetClassName() = 0;
};

class A : public Printable
{
	public:
		std::string GetClassName() override { return "A"; }
};

class Entity : public Printable // Entity is inherited into Printable
{
	public:
		virtual	std::string GetName() { return "Entity"; } //set to a virtual function//
		std::string GetClassName() override { return "Entity"; }
};

class Player : public Entity
{
	private:
		std::string m_Name;
	public:
		Player(const std::string& name)
		: m_Name(name) {}
		
	std::string GetName() override { return m_Name; } // "override" signifies to computer to skip virtual function set
	std::string GetClassName() override { return "Player"; }
};

void PrintName(Entity* entity) // "Entity* signifies pointer//
{
	std::cout<<entity->GetName()<<std::endl; //PrintName function uses Entity pointer in 'entity' to GetName of whatever entity passed in
}

void Print(Printable* obj)
{
	std::cout<<obj->GetClassName()<<std::endl;
}

int main()
{
	Entity* e = new Entity();
	//PrintName(e);
	
	Player* p = new Player("Dame");
	//PrintName(p);
	
	Print(e);
	Print(p);
	Print(new A());
	
	
	std::cin.get();
}

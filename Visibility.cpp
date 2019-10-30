#include <iostream>
#include <string>

class Entity
{
	protected:
		int X, Y;
		
		void Print() {}
	public:
		Entity()
		{
			X = 0;
			Print();
		}
		
};

class Player : public Entity
{
	public:
		Player()
		{
			X = 2;
			Print();
		}
};

int main()
{
	Entity e;
	e.Print();
	e.X = 2;
	
	std::cin.get();

}

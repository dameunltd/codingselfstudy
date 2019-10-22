#include <iostream>

using namespace std;

class Entity
{
	public:
		float X, Y;
		
	void Move(float xa, float ya)
	{
		X += xa;
		Y += ya;
	}	
};

class Player : public Entity // ":: public <x>" causes player to inherit everything Entity has
{
	public:
		const char* Name;
	
	void PrintName()
	{
		std::cout<<Name<<std::endl;
	}
};

int main()
{
	std::cout<<sizeof(Player)<<std::endl;
	
	Player player;
	player.Move(5, 2);
	player.X = 2;
}

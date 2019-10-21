#include <iostream>
#include <cstdlib>
#include <cmath>


using namespace std;

/*Classes used primarily for code with functionality and potential inheritance throughout 
code life*/
class Player
 {
public:
	int x, y; 	
	int speed;
		
	void Move(int xa, int ya)
	{
		xa * speed;
		ya * speed;
	
	}
};

//Structs mainly used to store data. Not much functionality available
struct Vec2
{
	float x, y;   
	
	//function to take in another vector
	void Add(Vec2& other)
	{
		x += other.x;
		y += other.y;
	}   
};

int main()
{
	Player player;
	player.Move( 1, 1);
}

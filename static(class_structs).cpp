#include <iostream>
#include <string>

struct Entity
{
    static int x, y;

    static void Print()
    {
        std::cout<<x<< ", " << y << std::endl;
    }
};

// Passing Entity as parameter allows access to variables X & Y
// When parameter is removed, u get errors.(Static functions work like this)
/*static void Print(Entity e)
    {
        std::cout<<e.x<< ", " << e.y << std::endl;
    }
*/

int Entity::x; //scope of the variable
int Entity::y;

int main()
{
    Entity e;
    Entity::x = 2;
    Entity::y = 3;

    Entity e1;
    Entity::x = 5;
    Entity::y = 8;

    Entity::Print();
    Entity::Print();

    std::cin.get();
}

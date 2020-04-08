#include <iostream>

class Entity
{
public:
    float X, Y;

    /* Constructor here used to initiate X & Y variables(no parameters)
    Entity()
    {
        X = 0.0f;
        Y = 0.0f;
    }
    */

    Entity(float x, float y)
    {
        X = x;
        Y = y;
    }

    /* 'Init' function here sets X & Y coordinates to 0
    void Init()
    {
        X = 0.0f;
        Y = 0.0f;
    }
    */

    void Print()
    {
        std::cout<< X << ", " << Y << std::endl;
    }
};

class Log
{
public:
    Log() = delete; // Tells computer that you do not want the default constructor

    static void Write()
    {

    }
};
int main()
{
    Log::Write;
//    Log l;
    Entity e(10.0f, 62.0f); // instantiating Entity class to 'e'
    e.Print();
    std::cin.get();
}

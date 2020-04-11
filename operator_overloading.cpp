#include <iostream>
#include <string>

struct Vector2
{
    float x, y;

    Vector2(float x, float y) // vector2 is 2 component vector(two floats here)
        : x(x), y(y) {}

    Vector2 Add(const Vector2& other) const
    {
        return Vector2(x + other.x, y + other.y);
    }

    // this function is defining our addition operator in line36
    Vector2 operator+(const Vector2& other) const
    {
        return Add(other);
    }

    Vector2 Multiply(const Vector2& other) const
    {
        return Vector2(x * other.x, y * other.y);
    }

    // this function is defining our multiplication operator in line36
    Vector2 operator*(const Vector2& other) const
    {
        return Multiply(other);
    }

};

// this function gives our "<<" operator the ability to print our Vector2 class functions
std::ostream& operator<<(std::ostream& stream, const Vector2& other)
{
    stream << other.x << ", " << other.y;
    return stream;
}

int main()
{
    Vector2 position(4.0f, 4.0f);
    Vector2 speed(0.5f, 1.5f);
    Vector2 powerup(1.1f, 1.1f);

    Vector2 result1 = position.Add(speed.Multiply(powerup));
    Vector2 result2 = position + speed * powerup;

    std::cout << result2 << std::endl;
    std::cin.get();
}

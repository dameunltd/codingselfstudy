#include <iostream>
#include <string>
#include <vector> /* allows for the creation of dynamic arrays(std::vector).
a dynamic array is one that has no specific size but grows as you add elements. */

struct Vertex
{
    float x, y, z;

    Vertex(float x, float y, float z) // initial Vertex constructor
        : x(x), y(y), z(z)
    {
    }

    // copy constructor
    Vertex(const Vertex& vertex)
        : x(vertex.x), y(vertex.y), z(vertex.z)
    {
        std::cout<<"Copied!"<<std::endl;
    }
};

std::ostream& operator<<(std::ostream& stream, const Vertex& vertex)
{
    stream << vertex.x << ", " << vertex.y << ", " << vertex.z;
    return stream;
}

int main()
{
    std::vector<Vertex> vertices; // std::vector<type that will be in array> object called
    vertices.reserve(3); // optimizes vector to allocate enough memory to hold 3 elements

    // emplace_back allows vertices to be constructed in *vector memory* instead of main function
    vertices.emplace_back(1, 2, 3);
    vertices.emplace_back(4, 5, 6);
    vertices.emplace_back(7, 8, 9);

    std::cin.get();
}

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
    vertices.push_back({ 1, 2, 3}); // initializer list used to create array
    vertices.push_back({ 4, 5, 6});

    for (int i = 0; i < vertices.size(); i++)
        std::cout<<vertices[i]<<std::endl;

    //erase takes the beginning of vertices and then erases the 2nd element(index 1)
    vertices.erase(vertices.begin()+1);

    /*range based for-loop. best to pass Vertex as a reference
    to avoid copying vertices (further research)*/
    for (Vertex& v : vertices)
        std::cout<<v<<std::endl;

    std::cin.get();
}

#include <iostream>
#include <string>
#include <memory>

class Entity
{
public:
    Entity()
    {
        std::cout<<"Created Entity!"<<std::endl;
    }

    ~Entity()
    {
        std::cout<<"Destroyed Entity!"<<std::endl;
    }

    void Print() {}
};

int main()
{
    {
        std::shared_ptr<Entity> e0;
        {
 //         std::unique_ptr<Entity> entity = std::make_unique<Entity>();

            //when a shared pointer is assigned to another it increases reference count
            std::shared_ptr<Entity> sharedEntity = std::make_shared<Entity>();

            /*when a shared pointer is assigned to a weak pointer, it doesnt increase
            reference count*/
            std::weak_ptr<Entity> weakEntity = sharedEntity;
            e0 = sharedEntity;
 //         entity->Print();
        }
    }
    std::cin.get();
}

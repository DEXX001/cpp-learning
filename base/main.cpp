#include <iostream>
#include <vector>
#include "player.h"
#include "enemy.h"

int main()
{
    std::vector<Entity*> entities;

    entities.push_back(new Player(10, 5, 2));
    entities.push_back(new Enemy(50, 50));

    std::cout << "=== ÉTAT INITIAL ===" << std::endl;
    for (Entity* e : entities)
        e->print();
    
    std::cout << "\n=== UPDATE GLOBAL ===" << std::endl;
    for (Entity* e : entities)
        e->update();

    std::cout << "\n=== ÉTAT APRÈS UPDATE ===" << std::endl;
    for (Entity* e : entities)
        e->print();

    Player* p = dynamic_cast<Player*>(entities[0]);
    Enemy* e = dynamic_cast<Enemy*>(entities[1]);

    if (p && e)
    {
        std::cout << "\nDistance Player -> Enemy : "
                  << e->distanceTo(*p) << std::endl;

        if (e->isCollidingWith(*p))
            std::cout << "Collision detectee !" << std::endl;
        else
            std::cout << "Aucune collision." << std::endl;
    }

    for (Entity* e : entities)
        delete(e);

    return EXIT_SUCCESS;

}
#include <iostream>
#include "player.h"
#include "enemy.h"

int main()
{
    Player p(10, 5, 3);
    Enemy e(12, 7);

    p.print();
    std::cout << "Enemy at : (" << e.getX() << ", " << e.getY() << ")" << std::endl;

    int dist = e.distanceTo(p);
    std::cout << "Distance Enemy -> Player = " << dist << std::endl;

    if (e.isCollidingWith(p))
        std::cout << "Collision !\n";
    else
        std::cout << "Pas de collision.\n";
    
    p.moove(1, 0);
    p.print();

    std::cout << "Nouvelle distance = " << e.distanceTo(p) << std::endl;

    return EXIT_SUCCESS;

}
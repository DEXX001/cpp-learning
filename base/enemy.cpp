#include "enemy.h"
#include "player.h"
#include <iostream>

Enemy::Enemy(int startX, int startY)
        : x(startX), y(startY)
{
    std::cout << "Constructeur Player appelé." << std::endl;
}

int Enemy::getX() const { return x; }
int Enemy::getY() const { return y; }

void Enemy::move(int dx, int dy)
{
    x += dx;
    y += dy;
}

int Enemy::distanceTo(const Player& p) const
{
    int dx = p.getX() - x;
    int dy = p.getY() - y;

    if (dx < 0) dx = -dx;
    if (dy < 0) dy = -dy;

    return dx + dy;
}

bool Enemy::isCollidingWith(const Player& p) const
{
    return (p.getX() == x && p.getY() == y);
}




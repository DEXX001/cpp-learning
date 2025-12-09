#ifndef ENEMY_H
#define ENEMY_H

class Player;

#include "entity.h"

class Enemy:public Entity
{
    private:
        int x, y;
    public:
        Enemy(int startX, int startY);

        int getX() const override;
        int getY() const override;
        void print() const override;
        void update() override;

        void move(int dx, int dy);

        int distanceTo(const Player& p) const;
        bool isCollidingWith(const Player& p) const;
};

#endif
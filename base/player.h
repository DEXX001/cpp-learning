#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include "entity.h"

class Player : public Entity
{
    private:
        int x, y, speed;
    
    public:
        Player(int startX, int startY, int startSpeed);

        void moove(int dx, int dy);

        void update() override;
        int getX() const override;
        int getY() const override;
        int getSpeed() const;

        void setSpeed(int s);
        void moveTo(int newX, int newY);
        void accelerate(int amount);
        void print() const override;
};



#endif

#ifndef ENEMY_H
#define ENEMY_H

class Player;

class Enemy {
    private:
        int x, y;
    public:
        Enemy(int startX, int startY);

        int getX() const;
        int getY() const;

        void move(int dx, int dy);

        int distanceTo(const Player& p) const;
        bool isCollidingWith(const Player& p) const;
};

#endif
#ifndef PLAYER_H
#define PLAYER_H

class Player{
    private:
        int x, y, speed;
    
    public:
        Player(int startX, int startY, int startSpeed);

        void moove(int dx, int dy);

        int getX() const;
        int getY() const;
        int getSpeed() const;

        void setSpeed(int s);
        void moveTo(int newX, int newY);
        void accelerate(int amount);
        void print() const; 
};



#endif

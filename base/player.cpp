#include "player.h"
#include <iostream>

Player::Player(int startX, int startY, int startSpeed)
            : x(startX), y(startY), speed(startSpeed)
{
    std::cout << "Constructeur Player appelé." << std::endl;
}

void Player::moove(int dx, int dy)
{
    x += dx * speed;
    y += dy * speed; 
}

int Player::getX() const { return x; }
int Player::getY() const { return y; }
int Player::getSpeed() const { return speed; }

void Player::update()
{
    x += speed;
}

void Player::setSpeed(int s)
{
    if (s < 0)
    {
        std::cout << "Vitesse invalide !" << std::endl;
        return;
    }
    speed = s;
}

void Player::moveTo(int newX, int newY)
{
    x = newX;
    y = newY;
}

void Player::accelerate(int amount)
{
    if (speed + amount < 0)
    {
        std::cout << "Impossible : vitesse négative." << std::endl;
        return;
    }
    speed += amount;
}

void Player::print() const
{
    std::cout << "Player("
              << "x=" << x << ", y" << y
              << ", speed =" << speed
              << ")" << std::endl;
}
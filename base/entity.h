#ifndef ENTITY_H
#define ENTITY_H

class Entity{
    public:
        virtual ~Entity() {}

        virtual void update() = 0;
        virtual void print() const = 0;

        virtual int getX() const = 0;
        virtual int getY() const = 0;
};

#endif
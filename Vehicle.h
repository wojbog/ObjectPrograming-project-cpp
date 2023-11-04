#include<iostream>


class Vehicle {
    protected:
        std::string name;
        int distance = 0;
    public:
        virtual void toString() = 0;
        void addDistance(int distance);
};
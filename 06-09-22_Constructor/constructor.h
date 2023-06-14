#ifndef CONSTRUCTOR_H
#define CONSTRUCTOR_H

#include<iostream>

class Change{
    private:
        int value_one{};
        int value_two{};
    public:
        Change(int num1, int num2);
        int set(int num1, int num2);
        int print_one(){return value_one;}
        int print_two(){return value_two;}
};
#endif
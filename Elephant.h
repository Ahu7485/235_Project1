#pragma once
#ifndef ELEPHANT_H //include guard or header guard
#define ELEPHANT_H
#include "Animal.hpp"
class Elephant : public Animal
{
public:
    Elephant();
    //Hare(int* pattern, int length, int position);
    Elephant(int* , int , int );
    void showExcitement() const;
private:
}; //do not forget ;
#endif
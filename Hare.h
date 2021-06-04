#pragma once
#ifndef HARE_H //include guard or header guard
#define HARE_H
#include "Animal.hpp"
class Hare : public Animal
{
public:
    Hare();
    //Hare(int* pattern, int length, int position);
    Hare(int* , int , int );
    void showExcitement() const;
private:
}; //do not forget ;
#endif
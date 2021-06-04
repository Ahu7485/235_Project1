//google "pragma once" to see what directive means.
#pragma once

//google "include guard" or "header guard" to see
//what the following ifndef/define/endif means.
//motivation: avoid to include a header file more than once
//in a project.
#ifndef TORTOISE_H_ 
#define TORTOISE_H_
#include "Animal.hpp"
class Tortoise : public Animal{
    public: 
        Tortoise(); 
        Tortoise(int* pattern, int length, int position);
        void showExcitement() const;
    private:
};

#endif
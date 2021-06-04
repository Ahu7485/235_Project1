#pragma once

#ifndef DUCK_H_
#define DUCK_H_
#include "Animal.hpp"
class Duck : public Animal{
    public: 
        Duck(); 
        Duck(int* pattern, int length, int position);
        void showExcitement() const;
    private:
};

#endif
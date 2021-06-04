#pragma once
#ifndef ANIMAL_H_
#define ANIMAL_H_
#include <cstdlib>
#include <iostream>

class Animal
{
private:
    int* pattern;
    int patternLength;
    char mark;
    std::string name;
    int position;
public:
    Animal();
    ~Animal();
    void setPatternAndLength(int* pattern, int size);
    void setMark(char mark);
    void setName(std::string name);
    void setPosition(int position);
    int* getPattern() const;
    int getPatternLength() const;
    int getPosition() const;
    std::string getName() const;
    char getMark() const;
    void move();
    virtual void showExcitement() const;
};
#endif
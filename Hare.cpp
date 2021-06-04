#include "Hare.h"
#include <cstdlib> //rand

Hare::Hare()
{
    setName("Hare"); setMark('H');
    int *defaultpattern = new int[10];
    int harepattern[] = {0, 0, 9, 9, -12, 1, 1, 1, -2, -2};
    for(int i = 0; i < 10; i++){
        defaultpattern[i] = harepattern[i];
    }
    setPatternAndLength(defaultpattern, 10);
}

Hare::Hare(int* pattern, int size, int position)
{
    setName("Hare"); setMark('H');
    if (size > 0){
        setPatternAndLength(pattern, size);
        setPosition(position);
    }
    else //size <= 0
    {
        int *defaultpattern = new int[10];
        int harepattern[] = {0, 0, 9, 9, -12, 1, 1, 1, -2, -2};
        for(int i = 0; i < 10; i++){
            defaultpattern[i] = harepattern[i];
        }

        setPatternAndLength(defaultpattern, 10);
    }
    setPosition(position); 
}
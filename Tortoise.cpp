#include "Tortoise.h"
#include <cstdlib> //rand

Tortoise::Tortoise()
{
    setName("Tortoise"); setMark('T');
    int* Tortoisepattern = new int[10]; //dynamically allocated 10-ints
    int defaultPattern[] = { 3, 3, 3, 3, 3, -6, -6, 1, 1, 1};
    for (int i = 0; i < 10; i++){
        Tortoisepattern[i] = defaultPattern[i];
    }
    setPosition(0);
}

Tortoise::Tortoise(int* pattern, int size, int position)
{
    setName("Tortoise"); setMark('T');
    if (size > 0){
       setPatternAndLength(pattern, size);
    }
    else{
        int* Tortoisepattern = new int[10]; //dynamically allocated 10-ints
        int defaultPattern[] = { 3, 3, 3, 3, 3, -6, -6, 1, 1, 1};
        for (int i = 0; i < 10; i++){
        Tortoisepattern[i] = defaultPattern[i];
        }
    }

    setPosition(position);
}
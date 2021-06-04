#include "Elephant.h"
#include <cstdlib> //rand

Elephant::Elephant()
{
    setName("Elephant"); setMark('E');
    int* Elephantpattern = new int[10]; //dynamically allocated 10-ints
    int defaultPattern[] = { 3, 3, 3, 3, 3, -6, -6, 1, 1, 1};
    for (int i = 0; i < 10; i++){
        Elephantpattern[i] = defaultPattern[i];
    }
    setPosition(0);
}

Elephant::Elephant(int* pattern, int size, int position)
{
    setName("Elephant"); setMark('E');
    if (size > 0){
       setPatternAndLength(pattern, size);
    }
    else{
        int* Elephantpattern = new int[10]; //dynamically allocated 10-ints
        int defaultPattern[] = { 3, 3, 3, 3, 3, -6, -6, 1, 1, 1};
        for (int i = 0; i < 10; i++){
        Elephantpattern[i] = defaultPattern[i];
        }
    }

    setPosition(position);
}

void Elephant::showExcitement() const {
    std::cout <<   "Elephant smiles" << std::endl;
}
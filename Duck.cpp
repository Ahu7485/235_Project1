#include "Duck.h"
#include <cstdlib> //rand

Duck::Duck()
{   
    setName("Duck"); setMark('D');
    int *defaultpattern = new int[10];
    int duckpattern[] = {0, 0, 9, 9, -12, 1, 1, 1, -2, -2};
    for(int i = 0; i < 10; i++){
        defaultpattern[i] = duckpattern[i];
    }
    setPatternAndLength(defaultpattern, 10);
}

Duck::Duck(int* pattern, int size, int position)
{
    setName("Duck"); setMark('D');
    if (size > 0){
        setPatternAndLength(pattern, size);
        setPosition(position);
    }
    else //size <= 0
    {
        int *defaultpattern = new int[10];
        int duckpattern[] = {0, 0, 9, 9, -12, 1, 1, 1, -2, -2};
        for(int i = 0; i < 10; i++){
            defaultpattern[i] = duckpattern[i];
        }
        setPatternAndLength(defaultpattern, 10);
    }
    setPosition(position); 
}

void Duck::showExcitement() const{
    std::cout << "Duck shouts quack." << std::endl;
}
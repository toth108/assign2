#ifndef ClassicMode_H
#define ClassicMode_H
#include <iostream> 
#include "World.h"

using namespace std; 


class ClassicMode
{
    public: 
    //World w(int height, int width);
    ClassicMode(); // (World w)
    int classicNeighbors(int r, int c, int height, int width);
    ~ClassicMode();
};

#endif 

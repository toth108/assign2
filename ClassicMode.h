#ifndef ClassicMode_H
#define ClassicMode_H
#include <iostream> 

using namespace std; 


class ClassicMode
{
    public: 
    World w(height, width);
    ClassicMode(World w);
    int classicNeighbors(int r, int c, int height, int width);
    ~ClassicMode();
};

#endif 

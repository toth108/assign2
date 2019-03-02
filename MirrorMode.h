#ifndef MirrorMode_H
#define MirrorMode_H
#include <iostream> 
#include "World.h"

using namespace std; 


class MirrorMode
{
    public: 
    MirrorMode(); 
    int mirrorNeighbors(int r, int c, int height, int width);
    ~MirrorMode();
};

#endif 
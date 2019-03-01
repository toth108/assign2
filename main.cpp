#include "World.h"
#include "UserIO.h" 
#include "FileParser.h"
#include "ClassicMode.h"
#include <iostream> 

using namespace std; 

// initialize new class instances 
UserIO * user = new UserIO(); 
World * w = new World(height, width); 
ClassicMode * cM = new ClassicMode(w); 
FileParser * fp = new FileParser(user->filePath);

// build empty grid 
World::World(int height, int width)
{
    **grid = new bool**[height];
    for (unsigned int i = 0; i < width; i++)
    {
        *grid[i] = new bool*[c]; 
    }
}

int main (int argc, char** argv)
{
    user->Config();
    int boundMode = user->BoundMode();

    int height = fp->rowInt; 
    int width = fp->colInt; 

    
    // Classic Mode 
    if (boundMode == 1)
    {
        // iterate through w.grid for r and c 
        for (int r = 0; r < height; r++)
        {
            for (int c = 0; c < width; c++)
            {
                cM.classicNeighbors(r, c, height, width);
            }
        }
    }

    // Doughnut Mode 
    else if (boundMode == 2)
    {
        //dM.doughNeighbors
    }

    // Mirror Mode 
    else if (boundMode == 3)
    {
        //mM.mirrorNeighbors
    }
}
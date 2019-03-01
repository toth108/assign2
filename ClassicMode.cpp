#include "ClassicMode.h" 
#include "World.h"
#include <iostream> 

using namespace std; 


// default constructor 
ClassicMode::ClassicMode() // (World createdWorld)
{
    //World w(height, width) = createdWorld;
}

// check neighbors 
int ClassicMode::classicNeighbors(int r, int c, int height, int width) 
{
    int neighbors = 0; 
/*
    // inititalize instance of class 
    World * w = new World(height, width);
*/

    World w(height, width); 

    // top left corner 
    if (r == 0 && c == 0) 
    {
        if (w.grid[r + 1][c] == true) 
        {
            ++neighbors; 
        }
        else if (w.grid[r][c + 1] == true)
        {
            ++neighbors;
        }
        else if (w.grid[r + 1][c + 1] == true)
        {
            ++neighbors; 
        }
    }
    
    // top right corner 
    else if (w.grid[r == 0][c == width])
    {
        if (w.grid[r][c -1] == true)
        {
            ++neighbors;
        }
        else if (w.grid[r + 1][c - 1] == true)
        {
            ++neighbors;
        }
        else if (w.grid[r + 1][c] == true) 
        {
            ++neighbors;
        }
    }

    // bottom left corner 
    else if (w.grid[r == height][c == 0])
    {
        if (w.grid[r - 1][c] == true)
        {
            ++neighbors;
        }
        else if (w.grid[r - 1][c + 1] == true)
        {
            ++neighbors;
        }
        else if (w.grid[r][c + 1] == true)
        {
            ++neighbors;
        }
    }

    // bottom right corner 
    else if (w.grid[r == height][c == width])
    {
        if (w.grid[r][c - 1] == true)
        {
            ++neighbors;
        }
        else if (w.grid[r - 1][c - 1] == true)
        {
            ++neighbors;
        }
        else if (w.grid[r - 1][c] == true)
        {
            ++neighbors;
        }
    }

    // top edge 
    else if (w.grid[r == 0][c])
    {
        if (w.grid[r][c - 1] == true)
        {
            ++neighbors;
        }
        else if (w.grid[r + 1][c - 1] == true)
        {
            ++neighbors;
        }
        else if (w.grid[r + 1][c] == true)
        {
            ++neighbors;
        }
        else if (w.grid[r + 1][c + 1] == true)
        {
            ++neighbors;
        }
        else if (w.grid[r][c + 1] == true)
        {
            ++neighbors;
        }
    }

    // left edge 
    else if (w.grid[r][c == 0])
    {
        if (w.grid[r - 1][c] == true)
        {
            ++neighbors;
        }
        else if (w.grid[r -1][c + 1] == true)
        {
            ++neighbors;
        }
        else if (w.grid[r][c + 1] == true)
        {
            ++neighbors;
        }
        else if (w.grid[r + 1][c + 1] == true)
        {
            ++neighbors;
        }
        else if (w.grid[r + 1][c] == true)
        {
            ++neighbors;
        }
    }

    // bottom edge 
    else if (w.grid[r == height][c]) 
    {
        if (w.grid[r][c - 1] == true)
        {
            ++neighbors;
        }
        else if (w.grid[r - 1][c - 1] == true)
        {
            ++neighbors;
        }
        else if (w.grid[r - 1][c] == true)
        {
            ++neighbors;
        }
        else if (w.grid[r - 1][c + 1] == true)
        {
            ++neighbors;
        }
        else if (w.grid[r][c + 1] == true)
        {
            ++neighbors;
        }
    }

    // right edge 
    else if (w.grid[r][c == width])
    {
        if (w.grid[r - 1][c] == true)
        {
            ++neighbors;
        }
        else if (w.grid[r - 1][c - 1] == true)
        {
            ++neighbors;
        }
        else if (w.grid[r][c - 1] == true)
        {
            ++neighbors;
        }
        else if (w.grid[r + 1][c - 1] == true)
        {
            ++neighbors;
        }
        else if (w.grid[r + 1][c] == true)
        {
            ++neighbors;
        }
    }

    // set up new grid 
    if (neighbors <= 1)
    {
        w.tempGrid[r][c] = false; 
    }
    else if (neighbors = 2)
    {
        w.tempGrid[r][c]; // needs get function ??
    }
    else if (neighbors = 3)
    {
        w.tempGrid[r][c] == true; 
    }
    else if (neighbors >= 4)
    {
        w.tempGrid[r][c] = false; 
    }
}




// deconstructor 
ClassicMode::~ClassicMode()
{

}


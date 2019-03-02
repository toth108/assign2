#include "MirrorMode.h" 
#include "World.h"
#include <iostream> 

using namespace std; 


MirrorMode::MirrorMode()
{

}

int MirrorMode::mirrorNeighbors(int r, int c, int height, int width)
{
    // check neighbors 
    int neighbors = 0; 

    World w(r, c); 

    // top left corner 
    if (r == 0 && c == 0) 
    {
        if (w.grid[r == 0][c == 0] == true) // corner mirrors 3 
        {
            neighbors+=3; 
        }
        else if (w.grid[r + 1][c] == true) 
        {
            neighbors+=2; 
        }
        else if (w.grid[r][c + 1] == true)
        {
            neighbors+=2;
        }
        else if (w.grid[r + 1][c + 1] == true)
        {
            neighbors++; 
        }
    }
    
    // top right corner 
    else if (w.grid[r == 0][c == width])
    {
        if (w.grid[r == 0][c == width] == true) // corner mirrors 3 
        {
            neighbors+=3; 
        }
        else if (w.grid[r][c -1] == true)
        {
            neighbors+=2;
        }
        else if (w.grid[r + 1][c - 1] == true)
        {
            neighbors++;
        }
        else if (w.grid[r + 1][c] == true) 
        {
            neighbors+=2;
        } 
    }

    // bottom left corner 
    else if (w.grid[r == height][c == 0])
    {
        if (w.grid[r == height][c == 0] == true) // corner mirrors 3 
        {
            neighbors+=3; 
        }
        else if (w.grid[r - 1][c] == true)
        {
            neighbors+=2;
        }
        else if (w.grid[r - 1][c + 1] == true)
        {
            neighbors++;
        }
        else if (w.grid[r][c + 1] == true)
        {
            neighbors+=2;
        }
    }

    // bottom right corner 
    else if (w.grid[r == height][c == width])
    {
        if (w.grid[r == height][c == width] == true) // corner mirrors 3 
        {
            neighbors+=3;
        }
        else if (w.grid[r][c - 1] == true)
        {
            neighbors+=2;
        }
        else if (w.grid[r - 1][c - 1] == true)
        {
            neighbors++;
        }
        else if (w.grid[r - 1][c] == true)
        {
            neighbors+=2;
        }
    }

    // top edge 
    else if (w.grid[r == 0][c])
    {
        if (w.grid[r == 0][c] == true)
        {
            neighbors+=2; 
        }
        else if (w.grid[r][c - 1] == true)
        {
            neighbors+=2;
        }
        else if (w.grid[r + 1][c - 1] == true)
        {
            neighbors++;
        }
        else if (w.grid[r + 1][c] == true)
        {
            neighbors++;
        }
        else if (w.grid[r + 1][c + 1] == true)
        {
            neighbors++;
        }
        else if (w.grid[r][c + 1] == true)
        {
            neighbors+=2;
        }
    }

    // left edge 
    else if (w.grid[r][c == 0])
    {
        if (w.grid[r][c == 0] == true)
        {
            neighbors+=2;
        }
        else if (w.grid[r - 1][c] == true)
        {
            neighbors+=2;
        }
        else if (w.grid[r -1][c + 1] == true)
        {
            neighbors++;
        }
        else if (w.grid[r][c + 1] == true)
        {
            neighbors++;
        }
        else if (w.grid[r + 1][c + 1] == true)
        {
            neighbors++;
        }
        else if (w.grid[r + 1][c] == true)
        {
            neighbors+=2;
        }
    }

    // bottom edge 
    else if (w.grid[r == height][c]) 
    {
        if (w.grid[r == height][c] == true)
        {
            neighbors+=2; 
        }
        else if (w.grid[r][c - 1] == true)
        {
            neighbors+=2;
        }
        else if (w.grid[r - 1][c - 1] == true)
        {
            neighbors++;
        }
        else if (w.grid[r - 1][c] == true)
        {
            neighbors++;
        }
        else if (w.grid[r - 1][c + 1] == true)
        {
            neighbors++;
        }
        else if (w.grid[r][c + 1] == true)
        {
            neighbors+=2;
        }
    }

    // right edge 
    else if (w.grid[r][c == width])
    {
        if (w.grid[r][c == width] == true)
        {
            neighbors+=2; 
        }
        else if (w.grid[r - 1][c] == true)
        {
            neighbors++;
        }
        else if (w.grid[r - 1][c - 1] == true)
        {
            neighbors++;
        }
        else if (w.grid[r][c - 1] == true)
        {
            neighbors++;
        }
        else if (w.grid[r + 1][c - 1] == true)
        {
            neighbors++;
        }
        else if (w.grid[r + 1][c] == true)
        {
            neighbors++;
        }
    }

    // add to new grid 
    if (neighbors <= 1)
    {
        w.tempGrid[r][c] = false; 
    }
    else if (neighbors = 2)
    {
        w.tempGrid[r][c] = w.grid[r][c]; // needs get function ??
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

    
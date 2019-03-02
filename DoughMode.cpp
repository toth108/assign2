#include "DoughMode.h" 
#include "World.h"
#include <iostream> 

using namespace std; 


DoughMode::DoughMode()
{

}

int DoughMode::doughNeighbors(int r, int c, int height, int width)
{
    // check neighbors 
    int neighbors = 0; 

    World w(r, c); 
    
    // top left corner 
    if (w.grid[r == 0][c == 0]) 
    {
        if (w.grid[r + 1][c] = true)
        {
            neighbors++; 
        }
        else if (w.grid[r][c + 1] = true)
        {
            neighbors++;
        }
        else if (w.grid[r + 1][c + 1] = true)
        {
            neighbors++; 
        }
        else if (w.grid[r == height][c == width] == true) // bottom right corner 
        {
            neighbors++; 
        }
        else if (w.grid[r == height][c == 0] == true) // bottom left corner 
        {
            neighbors++; 
        }
        else if (w.grid[r == 0][c == width] == true) // top right corner 
        {
            neighbors++;   
        }
        else if (w.grid[r == height][c + 1] == true) // diagonal up right 
        {
            neighbors++;   
        }
        else if (w.grid[r + 1][c == width] == true) // diagonal down left
        {
            neighbors++;   
        }
    }

    // top right corner 
    else if (w.grid[r == 0][c == width])
    {
        if (w.grid[r][c - 1] == true)
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
        else if (w.grid[r == height][c == width] == true) // bottom right corner 
        {
            neighbors++; 
        }
        else if (w.grid[r == height][c == 0] == true) // bottom left corner 
        {
            neighbors++; 
        } 
        else if (w.grid[r == 0][c == 0] == true) // top left corner
        {
            neighbors++; 
        }
        else if (w.grid[r == height][c == (width - 1)] == true) // diagonal up left 
        {
            neighbors++; 
        }  
        else if (w.grid[r + 1][c == 0] == true) // diagonal down right 
        {
            neighbors++; 
        } 
    } 

    // bottom left corner 
    else if (w.grid[r == height][c == 0])
    {
        if (w.grid[r - 1][c] == true)
        {
            neighbors++;
        }
        else if (w.grid[r - 1][c + 1] == true)
        {
            neighbors++;
        }
        else if (w.grid[r][c + 1] == true)
        {
            neighbors++;
        }
        else if (w.grid[r == height][c == width] == true) // bottom right corner 
        {
            neighbors++; 
        }
        else if (w.grid[r == 0][c == width]) // top right corner 
        {
            neighbors++; 
        }
        else if (w.grid[r == 0][c == 0] == true) // top left corner
        {
            neighbors++; 
        }
        else if (w.grid[r == 0][c + 1] == true) // diagonal down right 
        {
            neighbors++; 
        }  
        else if (w.grid[r == (height - 1)][c == width] == true) // diagonal up left 
        {
            neighbors++; 
        } 
    }

    // bottom right corner 
    else if (w.grid[r == height][c == width])
    {
        if (w.grid[r][c - 1] == true)
        {
            neighbors++;
        }
        else if (w.grid[r - 1][c - 1] == true)
        {
            neighbors++;
        }
        else if (w.grid[r - 1][c] == true)
        {
            neighbors++;
        }
        else if (w.grid[r == 0][c == width]) // top right corner 
        {
            neighbors++; 
        }
        else if (w.grid[r == 0][c == 0] == true) // top left corner
        {
            neighbors++; 
        }
        else if (w.grid[r == height][c == 0] == true) // bottom left corner 
        {
            neighbors++; 
        } 
        else if (w.grid[r == (height - 1)][c == 0] == true) // diagonal up right 
        {
            neighbors++; 
        } 
        else if (w.grid[r == 0][c == (width - 1)] == true) // diagonal down left 
        {
            neighbors++; 
        } 
    }

    // top edge 
    else if (w.grid[r == 0][c])
    {
        if (w.grid[r][c - 1] == true)
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
        else if (w.grid[r + 1][c + 1] == true)
        {
            neighbors++;
        }
        else if (w.grid[r][c + 1] == true)
        {
            neighbors++;
        }
        else if (w.grid[r == height][c - 1] == true) // up left 
        {
            neighbors++;
        }
        else if (w.grid[r == height][c] == true) // up straight
        {
            neighbors++;
        }
        else if (w.grid[r == height][c + 1] == true) // up left 
        {
            neighbors++;
        }
    }

    // left edge 
    else if (w.grid[r][c == 0])
    {
        if (w.grid[r - 1][c] == true)
        {
            neighbors++;
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
            neighbors++;
        }
        else if (w.grid[r][c == width] == true) // left straight 
        {
            neighbors++;
        }
        else if (w.grid[r - 1][c == width] == true) // left up
        {
            neighbors++;
        }
        else if (w.grid[r + 1][c == width] == true) // left down 
        {
            neighbors++;
        }
    }

    // bottom edge 
    else if (w.grid[r == height][c]) 
    {
        if (w.grid[r][c - 1] == true)
        {
            neighbors++;
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
            neighbors++;
        }
        else if (w.grid[r == 0][c] == true) // down straight 
        {
            neighbors++;
        }
        else if (w.grid[r == 0][c + 1] == true) // down right
        {
            neighbors++;
        }
        else if (w.grid[r == 0][c + 1] == true) // down left 
        {
            neighbors++;
        }
    }

    // right edge 
    else if (w.grid[r][c == width])
    {
        if (w.grid[r - 1][c] == true)
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
        else if (w.grid[r][c == 0] == true) // right straight 
        {
            neighbors++;
        }
        else if (w.grid[r + 1][c == 0] == true) // right down 
        {
            neighbors++;
        }
        else if (w.grid[r - 1][c == 0] == true) // right up 
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

DoughMode::~DoughMode()
{

}
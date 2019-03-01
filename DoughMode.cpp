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
    if (r == 0 && c == 0) 
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
        // figure out diagnol spots 
    }
}
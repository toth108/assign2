#include "World.h"
#include <iostream> 

using namespace std; 


// build empty grid 
World::World(int height, int width)
{
    int c; 
    **grid = new bool**[height];
    for (unsigned int r = 0; r < width; r++)
    {
        *grid[r] = new bool*[c]; 
    }
}

// empty cells 
World::~World()
{

}

// make cell alive / full 
void World::addLife(int r, int c)
{
    grid[r][c] = true; 
}

// make cell dead / empty 
void World::killLife(int r, int c)
{
    grid[r][c] = false; 
}

void World::tempWorld(int r, int c)
{
    **tempGrid = new bool**[r];
    for (unsigned int i = 0; i < r; i++)
    {
        *tempGrid[i] = new bool*[c]; 
    }
}
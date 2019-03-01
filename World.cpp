#include "World.h"
#include "FileParser.h"
#include "UserIO.h" 
#include "ClassicMode.h"
#include <iostream> 

using namespace std; 

ClassicMode cM; 

// build empty grid 
World::World(int height, int width)
{
    **grid = new bool**[height];
    for (unsigned int i = 0; i < width; i++)
    {
        *grid[i] = new bool*[c]; 
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
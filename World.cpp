#include "World.h"
#include <iostream> 

using namespace std; 


// constructor 
World::World()
{
    return; 
}
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

void World::tempWorld(int height, int width)
{
    int c; 
    **tempGrid = new bool**[height];
    for (unsigned int r = 0; r < width; r++)
    {
        *tempGrid[r] = new bool*[c]; 
    }
}

void World::charWorld(int height, int width)
{
    /*int c; 
    **charGrid = new char**[height];
    for (unsigned int r = 0; r < width; r++) 
    {
        *charGrid[r] = new char*[c]; 
    }*/
}

void World::copyWorld(int height, int width)
{
    // iterate through w.grid for r and c 
    for (int r = 0; r < height; r++)
    {
        for (int c = 0; c < width; c++)
        {
            if (tempGrid[r][c] == true) 
            {
                grid[r][c] = true;
            }
            else 
            {
                grid[r][c] = false;
            }
        }
    }

    // empty tempGrid 
    for (int r = 0; r < height; r++)
    {
        //for (int c = 0; c < width; c++)
        //{
            delete[] tempGrid[r];
        //}
    }
}

void World::changeWorld(int height, int width) // transfers from bool to X and -
{
    /*// iterate through w.grid for r and c 
    for (int r = 0; r < height; r++)
    {
        for (int c = 0; c < width; c++)
        {
            if (tempGrid[r][c] == true) 
            {
                charGrid[r][c] = 'X';
            }
            else 
            {
                charGrid[r][c] = '-';
            }
        }
    }*/ 
}

void World::coutWorld(int height, int width)
{
    /*cout<<height<<endl; 
    cout<<width<<endl; 

    // iterate through w.grid for r and c 
        for (int r = 0; r < height; r++)
        {
            for (int c = 0; c < width; c++)
            {
                cout<<charGrid[r][c]; 
            }
            cout<<endl; 
        }*/
}
#ifndef World_H
#define World_H

using namespace std; 


class World 
{
    public:
    bool** grid; 
    bool** tempGrid;
    World(int r, int c);
    ~World();
    void addLife(int r, int c);
    void killLife(int r, int c); 
    void neighbors(int r, int c); 
    void tempWorld(int r, int c);
};

#endif 

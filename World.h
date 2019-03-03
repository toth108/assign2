#ifndef World_H
#define World_H

using namespace std; 


class World 
{
    public:
    bool** grid; 
    bool** tempGrid;
    char** charGrid; 
    World();
    World(int r, int c);
    ~World();
    void addLife(int r, int c);
    void killLife(int r, int c); 
    void neighbors(int r, int c); 
    void tempWorld(int r, int c);
    void copyWorld(int height, int width);
    void coutWorld(int height, int width);
    void changeWorld(int height, int width);
    void charWorld(int height, int width);
    int globalHeight; 
    int globalWidth; 
};

#endif 

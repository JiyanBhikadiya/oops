#ifndef GRIDITEM_HPP
#define GRIDITEM_HPP

#include <iostream>

using namespace std;

class GridItem
{
protected:
    int width,height;
    pair<int, int> position;
    static int count;
    /* data */
public:
    GridItem(int x, int y, int width, int height){
        this->position = make_pair(x,y);
        this->width = width;
        this->height = height;
        this->count++;
    };
    GridItem(){
        this->width = 0;
        this->height = 0;
        this->position = make_pair(0,0);
        this->count++;
    };
    void setCoordinates(int x, int y){
        this->position = make_pair(x,y);
    };
    std::pair<int,int> getCoordinates(){
        return std::pair<int, int>();
    };
    int getGridWidth(){
        return this->width;
    };
    int getGridHeight(){
        return this->height;
    };
    int getActiveGridItemCount(){
        return this->count;
    };
    virtual ~GridItem(){
        this->count--;
    };

    int GridItem::count = 0;
};

#endif
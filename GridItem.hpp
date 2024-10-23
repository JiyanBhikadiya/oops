#ifndef GRIDITEM_H
#define GRIDITEM_H

using namespace std;
#include <iostream>

class GridItem {
protected:
    pair<int, int> position;
    int width, height;

    static int activeCount;
public:
    GridItem(){
        activeCount++;
        this->position = make_pair(0,0);
        this->width = 0;
        this->height = 0;
    }
    GridItem(int x, int y, int width, int height){
        this->position = make_pair(x,y);
        this->width = width;
        this->height = height;
        activeCount++;
    }
    virtual ~GridItem() {
        activeCount--;
    }
    void setCoordinates(int x, int y) {
        this->position = make_pair(x,y);
    }
    std::pair<int, int> getCoordinates() {
        return position;
    }
    int getGridWidth() {
        return width;
    }
    int getGridHeight() {
        return height;
    }
    static int getActiveGridItemCount() {
        return activeCount;
    }


};
int GridItem::activeCount = 0;
#endif

// #ifndef GRIDITEM_HPP
// #define GRIDITEM_HPP

// #include <iostream>

// using namespace std;

// class GridItem
// {
// protected:
//     int width,height;
//     pair<int, int> position;
//     static int count;
//     /* data */
// public:
//     GridItem(int x, int y, int width, int height){
//         this->position = make_pair(x,y);
//         this->width = width;
//         this->height = height;
//         count++;
//     };
//     GridItem(){
//         this->width = 0;
//         this->height = 0;
//         this->position = make_pair(0,0);
//         count++;
//     };
//     void setCoordinates(int x, int y){
//         this->position = make_pair(x,y);
//     };
//     std::pair<int,int> getCoordinates(){
//         return std::pair<int, int>();
//     };
//     int getGridWidth(){
//         return this->width;
//     };
//     int getGridHeight(){
//         return this->height;
//     };
//     int getActiveGridItemCount(){
//         return count;
//     };
//     virtual ~GridItem(){
//         count--;
//     };

//     // int GridItem::count = 0;
// };

// #endif
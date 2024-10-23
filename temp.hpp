// class GridItem
// {
// protected:
//     int width,height;
//     pair<int, int> position;
//     static int count;
//     /* data */
// public:
//     GridItem(int x, int y, int width, int height);
//     GridItem();
//     void setCoordinates(int x, int y);
//     std::pair<int,int> getCoordinates();
//     int getGridWidth();
//     int getGridHeight();
//     int getActiveGridItemCount();
//     virtual ~GridItem();
// };

// GridItem::GridItem(int x, int y, int width, int height) {
//     this->position = make_pair(x,y);

//     this->width = width;
//     this->height = height;
//     this->count++;
// }

// GridItem::GridItem(/* args */) {
//     this->width = 0;
//     this->height = 0;
//     this->position = make_pair(0,0);
//     this->count++;
// }

// void GridItem::setCoordinates(int x, int y) {
//     this->position = make_pair(x,y);
// }

// std::pair<int, int> GridItem::getCoordinates() {
//   return std::pair<int, int>();
// }

// int GridItem::getGridWidth() {
//     return this->width;
// }

// int GridItem::getGridHeight() {
//     return this->height;
// }

// int GridItem::getActiveGridItemCount() {
//     return this->count;
// }

// GridItem::~GridItem()
// {
//     this->count--;
// }
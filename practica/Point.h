#ifndef POINT_H
#define POINT_H

class Point 
{
private:
    int x;
    int y;
public:
    Point(int _x, int _y);
    Point();
    Point(const Point& pt);
    ~Point();

    void setX(int _x);
    int getX();

    void setY(int _y);
    int getY();

    void print();

    bool operator==(const Point& right) const;
    bool operator!=(const Point& right) const;
};

#endif
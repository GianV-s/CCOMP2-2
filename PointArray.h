#include "Point.h"

class PointArray
{
private:
    Point* ptrP;
    size_t size;
public:
    PointArray();
    PointArray(const Point arr[], int size);
    PointArray(const PointArray& pt);

    ~PointArray();

    size_t getSize() const;

    void push_back(Point val);
    void insert(Point val, int pos);
    void remove(int pos);

    //const Array& operator=(const Array &);
    bool operator==(const PointArray& right) const;
    bool operator !=(const PointArray& right) const;

    int& operator[](int);
    int operator[](int) const;    
};

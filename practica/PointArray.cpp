#include "PointArray.h"

PointArray::PointArray()
    : size{0}, ptrP{new Point[0]} {
}

PointArray::PointArray(const Point arr[], int _size)
    : size{(int)_size}, ptrP{new Point[size]} {
    for(size_t i{0}; i < size; i++){
        ptrP[i] = arr[i];
    }
}

PointArray::PointArray(const PointArray &pt)
    : size{pt.size}, ptrP{new Point[size]} {
    for(size_t i{0}; i < size; i++){
        ptrP[i] = pt.ptrP[i];
    }
}

PointArray::~PointArray()
{
    delete[] ptrP;
}

size_t PointArray::getSize() const
{
    return size;
}

void PointArray::print()
{
    for(size_t i{0}; i < size; i++)
    {
        ptrP[i].print();
    }
}

void PointArray::push_back(Point val)
{
    Point* tmp = new Point[size + 1];
    for(size_t i{0}; i < size; i++){
        tmp[i] = ptrP[i];
    }
    size++;
    delete[] ptrP;
    ptrP = tmp;
    ptrP[size - 1] = val;
}

void PointArray::insert(Point val, int pos)
{
    Point* tmp = new Point[size + 1];
    for(size_t i{0}; i < pos; i++){
        tmp[i] = ptrP[i];
    }
    tmp[pos] = val;
    size++;
    for(size_t i{(size_t)pos}; i < size; i++){
        tmp[i+1] = ptrP[i];
    }
    delete[] ptrP;
    ptrP = tmp;
}

void PointArray::remove(int pos)
{
    Point *tmp = new Point[size-1];
    for(size_t i{0}; i < size; i++) {
        if(i >= pos) {
            tmp[i] = ptrP[i+1];    
        } else {
            tmp[i] = ptrP[i];
        }
    }
    size--;
    delete[] ptrP;
    ptrP = tmp;
}

bool PointArray::operator==(const PointArray &right) const
{
    if(size != right.size){return false;}
    for(size_t i{0}; i < size; i++){
        if(ptrP[i] != right.ptrP[i]){
            return false;
        }
    }
    return true;
}

bool PointArray::operator!=(const PointArray &right) const
{
    if(size != right.size){return true;}
    for(size_t i{0}; i < size; i++){
        if(ptrP[i] != right.ptrP[i]){return true;}
    }
    return false;
}

// = == != []



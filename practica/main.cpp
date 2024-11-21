#include "Point.h"
#include "PointArray.h"

int main(){
    Point p1(2,5);
    Point p2(p1);
    Point p3;

    Point arr[] = {p1, p2, p3};

    for(size_t i{0}; i < 3; i++){
        arr[i].print();
    }

    //prueba pointtsss

    PointArray arr1{arr, 3};

    arr1.print();  
}
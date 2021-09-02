#include "Polygons.hpp"
#include <iostream>
#include <cstdio>

int main() {
    // create a Pentagon, call its perimeter method
    // METHOD 1 using a pointer
    //Pentagon *myPentagon = new Pentagon(2.0);  
    //float peri1 = myPentagon->computePerimeter();

    // METHOD 2 direct instantiation
    Pentagon myPentagon(2.0);
    float peri1 = myPentagon.computePerimeter();
    std::cout << "Perimeter of myPentagon = " << peri1 << std::endl;
    
    // create an Hexagon, call its perimeter method
    Hexagon *myHexagon = new Hexagon(2.0);
    float peri = myHexagon->computePerimeter();
    std::cout << "Perimeter of myHexagon = " << peri << std::endl;
    
    // create an Hexagon, call its parent's perimeter method

    // METHOD 1
    //Polygon *poly = new Hexagon(2.0);
    //float peri3 = poly->computePerimeter();

    // METHOD 2
    Hexagon myHexagon2(2.0);
    Polygon &poly = myHexagon2;
    float peri3 = poly.computePerimeter();
    std::cout << "Perimeter of my 2nd Hexagon via Polygon's perimeter method = " << peri3 << std::endl;
    // printf doesn't work correctly
    //printf("Perimeter of myHexagon2 = %d\n", peri3);

    // retry with virtual methods

    
}

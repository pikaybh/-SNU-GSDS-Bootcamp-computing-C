#include <stdio.h>

typedef struct Point {
    float x, y;
} Point;

typedef struct Rectangle {
    Point a, b;
} Rectangle;


float width(Rectangle rect) {
    return rect.b.x - rect.a.x;
}

float height(Rectangle rect) {
    return rect.a.y - rect.b.y;
}

float area(Rectangle rect) {
    return width(rect) * height(rect);
}

void midpoint(Rectangle rect) {
    float midX = rect.a.x + width(rect) / 2;
    float midY = rect.b.y + height(rect) / 2;
    printf("Midpoint is at (%f, %f)\n", midX, midY);
}

int main(void) {
    Point a = {1, 5}; 
    /**
     * @brief It assigns in order
     * Syntax above means same as this:
     * a.x = 1;
     * a.y = 5;
     */
    Point b = {6, 1};
    Rectangle rect = {a, b};
    
    printf("width is %f\n", width(rect));
    printf("height is %f\n", height(rect));
    printf("area is %f\n", area(rect));

    midpoint(rect);

    return 0;
}
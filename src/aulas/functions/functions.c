#include <stdio.h>

#define PI 3.14159265359

typedef struct {
    float radius;
    float area;
    float perimeter;
} Circle;

void areaCircle(Circle *c){
    c->area = PI * (c->radius * c->radius);    
}

void perimeterCircle(Circle *c){
    c->perimeter = 2 * PI * c->radius;
}

void linha(){
    printf("\n============================");
}

int main(){
    Circle c;
    c.radius = 50;
    areaCircle(&c);
    perimeterCircle(&c);
    
    printf("\nHello World!");
    
    linha();
    
    printf("\nArea do Circulo: %.2f", c.area);
    printf("\nPerimetro: %.2f", c.perimeter);
    
    linha();
    return 0;
}

#include <stdio.h>

int main(){
    //area of a circle
    float radius;
    printf("Enter Radius:");
    scanf("%f", &radius);

    float equal = 3.14 * radius * radius;
    printf("Area of a Circle %f", equal);

    return 0;
}

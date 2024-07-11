#include <stdio.h>

int main() {
    float angle1, angle2, angle3;

    // Get the two angles from user
    printf("Enter the first angle: ");
    scanf("%f", &angle1);
    printf("Enter the second angle: ");
    scanf("%f", &angle2);

    // Calculate the third angle
    angle3 = 180 - (angle1 + angle2);

    // Print the third angle
    printf("The third angle is: %.2f\n", angle3);

    return 0;
}
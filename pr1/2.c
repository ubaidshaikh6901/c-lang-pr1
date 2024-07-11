#include <stdio.h>

int main() {
    int baseSalary, hra, da, ta, grossSalary;

    // Get the base salary from user
    printf("Enter the base salary: ");
    scanf("%d", &baseSalary);

    // Get the HRA, DA, and TA percentages from user
    printf("Enter the HRA percentage: ");
    scanf("%d", &hra);
    printf("Enter the DA percentage: ");
    scanf("%d", &da);
    printf("Enter the TA percentage: ");
    scanf("%d", &ta);

    // Calculate the gross salary
    grossSalary = baseSalary + hra + da + ta ;
    // Print the gross salary
    printf("The gross salary is: %d\n", grossSalary);

    return 0;
}
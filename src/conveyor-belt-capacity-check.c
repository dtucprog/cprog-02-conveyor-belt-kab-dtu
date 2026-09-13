#include <stdio.h>

int MOTOR_CAPACITY = 12;

int main() {
    int motorCount, totalPackageWeight, totalCapacity;

    scanf("%d", &motorCount);
    scanf("%d", &totalPackageWeight);
    
    printf("How many motors are carrying the packages?\n");
    printf("%d\n", motorCount);
    printf("How many kg of packages do we expect?\n");
    printf("%d\n", totalPackageWeight);

    totalCapacity = motorCount * MOTOR_CAPACITY;

    if (totalCapacity < totalPackageWeight) {
        printf("No. The conveyor belt cannot carry the packages.");
    } else {
        printf("Yes! The conveyor belt can carry the packages.");
    }
}

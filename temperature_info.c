#include"temperature_info.h"
#include<stdio.h>

float averageTemperature(const float temperatures[], int size) {
    float sum = 0;
    for (int i = 0; i < size; i++) {
        sum += temperatures[i];
    }
    return sum / size;
}

void displayMenu() {
    printf("\n ------------------------------\n");
    printf("| Temperature Record of Cities |\n");
    printf(" ------------------------------\n");
    printf("1. Add New City\n");
    printf("2. View Temperature Records\n");
    printf("3. Save to File\n");
    printf("4. Search for a City\n");
    printf("5. Edit City Temperature Information\n");
    printf("6. Calculate Average Temperature of a City\n");
    printf("7. Exit Program\n");
    printf("Enter your choice (1-7): ");
}
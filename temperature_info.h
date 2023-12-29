#ifndef TEMPERATURE_INFO_H 
#define TEMPERATURE_INFO_H
#include<stdio.h>

typedef struct {
    int cityPostalCode;
    char name[100];
    float temperatures[12];
} City;

float averageTemperature(const float temperatures[], int size);
void displayMenu();

#endif // TEMPERATURE_INFO_H
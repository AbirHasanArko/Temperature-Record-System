#include"temperature_data.h"
#include<stdio.h>

int newCity(City *cities, int count) {
    if (count >= 100) {
        printf("City list is full.\n");
        return count;
    }
    printf("Enter City Postal Code: ");
    scanf("%d", &cities[count].cityPostalCode);
    printf("Enter City Name: ");
    scanf("%s", cities[count].name);
    printf("Enter Temperatures for 12 months: ");
    for (int i = 0; i < 12; i++) {
        scanf("%f", &cities[count].temperatures[i]);
    }
    return count + 1;
}

void showCities(City *cities, int count) {
    printf("City Records:\n");
    for (int i = 0; i < count; i++) {
        printf("PostalCode: %d, City Name: %s, Temperatures: ", cities[i].cityPostalCode, cities[i].name);
        for (int j = 0; j < 12; j++) {
            printf("%.2f ", cities[i].temperatures[j]);
        }
        printf("\n");
    }
}

int findCity(City *cities, int count, int cityPostalCode) {
    for (int i = 0; i < count; i++) {
        if (cities[i].cityPostalCode == cityPostalCode) {
            return i;
        }
    }
    return -1;
}

void editCity(City *cities, int cityIndex) {
    printf("Enter new City name: ");
    scanf("%s", cities[cityIndex].name);
    printf("Enter new temperatures for 12 months: ");
    for (int i = 0; i < 12; i++) {
        scanf("%f", &cities[cityIndex].temperatures[i]);
    }
    printf("City record updated.\n");
}
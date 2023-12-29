#include"temperature_info.h"
#include <stdlib.h>
#include <string.h>

#include"temperature_data.h"
#include"file_io.h"


int main() {
    City cities[100];
    int cityCount = 0;
    int choice, postCode, index;
    float average;

    while (1) {
        displayMenu();
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                cityCount = newCity(cities, cityCount);
                break;
            case 2:
                showCities(cities, cityCount);
                break;
            case 3:
                saveToFile(cities, cityCount);
                break;
            case 4:
                printf("Enter Postal Code to search: ");
                scanf("%d", &postCode);
                index = findCity(cities, cityCount, postCode);
                if (index != -1) {
                    printf("City found at index: %d\n", index);
                    printf("Name: %s", cities[index].name);
                } else {
                    printf("City not found.\n");
                }
                break;
            case 5:
                printf("Enter Postal Code to edit: ");
                scanf("%d", &postCode);
                index = findCity(cities, cityCount, postCode);
                if (index != -1) {
                    editCity(cities, index);
                } else {
                    printf("City not found.\n");
                }
                break;
            case 6:
                printf("Enter Postal Code to calculate average: ");
                scanf("%d", &postCode);
                index = findCity(cities, cityCount, postCode);
                if (index != -1) {
                    average = averageTemperature(cities[index].temperatures, 12);
                    printf("Average temperature: %.2f\n", average);
                } else {
                    printf("City not found.\n");
                }
                break;
            case 7:
                printf("Exiting program.\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}







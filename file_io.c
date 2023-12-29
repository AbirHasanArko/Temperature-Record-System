#include"temperature_info.h"
#include"file_io.h"
#include<stdio.h>

void saveToFile(const City *cities, int count) {
    FILE *file = fopen("temperature_record_file.txt", "w");
    if (file == NULL) {
        printf("Error opening file.\n");
        return;
    }
    for (int i = 0; i < count; i++) {
        fprintf(file, "%d %s ", cities[i].cityPostalCode, cities[i].name);
        for (int j = 0; j < 12; j++) {
            fprintf(file, "%.2f ", cities[i].temperatures[j]);
        }
        fprintf(file, "\n");
    }
    fclose(file);
    printf("Records saved to file.\n");
}

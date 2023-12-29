#ifndef TEMPERATURE_DATA_H
#define TEMPERATURE_DATA_H

#include"temperature_info.h"

int newCity(City *cities, int count);
void showCities(City *cities, int count);
int findCity(City *cities, int count, int cityPostalCode);
void editCity(City *cities, int cityIndex);


#endif // TEMPERATURE_DATA_H
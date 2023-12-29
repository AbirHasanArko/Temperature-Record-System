CC=gcc
CFLAGS=-c -Wall

all: TemperatureRecordSystem

TemperatureRecordSystem: main.o temperature_data.o temperature_info.o file_io.o
				$(CC) main.o temperature_data.o temperature_info.o file_io.o -o TemperatureRecordSystem
			
main.o: main.c
				$(CC) $(CFLAGS) main.c

temperature_data.o: temperature_data.c
				$(CC) $(CFLAGS) temperature_data.c

temperature_info.o: temperature_info.c
				$(CC) $(CFLAGS) temperature_info.c

file_io.o: file_io.c
				$(CC) $(CFLAGS) file_io.c

clean: 
				del *.o *.exe
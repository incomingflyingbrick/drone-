CC = g++

CFLAGS = -Wall -g -o

TARGET = myprog

$(TARGET):  prog.cpp AP_DRONE.h AP_DRONE.o
	$(CC) $(CFLAGS) $(TARGET) prog.cpp AP_DRONE.cpp

AP_DRONE.o: AP_DRONE.cpp
	$(CC) -Wall -g -c  AP_DRONE.cpp

clean:
	rm $(TARGET) AP_DRONE.o

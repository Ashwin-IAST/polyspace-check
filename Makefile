CC = gcc
CFLAGS = -Iinclude
SRC = src/main.c src/speed_sensor.c src/throttle_control.c
TARGET = ecu_simulator

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET)

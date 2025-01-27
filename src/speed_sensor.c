#include <stdlib.h>
#include "../include/speed_sensor.h"

// Simulate speed sensor reading
float read_speed_sensor() {
    // Generate a random speed between 50 and 70 km/h
    return (50 + rand() % 21);
}

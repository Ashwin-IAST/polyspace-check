#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> // For sleep (simulate real-time behavior)
#include "../include/speed_sensor.h"
#include "../include/throttle_control.h"

int main() {
    float current_speed = 0.0;
    float target_speed = 60.0; // Target speed in km/h

    printf("Starting ECU Simulation...\n");

    while (1) {
        // Read current speed from speed sensor
        current_speed = read_speed_sensor();

        // Adjust throttle based on current speed and target speed
        adjust_throttle(current_speed, target_speed);

        // Simulate periodic updates (e.g., every 1 second)
        sleep(1);
    }

    return 0;
}

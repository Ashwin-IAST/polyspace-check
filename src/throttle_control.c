#include <stdio.h>
#include "../include/throttle_control.h"

// Simulate throttle adjustment logic
void adjust_throttle(float current_speed, float target_speed) {
    if (current_speed < target_speed) {
        printf("Current speed: %.2f km/h, below target. Increasing throttle.\n", current_speed);
    } else if (current_speed > target_speed) {
        printf("Current speed: %.2f km/h, above target. Decreasing throttle.\n", current_speed);
    } else {
        printf("Current speed: %.2f km/h, maintaining throttle.\n", current_speed);
    }
}

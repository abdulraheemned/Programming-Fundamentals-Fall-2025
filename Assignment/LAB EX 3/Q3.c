3) Average Speed of Car

#include <stdio.h>
int main() {
    float time, distance, speed;

    printf("Enter time (hours, between 1–5): ");
    scanf("%f", &time);
    if (time <= 0 || time > 5) {
        printf("Invalid time! Must be between 1 and 5 hours.\n");
        return 0;
    }

    printf("Enter distance (miles): ");
    scanf("%f", &distance);
    if (distance < 0) {
        printf("Invalid distance! Must not be negative.\n");
        return 0;
    }

    speed = distance / time;
    printf("Average speed: %.2f miles/hour\n", speed);
    return 0;
}

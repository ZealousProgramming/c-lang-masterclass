#include <stdio.h>

typedef enum {
	THRUST_NONE = 0,
	THRUST_LOW = 5,
	THRUST_MEDIUM = 9,
	THRUST_HIGH = 12,
	THRUST_MAX = 20,
} SpaceshipThrust;

int main(void) {
	printf("\n ----- Spaceship Thrust -----\n");
	
	SpaceshipThrust thrust_level = THRUST_NONE;
	printf("ready to go level: %d", thrust_level);
	
	thrust_level = THRUST_MAX;
	printf("take off: %d", thrust_level);
	
	thrust_level = THRUST_MEDIUM;
	printf("entering into the ionosphere: %d", thrust_level);
	
	thrust_level = THRUST_LOW;
	printf("traveling to deep space: %d", thrust_level);
	

	return 0;
}
#include <stdio.h>
#include <math.h>

#define GRAVITY 9.81

int main() {
  double initial_velocity, launch_angle;
  double x_position, y_position;
  double time;

  printf("Enter the initial velocity: ");
  scanf("%lf", &initial_velocity);

  printf("Enter the launch angle: ");
  scanf("%lf", &launch_angle);

  // Convert launch angle to radians
  launch_angle = launch_angle * M_PI / 180.0;

  // Initialize the projectile's position and time
  x_position = 0.0;
  y_position = 0.0;
  time = 0.0;

  // Simulate the projectile's motion
  while (y_position >= 0.0) {
    // Update the projectile's position and time
    x_position += initial_velocity * cos(launch_angle) * time;
    y_position += initial_velocity * sin(launch_angle) * time - 0.5 * GRAVITY * time * time;
    time += 0.01;
  }

  // Print the projectile's maximum height and range
  printf("Maximum height: %lf m\n", y_position);
  printf("Range: %lf m\n", x_position);

  return 0;
}


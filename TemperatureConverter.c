#include <ctype.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main() {
  char unit;
  float temp;

  printf("Enter temperature unit: (C) or (F)");
  scanf("%c", &unit);

  unit = toupper(unit);

  if (strcmp(&unit, "C") == 0) {
    printf("\nEnter temperature in Celsius:");
    scanf("%f", &temp);
    temp = (temp * 1.8) + 32;
    printf("\nTemperature in Fahrenheit: %.1f", temp);
  } else if (strcmp(&unit, "F") == 0) {
    printf("\nEnter temperature in Fahrenheit:");
    scanf("%f", &temp);
    temp = ((temp - 32) * 5) / 9;
    printf("\nTemperature in Celsius: %.1f", temp);
  } else {
    printf("\nPlease input a valid unit such as C or F");
  }

  // Used to separate debug message
  printf("\n");
  printf("\n");
  printf("\n");
  printf("\n");
  return 0;
}
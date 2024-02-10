#include <ctype.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void hello(char[], int); // Function Prototypes

int main() {
  char name[] = "Rhyn";
  int age = 24;

  hello(name, age);
  // Used to separate debug message
  printf("\n");
  printf("\n");
  printf("\n");
  printf("\n");
  return 0;
}

void hello(char name[], int age) {
  printf("\nHello %s", name);
  printf("\nYou are %i years old", age);
};
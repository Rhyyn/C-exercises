#include "StringManipulations.h"
#include <ctype.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Implements strlwr / strupr / strcat / strncat / strcpy / strncpy

int main() {
  char string1[] = "RHYN";
  char string2[] = "Gooooooooo";
  char string3[40];

  // stringToLowerCase(string1);
  // stringToUpperCase(string2);

  // concatStrings(string1, string2);
  // printf("\n%s", string1);

  // concatNcharInStrings(string1, string2, 2);

  stringCopyTo(string3, string2, 3);
  printf("\nline: 22 %s ", string3);

  // Used to separate debug message
  printf("\n");
  printf("\n");
  printf("\n");
  printf("\n");
  return 0;
}

// copy N number of char in source string to dest string
// this needs a loop to padd fill
void stringCopyTo(char *dest, char *source, size_t num) { // strncpy
  size_t destLength = strlen(dest);
  size_t i;
  for (i = 0; i < num; i++) {
    dest[i + destLength] = source[i];
  }
  dest[destLength + i] = '\0';
};

// copy N number of char in source string to dest string
void concatNcharInStrings(char *dest, char *source, int N) { // strncat
  size_t destLength = strlen(dest);
  size_t i;
  for (i = 0; i != N; i++) {
    dest[destLength + i] = source[i];
  }
  dest[destLength + i] = '\0';
};

// copy source string to dest string
void concatStrings(char *dest, char *source) { // strcat
  size_t destLength = strlen(dest);
  size_t i;
  for (i = 0; source[i] != '\0'; i++) {
    dest[destLength + i] = source[i];
  }
  dest[destLength + i] = '\0';
};

void stringToLowerCase(char *source) { // strlwr
  for (size_t i = 0; i < strlen(source); i++) {
    source[i] = tolower(source[i]);
  }
};

void stringToUpperCase(char *source) { // strupr
  for (size_t i = 0; i < strlen(source); i++) {
    source[i] = toupper(source[i]);
  }
};
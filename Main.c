#include <ctype.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printAndScan(float *num1, float *num2, bool singleNumber) {
  if (!singleNumber) {
    printf("\nPlease input Number 1: ");
    scanf("\n%f", num1);

    printf("\nPlease input Number 2: ");
    scanf("\n%f", num2);
  } else if (singleNumber) {
    printf("\nPlease input your Number : ");
    scanf("\n%f", num1);
  } else {
    printf("\nError inside printAndScan");
  }
};

int main() {
  char operator;
  float num1;
  float num2;
  bool singleNumber = 0;

  printf("\nHello, Welcome to Rhyn's calculator !");
  printf("\nWhat operation would you like to perform?\n");

  scanf("\n%c", &operator);

  if (strcmp(&operator, "+") == 0) {

    printAndScan(&num1, &num2, singleNumber);
    double result = num1 + num2;
    printf("\nResult : %.01f", result);
  } else if (strcmp(&operator, "-") == 0) {
    printAndScan(&num1, &num2, singleNumber);
    double result = num1 - num2;
    printf("\nResult : %.01f", result);
  } else if (strcmp(&operator, "*") == 0) {
    printAndScan(&num1, &num2, singleNumber);
    double result = num1 * num2;
    printf("\nResult : %.01f", result);
  } else if (strcmp(&operator, "/") == 0) {
    printAndScan(&num1, &num2, singleNumber);
    double result = num1 / num2;
    printf("\nResult : %.01f", result);
  } else if (strcmp(&operator, "^") == 0) { // sqr
    singleNumber = 1;
    printAndScan(&num1, &num2, singleNumber);
    double result = sqrt(num1);
    printf("\nResult : %f", result);
  }

  else {
    printf("\n%c is not a valid operator, valid operators includes : +, -, *",
           operator);
  }

  // Used to separate debug message
  printf("\n");
  printf("\n");
  printf("\n");
  printf("\n");
  return 0;
}
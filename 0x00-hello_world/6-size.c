#include<stdio.h>
int main() {
  char charType;
  int intType;
  long int longintType;
  long long int longlongintType;
  float floatType;
  printf("Size of char: %ld byte(s)\n", sizeof(charType));
  printf("Size of int: %ld byte(s)\n", sizeof(intType));
  printf("Size of long int: %ld byte(s)\n", sizeof(longintType));
  printf("Size of long long int: %ld byte(s)\n", sizeof(longlongintType));
  printf("size of float: %ld byte(s)\n", sizeof(floatType));  
  return 0;
}

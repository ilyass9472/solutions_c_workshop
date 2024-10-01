#include <stdio.h>

int main() {
  int size = 6;
  for (int i = size / 2; i < size; i += 2) {
    for (int j = 1; j < size-i; j += 2) {
      printf(" ");
    }
    for (int j = 1; j < i+1; j++) {
      printf("*");
    }
    for (int j = 1; j < size-i+1; j++) {
      printf(" ");
    }
    for (int j = 1; j < i+1; j++) {
      printf("*");
    }
    printf("\n");
  }
  for (int i = size; i > 0; i--) {
    for (int j = 0; j < size-i; j++) {
      printf(" ");
    }
    for (int j = 1; j < i*2; j++) {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}
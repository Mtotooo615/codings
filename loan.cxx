


#include <stdio.h>

int main() {
  int age;
  float income;

  
  printf("Enter your age: ");
  scanf("%d", &age);
  printf("Enter your annual income in shillings: ");
  scanf("%f", &income);

  
  if (age >= 21 && income >= 21000) {
  printf("Congratulations you qualify for a loan.");
  } else {
  printf("sorry you are not eligible for a loan");
  }

  return 0;
}
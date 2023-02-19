// Compound Interest Calculaiton
// Author - @nischit_ig (Instagram)
#include <stdio.h>
#include <math.h>

int main() {
  // Variables
  int principal, rate, time, compound_interest;
  // Instructions
  printf("Compound Interest Calculaiton \n");
  printf("Enter Principal Amount: ");
  scanf("%d", &principal);
  printf("Enter Rate of Interest: ");
  scanf("%d", &rate);
  printf("Enter Time Period: ");
  scanf("%d", &time);
  // Output
  compound_interest = principal * (pow((1 + rate / time), time));
  printf("Principal Amount = %d \n", principal);
  printf("Total Interest = %d \n", compound_interest);
  printf("Total Amount = %d", principal + compound_interest);
  return 0;
}

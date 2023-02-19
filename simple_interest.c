// Simple Interest Calculation
// Author - @nischit_ig (Instagram)
#include <stdio.h>

int
main() 
{
  // Variables
  int principal, rate, time, simple_interest;
  // Instructions
  printf ("Simple Interest Calculation \n");
  printf ("Enter Principal Amount: ");
  scanf ("%d", &principal);
  printf ("Enter Rate of Interest: ");
  scanf ("%d", &rate);
  printf ("Enter Time period: ");
  scanf ("%d", &time);
  // Output
  simple_interest = (principal * rate * time) / 100;
  printf ("Principal Amount: %d \n", principal);
  printf ("Total Interest : %d \n", simple_interest);
  printf ("Total Amount: %d \n", simple_interest + principal);
  return 0;
}

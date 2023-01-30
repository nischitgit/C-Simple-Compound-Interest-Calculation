// Simple Interest Calculation
#include <stdio.h>

int
main () {
  int principal, rate, time, simple_interest;
  printf ("Simple Interest Calculation \n");
  printf ("Enter Principal Amount: ");
  scanf ("%d", &principal);
  printf ("Enter Rate of Interest: ");
  scanf ("%d", &rate);
  printf ("Enter Time period: ");
  scanf ("%d", &time);
  simple_interest = (principal * rate * time) / 100;
  printf ("Principal Amount: %d \n", principal);
  printf ("Total Interest : %d \n", simple_interest);
  printf ("Total Amount: %d \n", simple_interest + principal);
  return 0;
}

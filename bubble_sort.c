#include <stdio.h>

// Bubble Sort

int main(void)
{
  // Creating an array
  int unsrtd_nmbrs[] = {7, 5, 2, 8, 6, 3, 4, 1};
  const int NUMBER = 8

  // Repeat n-1 times
  for (int i = 0; i < NUMBER - 1; i++)
  {
    int counter = 0;
    // For i from 0 to n-2
    for (int j = 0; j < NUMBER - 1; j++)
    {
      // If i'th and i+1'th elements out of order
      if (unsrtd_nmbrs[j] > unsrtd_nmbrs[j + 1])
      {
        // Swap them
        int temp = unsrtd_nmbrs[j];
        unsrtd_nmbrs[j] = unsrtd_nmbrs[j + 1];
        unsrtd_nmbrs[j + 1] = temp;
        counter++;
      }
    }

    // If no swaps
    if (counter == 0)
    {
      // Quit
      break;
    }
  }

  // Show the sorted array
  for (int i = 0; i < NUMBER; i++)
  {
    printf("%i ", unsrtd_nmbrs[i]);
  }
  printf("\n");
}

#include <stdio.h>

int main(void)
{

  int numberOfElements = 0;
  int targetNumber = 0;
  printf("Ordened numbers: \n");
  printf("Enter the number of elements in array: \n");
  scanf("%i", &numberOfElements);

  int numberList[numberOfElements];

  for (int i = 0; i < numberOfElements; i++)
  {
    printf("Enter the %i element of the array: ", i + 1);
    scanf("%i", &numberList[i]);
  }

  printf("Enter the target number to be found in array: \n");
  scanf("%i", &targetNumber);

  if (binarySearch(numberList, numberOfElements, targetNumber);)
  {
    printf("Number not found!\n");
  }
  else
  {
    printf("Number found!\n");
  }
  return 0;
}
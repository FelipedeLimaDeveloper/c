int binarySearch(int numberList[], int arrayLength, int targetNumber)
{
  int left = 0;
  int middle;
  int right = arrayLength - 1;

  while (left <= right)
  {
    middle = (left + right) / 2;

    if (targetNumber == numberList[middle])
    {
      return 0;
    }
    else if (targetNumber > numberList[middle])
    {
      left = middle + 1;
    }
    else if (targetNumber < numberList[middle])
    {
      right = middle - 1;
    }
  }
  return 1;
}
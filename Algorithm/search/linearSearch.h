int linearSearch(int numberList[], int arrayLength, int targetNumber)
{
  for(int i = 0; i < targetNumber; i++)
  {
    if(numberList[i] == targetNumber)
    {
      return 0;
    }
  }

  return 1;
}

#include <cs50.h>
#include <stdio.h>
#include <math.h>

int newBornPerYear(int startSize)
{
  return startSize / 3;
}

int newDeathPerYear(int endSize)
{
  return endSize / 4;
}

int main(void)
{
  // TODO: Prompt for start size
  int startSize, endSize, newBorn, newDeath, years;
  do
  {
    startSize = get_int("Start size: ");
  } while (startSize < 9);

  // TODO: Prompt for end size
  do
  {
    endSize = get_int("End size: ");
  } while (endSize < startSize);

  // TODO: Calculate number of years until we reach threshold

  years = 0;

  while (startSize < endSize)
  {
    newBorn = newBornPerYear(startSize);
    newDeath = newDeathPerYear(startSize);
    startSize = startSize + newBorn - newDeath;
    years++;
  }

  printf("Years: %i\n", years);
  // TODO: Print number of years
}

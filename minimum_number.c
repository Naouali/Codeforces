#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * sort_it - function to sort an array (bubble sort)
 * @array: it takes an array of intgers
 *@size: size of the array
 *Return: a sorted array (ascending order)
 */

int * sort_it(int *array, int size)
{

  int i, j;
  int tmp;
  int *z = malloc(sizeof(int) * size);

  for(i = 0; i <= size - 1; i++)
    {
      for(j = i + 1; j <= size; j++)
	{
	  if (array[i] > array[j])
	    {
	      tmp = array[i];
	      array[i] = array[j];
	      array[j] = tmp;
	      //i++;
	      // j++;
	    }
	  
	}
      z = array;
    }
  return z;
}


/**
 * main - function to detrmine the minimum iteration/moves between 
 * the elements of th array (their sum)
 * until we reach a certain interger 
 * @k: input - the number to reach
 *@n: size of the array
 *Return: the minimum number of moves to make
 */
int main(void)
{
  int k; //k is the integer that we are lookig for
  int n; //n size of the array
  int i;
  int *m;
  int sum = 0;
  printf("insert k element to look for\n");
  scanf("%d", &k); // input k
  printf("insert the size of the array\n");
  scanf("%d", &n);
  int a[n];
  printf("populate the array with %d element\n", n); 
  for(i = 0; i <= n; i++)
    {
      scanf("%d", &a[i]);
    }

  printf("our array is :\n");
  for(i = 0; i <= n; i++)
    printf("%d ", a[i]);

  printf("\n");
  printf("K is = %d\n", k);
  printf("n is equal to %d\n", n);
  m = malloc(sizeof(int) * n);
  m = sort_it(a, n); //sorted array
  printf("sorted array is :\n");
  for (i = 0; i <= n; i++)
    printf("%d ", m[i]);
  printf("\n");
  // to determine how many moves until we get the integer k
  //we sum the number from left to right
  //if this sum in equal of higher than k than we print i the iterator
  printf("minimum mouves until %d  are:\n" , k);
  for(i= 0; i < n; i++)
    {
      sum = sum + m[i];
      if (sum >= k)
	{
	  printf("%d\n", i);
	  break;
	}
     }
  return 0;
}

#include "search_algos.h"
/**
  * binary_search - search sorted list by halving array by size
  * @array: the array to search through
  * @size: the size of the array
  * @value: the value im looking for in array
  * Return: first index where value is located or -1
  */
int binary_search(int *array, size_t size, int value)
{
        long unsigned int left, mid, right;

        right = size - 1;
        left = 0;
        if (!array)
                return (-1);
        while (left <= right)
        {
                print_now(array, left, right);
                mid = (left + right) / 2;
                if (array[mid] < value)
                        left = mid + 1;
                else if (array[mid] > value)
                        right = mid - 1;
                else if (array[mid] == value)
                        return (mid);
                else
                        return (-1);
        }
        return (-1);
}
/**
  *
  */
void print_now(int *array, long unsigned int left, long unsigned int right)
{
        printf("Searching in array: ");
        for(; left <= right; left++)
        {
                if (left == right)
                        printf("%d\n", array[left]);
                else
                        printf("%d, ", array[left]);
        }
}

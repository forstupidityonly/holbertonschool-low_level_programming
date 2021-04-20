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
        int l = 0;
        int r = size;

        return (helper(array, l, r, value));
}

/**
  * helper - help binary_search
  * @array: the array
  * @l: the leftmost index
  * @r: the rightmost index
  * @value: the value
  * Return: index of value or -1
  */
int helper(int *array, int l, int r, int value)
{
        int mid;

        if (r - l == 0)
                return (-1);
        print_now(array, l, r);
        mid = (l + (r - l) / 2);
        mid -= 1;
        if (array[mid] == value)
                return (mid);
        if (array[mid] > value)
                return (helper(array, l, mid - 1, value));
        return (helper(array, mid + 1, r, value));
}
/**
  *
  */
void print_now(int *array, int l, int r)
{
        printf("Searching in array: ");
        while (l < (r - 1))
                printf("%d, ", array[l++]);
        printf("%d\n", array[l]);
}

#include <cs50.h>
#include <stdio.h>

#define ARRAY_LENGTH 11

int binary_search(int sorted_array[], int start_index, int end_index, int find_number);

int main(void)
{
    int ordered_list[ARRAY_LENGTH] = {0,2,4,6,8,10,12,14,17,19,30};

    int number_to_find = get_int("Number: ");    

    int index = binary_search(ordered_list, 0, ARRAY_LENGTH - 1, number_to_find);

    printf ("Found, index: %i\n", index);
}

int binary_search(int sorted_array[], int start_index, int end_index, int find_number)
{
    int mid = (start_index + end_index) / 2;

    // Define base-case / exit condition
    if (start_index > end_index)
    {
        return mid;
    }

    if (find_number == sorted_array[mid])
    {
        return mid;
    }

    if (find_number < sorted_array[mid])
    {
        return binary_search(sorted_array, start_index, mid - 1, find_number);
    }
    else if (find_number > sorted_array[mid])
    {
        return binary_search(sorted_array, mid + 1, end_index, find_number);
    }   
}
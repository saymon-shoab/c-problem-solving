#include <stdio.h>
#include <string.h>
#define max_character_length 256
#define char_count 2
 
// Take Input
void takeInput(char inp[], int *length)
{
    gets(inp);
    *length = strlen(inp);
    return;
}
 
// Initialize Frequency Array
void initialize_frequency_array(char (*inp)[char_count], char original_input[], int n)
{
    for (int i = 0; i < n; i++)
    {
        inp[i][0] = original_input[i];
        inp[i][1] = 0;
    }
    return;
}
 
// Count Unique Character Frequency
void count_unique_character_frequency(char (*original_char)[char_count], char (*count_frequency)[char_count], int *n)
{
    int k = 0, temp, count;
    for (int i = 0; i < *n; i++)
    {
        if (original_char[i][1])
            continue;
        count = 1;
        for (int j = i + 1; j < *n; j++)
        {
            if (original_char[i][0] == original_char[j][0])
            {
                original_char[j][1] = 1;
                count++;
            }
        }
        count_frequency[k][0] = original_char[i][0];
        count_frequency[k][1] = count;
        k++;
    }
 
    *n = k;
    return;
}
 
// Sort Only Unique Characters
void sort_frequency_string_alphabetically(char(*frequency_array), int n)
{
    char temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (frequency_array[i] > frequency_array[j])
            {
                temp = frequency_array[i];
                frequency_array[i] = frequency_array[j];
                frequency_array[j] = temp;
            }
        }
    }
    return;
}
 
// Print Output using Frequency Array
void print_using_frequency_table(char (*frequency_array)[char_count], int n, char *sorted_array, int sorted_array_length)
{
    for (int i = 0; i < sorted_array_length; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (frequency_array[j][0] == sorted_array[i])
            {
                for (int k = 0; k < frequency_array[j][1]; k++)
                {
                    printf("%c", frequency_array[j][0]);
                }
            }
        }
    }
    return;
}
 
int main()
{
    char character[max_character_length];
    int n = 0;
    takeInput(character, &n);
 
    char arr[max_character_length][char_count], brr[max_character_length][char_count];
    initialize_frequency_array(arr, character, n);
 
    // Unique elements and its frequency are stored in another array
    count_unique_character_frequency(arr, brr, &n);
 
    // Initialize Unique Character In an New array
    char sorted_alphabet_character[max_character_length];
    for (int i = 0; i < n; i++)
    {
        sorted_alphabet_character[i] = brr[i][0];
    }
    // Sort Unique Characters Only
    sort_frequency_string_alphabetically(sorted_alphabet_character, strlen(sorted_alphabet_character));
    // Sort and Print Characters using Frequency Array
    print_using_frequency_table(brr, n, sorted_alphabet_character, strlen(sorted_alphabet_character));
 
    return 0;
}

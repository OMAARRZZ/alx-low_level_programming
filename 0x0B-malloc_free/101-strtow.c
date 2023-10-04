#include <stdlib.h>
#include <string.h>
/**
 * count_words - Count the number of words in a string.
 * @str: The input string.
 * Return: The number of words in the string.
 */
static int count_words(char *str)
{
int count = 0;
int in_word = 0;
while (*str)
{
if (*str == ' ')
{
in_word = 0;
}   
else if (in_word == 0)
{
in_word = 1;
count++;
}
str++;
}
return count;
}
/**
 * strtow - Split a string into words.
 * @str: The input string.
 * Return: A pointer to an array of strings (words).
 *         The last element of the array is NULL.
 */
char **strtow(char *str)
{
int i;
if (str == NULL || *str == '\0')
{
return (NULL);
}
int num_words = count_words(str);
if (num_words == 0)
{
return (NULL);
}
char **words = (char **)malloc((num_words + 1) * sizeof(char *));
if (words == NULL)
{
return (NULL);
}
int word_index = 0;
char *token = strtok(str, " ");
while (token != NULL)
{
words[word_index] = strdup(token);
if (words[word_index] == NULL)
{
i = 0;
while (i < word_index)
{
free(words[i]);
free(words);
i++;
}
return (NULL);
}
word_index++;
token = strtok(NULL, " ");
}
words[word_index] = NULL;
return words;
}

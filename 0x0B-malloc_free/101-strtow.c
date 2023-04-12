#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

int count_words(char *str)
{
	int count = 0;
	int in_word = 0;

while (*str != '\0'){if (!is_space(*str)){if (!in_word){count++;in_word = 1;}}else{in_word = 0;}str++;}

return (count);
}

char **strtow(char *str)
{
if (str == NULL || *str == '\0'){return (NULL);}

int num_words = count_words(str);

char **words = malloc(sizeof(char *) * (num_words + 1));
if (words == NULL){return (NULL);}

int word_index = 0;
int in_word = 0;
char *start = NULL;

while (*str != '\0') {
        if (!is_space(*str)) {
            if (!in_word) {
                start = str;
                in_word = 1;
            }
        } else {
            if (in_word) {
                int word_len = str - start;char *word = malloc(word_len + 1);if (word == NULL){
                    // Free previously allocated memory
		    while (word_index > 0){word_index--;free(words[word_index]);}free(words);return (NULL);}strncpy(word, start, word_len);word[word_len] = '\0';words[word_index] = word;word_index++;in_word = 0;}}str++;}

    if (in_word) {
        // Last word in string
        int word_len = str - start;
        char *word = malloc(word_len + 1);
        if (word == NULL) {
            // Free previously allocated memory
            while (word_index > 0) {
                word_index--;
                free(words[word_index]);
            }
            free(words);
            return NULL;
        }
        strncpy(word, start, word_len);
        word[word_len] = '\0';
        words[word_index] = word;
        word_index++;}

	words[word_index] = NULL;
	return words;
}

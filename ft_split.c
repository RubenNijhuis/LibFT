#include "./libft.h"
#include <stdio.h>
/*
	amount words
	length of each word

	we get the string
	split it up in words 
	make pointer for each word
	put each poiter in one array
	return array
*/
static unsigned int getWordLength(char const *s, char c)
{
    unsigned int    i;

    i = 0;
    while (*s != c && *s != 0)
    {
      s++;
      i++;
    }
    return (i);
}

static unsigned int getAmountOfWords(char const *s, char c)
{
    unsigned int    amountWords;
    unsigned int    newWord;
    unsigned int    i;

    amountWords = 0;
    newWord = 0;
    i = 0;
    while(*s != 0)
    {
        if (newWord == 0 && *s != c)
        {
            amountWords++;
            newWord = !newWord;
        }
        if (*s == c)
            newWord = 0;
        i++;
        s++;
    }
    return (amountWords);
}

static void addWordsToString(const char *s, char c, char** string)
{
    unsigned int    i;
    unsigned int    newWord;
    unsigned int    wordAmount;
    unsigned int    wordLength;

    i = 0;
    newWord = 0;
    wordAmount = 0;
    wordLength = 0;
    while (*s != 0)
    {
        if (newWord == 0 && *s != c)
        {
            newWord = !newWord;
            wordLength =  getWordLength(s, c);
            string[wordAmount] = malloc((wordLength + 1) * sizeof(char));
			ft_memcpy(string[wordAmount], s, wordLength);
			string[wordAmount][wordLength] = 0;
            wordAmount++;
            wordLength = 0;
        }
        if (*s == c)
            newWord = 0;
        i++;
        s++;
    }
}

char **ft_split(char const *s, char c)
{
    char            **string;
    unsigned int    amountOfWords;

    amountOfWords = getAmountOfWords(s, c);
    string = malloc((amountOfWords + 1) * sizeof(char *));
	if (!string)
		return (NULL);
	string[amountOfWords] = "\0";
	addWordsToString(s, c, string);
    return (string);
}
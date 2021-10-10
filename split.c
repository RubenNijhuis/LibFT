// #include <stdio.h>

// char **ft_split(char const *s, char c)
// {
// 	unsigned int	amountOfWords;
// 	char **splitWords;
// 	unsigned int *wordPos;

// 	amountOfWords = countWords(s, c, wordPos);
// 	splitWords = malloc((amountOfWords + 1) * sizeof(char*));
// 	splitWords = makeWordPointers(s, c, wordPos, amountOfWords);
// 	wordpos = malloc(amountOfWords * sizeof(unsigned int));
// 	return (splitWords);
// }

// static unsigned int countWords(char const *s, char c, int *wordPos)
// {
// 	unsigned int	amountWords;
// 	unsigned int	newWord;
// 	unsigned int	i;

// 	amountWords = 0;
// 	newWord = 0;
// 	i = 0;
// 	while(*s != 0)
// 	{
// 		if (newWord == 0 && *s != c)
// 		{
// 			wordPos[amountWords] = i;
// 			amountWords++;
// 			newWord = !newWord;
// 		}
// 		if (*s == c)
// 			newWord = 0;
// 		i++;
// 		s++;
// 	}
// 	return (amountWords);
// }

// static unsigned int getWordLength(char const *s, char c)
// {
// 	unsigned int	i;

// 	while (s[i] != c)
// 		i++;
// 	return (i);
// }

// static char **makeWordPointers(char *s, char c, int *wordPos, int amountOfWords)
// {
// 	unsigned int	wordsPlaced;
// 	unsigned int	offset;
// 	char**			pointer;

// 	offset = 0;
// 	wordsPlaced = 0;
// 	while (amountOfWords > 0)
// 	{
// 		pointer[wordsPlaced] = ft_substr(s, wordPos[wordsPlaced], getWordLength(s[wordPos[wordsPlaced]], c));
// 		amountOfWords--;
// 	}
// }

// int main()
// {
//   char *string = "Hello.Hello";
//   char sep = '.';
//   char **newarray = ft_split(string, sep);
//   return (0); 
// }
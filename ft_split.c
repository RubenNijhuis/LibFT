#include "libft.h"

static void	free_everything(char **string, unsigned int word_amount)
{
	while (word_amount)
	{
		--word_amount;
		free(string[word_amount]);
	}
	free(*string);
	*string = NULL;
}

static unsigned int	get_word_length(char const *s, char c)
{
	unsigned int	i;

	i = 0;
	while (*s != c && *s != 0)
	{
		s++;
		i++;
	}
	return (i);
}

static unsigned int	get_amount_of_words(char const *s, char c)
{
	unsigned int	amount_words;
	unsigned int	new_word;
	unsigned int	i;

	amount_words = 0;
	new_word = 0;
	i = 0;
	while (*s != 0)
	{
		if (new_word == 0 && *s != c)
		{
			amount_words++;
			new_word = !new_word;
		}
		if (*s == c)
			new_word = 0;
		i++;
		s++;
	}
	return (amount_words);
}

static void	add_words_to_string(const char *s, char c, char **string)
{
	unsigned int	new_word;
	unsigned int	word_amount;
	unsigned int	word_length;

	new_word = 0;
	word_amount = 0;
	while (*s != 0)
	{
		if (new_word == 0 && *s != c)
		{
			new_word = !new_word;
			word_length = get_word_length(s, c);
            string[word_amount] = malloc((word_length + 1) * sizeof(char));
            if (string[word_amount] == NULL)
            {
				free_everything(string, word_amount);
				return ;
			}
            ft_strlcpy(string[word_amount], s, word_length + 1);
            word_amount++;
            word_length = 0;
		}
		if (*s == c)
			new_word = 0;
		s++;
	}
}

char	**ft_split(char const *s, char c)
{
	char			**string;
	unsigned int	amount_of_words;

	if (s == NULL)
		return (NULL);
	amount_of_words = get_amount_of_words(s, c);
	string = malloc((amount_of_words + 1) * sizeof(char *));
	if (string == NULL)
		return (NULL);
	string[amount_of_words] = NULL;
	add_words_to_string(s, c, string);
	return (string);
}

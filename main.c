#include <stdio.h>
#include "./libft.h"

int test_alpha()
{
	char case1 = 'a';
	char case2 = '0';
	char case3 = '9';
	char case4 = 'x';

	if (!ft_isalpha(case1)) // Returns true
		return (0);
	else if (ft_isalpha(case2)) // Returns false
		return (0);
	else if (ft_isalpha(case3)) // Returns false
		return (0);
	else if (!ft_isalpha(case4)) // Returns true
		return (0);

	return (1);
}

int test_ascii()
{
	int case1 = 10;
	int case2 = 300;
	char case3 = '<';
	char case4 = 'z';

	if (!ft_isascii(case1)) // Returns true
		return (0);
	else if (ft_isascii(case2)) // Returns false
		return (0);
	else if (!ft_isascii(case3)) // Returns true
		return (0);
	else if (!ft_isascii(case4)) // Returns true
		return (0);

	return (1);
}

int test_digit()
{
	int case1 = '1';
	int case2 = '9';
	char case3 = '<';
	char case4 = 'z';

	if (!ft_isdigit(case1)) // Returns true
		return (0);
	else if (!ft_isdigit(case2)) // Returns true
		return (0);
	else if (ft_isdigit(case3)) // Returns false
		return (0);
	else if (ft_isdigit(case4)) // Returns false
		return (0);

	return (1);
}

int test_strlen()
{
	char *case1 = "This is 26 characters long"; // 26 chars
	char *case2 = "Hello World"; // 11 chars

	if (ft_strlen(case1) != 26) // Returns false
		return (0);
	else if (ft_strlen(case2) != 11) // Returns false
		return (0);

	return (1);
}

int test_putendln()
{
	char *case1 = "This is string has a newLine"; // 26 chars + 1nl

	ft_putendl_fd(case1, 1);
	return (1);
}

int	main(void)
{
	unsigned int total = 34;
	unsigned int respect = 0;

	printf("%s   -  isAlpha \n", test_alpha()  ? "✅":"❗️");
	respect++;

	printf("%s   -  isAscii \n", test_ascii()  ? "✅":"❗️");
	respect++;

	printf("%s   -  isDigit \n", test_digit()  ? "✅":"❗️");
	respect++;

	printf("%s   -  strlen \n",  test_strlen() ? "✅":"❗️");
	respect++;

	printf("\n");
	printf("%s   -  putendln \n",  test_putendln() ? "✅":"❗️");
	respect++;

	printf("\n");
	printf("Test:  %i respect, %i failed, %i total\n", respect, (total - respect), total);
	return (0);
}

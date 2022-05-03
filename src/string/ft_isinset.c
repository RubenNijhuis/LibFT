/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isinset.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rubennijhuis <rubennijhuis@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/03 22:53:15 by rubennijhui   #+#    #+#                 */
/*   Updated: 2022/05/03 22:58:11 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief 
 * Checks if a char is in a set of chars 
 * and returns true of false based on an int
 * 
 * @param c 
 * @param set 
 * @return int 
 */
int	ft_isinset(char const *set, char c)
{
	unsigned int	i;

	i = 0;
	while (set[i] != 0)
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}
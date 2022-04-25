/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   conversion.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rubennijhuis <rubennijhuis@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/25 22:42:56 by rubennijhui   #+#    #+#                 */
/*   Updated: 2022/04/25 22:51:04 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// Lib to be tested
#include "libft.h"

// Functions to compare original to real version
#include <string.h>

// Testing lib
#include <criterion/criterion.h>

Test(ft_atoi, basic) {
	cr_expect(ft_atoi("100") == 100, "Expected '100' to be 100");
	cr_expect(ft_atoi("381932") == 381932, "Expected '381932' to be '381932'");
	cr_expect(ft_atoi("-100023") == -100023, "Expected '-100023' to be '-100023'");
	cr_expect(ft_atoi("-69696969") == -69696969, "Expected '-69696969' to be '-69696969'");
}

Test(ft_itoa, basic) {
	cr_expect(strcmp(ft_itoa(100), "100") == 0, "Expected '100'");
	cr_expect(strcmp(ft_itoa(-1231), "-1231") == 0, "Expected '-1231'");
	cr_expect(strcmp(ft_itoa(-1), "-1") == 0, "Expected '-1'");
	cr_expect(strcmp(ft_itoa(54857483), "54857483") == 0, "Expected '54857483'");
}

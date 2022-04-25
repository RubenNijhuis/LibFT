/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   strings.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rubennijhuis <rubennijhuis@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/25 22:42:55 by rubennijhui   #+#    #+#                 */
/*   Updated: 2022/04/25 22:54:52 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// Lib to be tested
#include "libft.h"

// Functions to compare original to real version
#include <string.h>

// Testing lib
#include <criterion/criterion.h>

Test(to_lower, basic) {
	cr_expect(ft_tolower('A') == 'a', "Expected 'A' to be 'a'");
	cr_expect(ft_tolower('Z') == 'z', "Expected 'Z' to be 'z'");
	cr_expect(ft_tolower('G') == 'g', "Expected 'G' to be 'g'");
	cr_expect(ft_tolower('L') == 'l', "Expected 'L' to be 'l'");

	// These should fail
	cr_expect(ft_tolower('b') == 'b', "Expected 'b' to still be 'b' (98)");
	cr_expect(ft_tolower(']') == ']', "Expected ']' to still be ']' (93)");
	cr_expect(ft_tolower('=') == '=', "Expected '=' to still be '=' (61)");
	cr_expect(ft_tolower('0') == '0', "Expected '0' to still be '0' (48)");
}

Test(to_upper, basic) {
	cr_expect(ft_toupper('a') == 'A', "Expected 'a' to be 'A'");
	cr_expect(ft_toupper('b') == 'B', "Expected 'b' to be 'B'");
	cr_expect(ft_toupper('p') == 'P', "Expected 'p' to be 'P'");
	cr_expect(ft_toupper('z') == 'Z', "Expected 'z' to be 'Z'");

	// These should fail
	cr_expect(ft_toupper('0') == '0', "Expected 'b' to still be '0' (48)");
	cr_expect(ft_toupper('"') == '"', "Expected ']' to still be '\"' (34)");
	cr_expect(ft_toupper('1') == '1', "Expected '=' to still be '1' (49)");
	cr_expect(ft_toupper('&') == '&', "Expected '0' to still be '&' (38)");
}

Test(ft_split, basic)
{
	char *test_string = "This is a string";
	char **split_string = ft_split(test_string, ' ');

	cr_expect(strcmp(split_string[0], "This") == 0, "Expected the first word to be to be 'This'");
	cr_expect(strcmp(split_string[3], "string") == 0, "Expected the last word to be to be 'string'");

	char *secondary_test_string = "This:string:is:split:based:on:colons";
	char **secondary_split_string = ft_split(secondary_test_string, ':');

	cr_expect(strcmp(secondary_split_string[1], "string") == 0, "Expected the second word to be to be 'string'");
	cr_expect(strcmp(secondary_split_string[5], "on") == 0, "Expected the sixth word to be to be 'on'");
}


Test(ft_strlen, basic) {
	cr_expect(ft_strlen("100") == 3, "Expected '100' to be a length of 3");
	cr_expect(ft_strlen("dhwuahdwaiojdiowajidjwiajdiojwahfufejaidfoawdpkaopfjnaueidijaopfgioewuqrwyaeruihfdbzncmpoaxjdmfnuaiailjwianodfbeaiuoirujnfaiuflisrjdmqainousfkgjhsrjiadnfeuabifkjwajdilwajfmidogzujfpa") == 182, "Expected a length of 182 chars");
	cr_expect(ft_strlen("") == 0, "Expected '' to be a length of 0");
	cr_expect(ft_strlen("Today is a great day") == 20, "Expected 'Today is a great day' to have a length of 21");
}

Test(ft_strlcpy, basic) {
	const char *src = "String to be copied";
	char *dst = calloc(strlen(src) + 1, sizeof(char));
	ft_strlcpy(dst, src, strlen(src) + 1);

	cr_expect(strcmp(src, dst) == 0, "Expected the string to be copied over");
}

Test(ft_strlcat, basic) {
	char *str = "This is a string that might be long";
	char buffer[17];

	ft_strlcat(buffer,str,17);
	cr_expect(strcmp(buffer, "This is a string") == 0, "Expected the string to be concatenated");
}

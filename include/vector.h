/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   vector.h                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rnijhuis <rnijhuis@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/09 09:46:16 by rnijhuis      #+#    #+#                 */
/*   Updated: 2022/04/24 18:23:43 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_H
# define VECTOR_H

typedef struct s_vec3
{
	int	values[3];
}t_vec3;

typedef struct s_vec2
{
	int	values[2];
}t_vec2;

typedef struct s_vec1
{
	int	values[1];
}t_vec1;

// Initialisation
t_vec3	*create_vec3(void);
t_vec2	*create_vec2(void);
t_vec1	*create_vec1(void);

// Value setting
void	set_vec3_values(long int1, long int2, long int3);
void	set_vec2_values(long int1, long int2);
void	set_vec1_values(long int1);

// Multiplication
t_vec3	multiply_vec3(t_vec3 *first_vec, t_vec3 *second_vec);
t_vec2	multiply_vec2(t_vec2 *first_vec, t_vec2 *second_vec);
t_vec1	multiply_vec1(t_vec1 *first_vec, t_vec1 *second_vec);

// Multiplication
t_vec3	multiply_vec3(t_vec3 *first_vec, t_vec3 *second_vec);
t_vec2	multiply_vec2(t_vec2 *first_vec, t_vec2 *second_vec);
t_vec1	multiply_vec1(t_vec1 *first_vec, t_vec1 *second_vec);

#endif

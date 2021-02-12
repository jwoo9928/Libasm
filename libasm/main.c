/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewoopark <jaewoopark@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 01:16:02 by jaewoopark        #+#    #+#             */
/*   Updated: 2021/02/13 01:16:09 by jaewoopark       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

int	main(void)
{
	char s[50];

	printf(BLUE"______TESTING <ft_strlen>______\n"RESET);
	printf(CYAN"[case 1] "RESET"ft_strlen = %zu\n", ft_strlen(""));
	printf(CYAN"[case 2] "RESET"ft_strlen = %zu\n", ft_strlen("daelee!"));
	printf(BLUE"______TESTING <ft_strcmp>______\n"RESET);
	printf(CYAN"[case 1] "RESET"ft_strcpy = %s\n", ft_strcpy(s, ""));
	printf(CYAN"[case 2] "RESET"ft_strcpy = %s\n", ft_strcpy(s, "daelee!"));
	printf(BLUE"______TESTING <ft_strcmp>______\n"RESET);
	printf(CYAN"[case 1] "RESET"ft_strcmp = %d\n", ft_strcmp("a", "a"));
	printf(CYAN"[case 2] "RESET"ft_strcmp = %d\n", ft_strcmp("a", "b"));
	printf(BLUE"______TESTING <ft_wrtie>______\n"RESET);
	printf(CYAN"[case 1] "RESET"ft_write = %zd\n", ft_write(1, "daelee!", 10));
	printf(CYAN"[case 2] "RESET"ft_write = %zd\n", ft_write(1, "daelee!", 3));
	printf(BLUE"______TESTING <ft_read>______\n"RESET);
	printf(CYAN"[case 1] "RESET"ft_read = %zd\n", ft_read(0, s, 20));
	printf(BLUE"______TESTING <ft_strdup>______\n"RESET);
	printf(CYAN"[case 1] "RESET"ft_strdup = %s\n", ft_strdup(""));
	printf(CYAN"[case 2] "RESET"ft_strdup = %s\n", ft_strdup("daelee!"));
	return (1);
}

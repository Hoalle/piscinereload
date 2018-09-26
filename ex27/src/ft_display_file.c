/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperrard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 11:41:34 by cperrard          #+#    #+#             */
/*   Updated: 2017/11/09 15:01:48 by cperrard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int			ft_display_file(char *str)
{
	int		tmp;
	char	str2;

	tmp = open(str, O_RDONLY);
	if (tmp == -1)
	{
		write(2, "open() failed\n", 14);
		return (1);
	}
	while (read(tmp, &str2, 1))
		write(1, &str2, 1);
	if (close(tmp) == -1)
	{
		write(2, "close() failed\n", 15);
		return (1);
	}
	return (0);
}

int			main(int ac, char **av)
{
	if (ac == 1)
		write(2, "File name missing.\n", 19);
	if (ac > 2)
		write(2, "Too many arguments.\n", 20);
	else if (ac == 2)
		ft_display_file(av[1]);
	return (0);
}

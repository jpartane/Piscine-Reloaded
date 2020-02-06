/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpartane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 16:01:33 by jpartane          #+#    #+#             */
/*   Updated: 2019/10/21 10:27:33 by jpartane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_display(char *filename)
{
	int		file;
	char	c;

	file = open(filename, O_RDONLY);
	if (file < 0)
		return ;
	while (read(file, &c, 1))
	{
		write(1, &c, 1);
	}
	close(file);
}

int		main(int argc, char *argv[])
{
	if (argc == 1)
		write(2, "File name missing.\n", 19);
	else if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	else
		ft_display(argv[1]);
	return (0);
}

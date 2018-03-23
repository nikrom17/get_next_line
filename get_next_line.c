/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fgets.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nroman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/31 10:56:14 by nroman            #+#    #+#             */
/*   Updated: 2018/03/22 18:07:06 by nroman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"


int		get_next_line(const int fd, char **line)
{
	static t_list	*begin;
	t_list			*current;

	// check if fd is in list
	current = find_fd_in_list(begin, fd);
	return (read_the_things(current, line));

			// continue reading from buffer until /n or EOF
	// add new fd to linked list
			// do the reading per buff_size
			// read buffer until /n or EOF
	// free element in list if at EOF 
}


int		read_the_things(t_list *current, char **line)
{
	int		b_read;
	int		i;
	int		j;

	i = 0;
	*line = (char *)malloc(sizeof(char) * 1024);
	i = 0;
	b_read = 1;
	while (b_read)
	{
		if (((t_line *)current->content)->buffer[i] == 0)
		{
			j = 0;
			b_read = read(((t_line *)current->content)->fd, ((t_line *)current->content)->buffer, BUFF_SIZE);
		}
		*line[i] = ((t_line *)current->content)->buffer[j++];
		if ( ((t_line *)current->content)->buffer[i] == '\n')
		{
			*line[i] = 0;
			return (1);
		}
		i++;
	}
	if (b_read < 0)
		return (-1);
	return (0);
}

t_list	*find_fd_in_list(t_list *begin, const int fd)
{
	t_list	*current;
	t_list	*list_new;
	t_line	*line_new;

	current = begin;
	while (current)
	{
		if ( ((t_line *)current->content)->fd  == fd)
			return (current);
		current = current->next;
	}
	if (!begin)
		begin = (t_list *)malloc(sizeof(current));
	line_new = init_t_line(fd);
	list_new = ft_lstnew((void const *)line_new, sizeof(line_new));
	ft_lstadd(&begin, list_new);
	return (list_new);
}

t_line	*init_t_line(int fd)
{
	t_line	*line_new;

	line_new = (t_line *)malloc(sizeof(line_new));
	if (!line_new)
		return (NULL);
	line_new->fd = fd;
	line_new->i = 0;
	line_new->buffer[BUFF_SIZE] =  0;
	return (line_new);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: temil-da <temil-da@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 16:29:08 by temil-da          #+#    #+#             */
/*   Updated: 2024/04/14 19:17:23 by temil-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	char			*content;
	struct s_list	*next;
}t_list;

int		ft_fetch_line(t_list **head, int fd);
char	*ft_strchr_gnl(const char *s, int c);
int		ft_create_node(t_list **head, char **buffer);
char	*ft_put_line(t_list *head);
int		ft_strlen_gnl(const char *s);
char	*ft_strcat_gnl(char *dest, const char *src);
char	*get_next_line(int fd);
int		clean_nodes(t_list **head, int x, int z);
void	free_nodes(t_list *head, t_list *last_node);
t_list	*ft_find_last_node_nl(t_list *node);
#endif

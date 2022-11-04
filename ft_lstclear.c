/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstclear.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <jboeve@student.codam.nl>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/04 10:12:00 by joppe         #+#    #+#                 */
/*   Updated: 2022/11/04 10:23:29 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list **head;
	t_list *tmp;

	head = lst;

	tmp = *lst;
	del = *lst;
	while (tmp)
	{
		printf("jup %s\n", (char *) tmp->content);
		free(tmp);
		tmp = tmp->next;		
	}
}

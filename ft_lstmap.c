/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstmap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <jboeve@student.codam.nl>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/04 12:08:46 by joppe         #+#    #+#                 */
/*   Updated: 2022/11/04 12:26:36 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *tmp;
	t_list *new_head;
	new_head = NULL;

	tmp = lst;
	while (tmp)
	{
		ft_lstadd_front(head)
		tmp = tmp->next;
	}
}

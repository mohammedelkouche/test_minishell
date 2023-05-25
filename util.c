/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 10:33:34 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/05/25 11:53:52 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <minishell.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

t_env	*ft_lstnew(char *env)
{
	t_env	*new_node;
	int		equal;

	new_node = (t_env *)malloc(sizeof(t_env));
	if (!new_node)
		return (NULL);
	equal = ft_strchr(env, '=');
	if (equal != -1)
	{
		new_node->key = ft_substr(env, 0, equal);
		new_node->value = ft_substr(env, equal + 1, ft_strlen(env) - equal);
	}
}

void	ft_lst_addback()
{
	
}
// t_philos	*ft_lstnew(int id, t_info *info)
// {
// 	t_philos	*new_node;

// 	new_node = (t_philos *)malloc(sizeof(t_philos));
// 	if (!new_node)
// 		return (NULL);
// 	new_node->id = id;
// 	new_node->args = info;
// 	new_node->next = NULL;
// 	return (new_node);
// }

// void	ft_lst_addback(t_philos **head, t_philos *new)
// {
// 	t_philos	*last;

// 	if (!head || !new)
// 		return ;
// 	else if (*head == 0)
// 		*head = new;
// 	else
// 	{
// 		last = ft_lstlast(*head);
// 		last->next = new;
// 	}
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 12:56:24 by mel-kouc          #+#    #+#             */
/*   Updated: 2023/05/25 11:52:43 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <minishell.h>
#include <stdio.h>
#include <unistd.h>

void	env_list(char **env)
{
	int		i;
	// int		equal;
	// t_env	tmp;

	i = 0;
	while (env[i])
	{
		
		i++;
	}
}

int	main(int argc, char **argv, char **envp)
{
	(void)argc;
	(void)argv;
	env_list(envp);
}

// int	main(void)
// {
// 	pid_t	pid;

// 	pid = getpid();
// 	printf("pid is: %d", pid);
// }
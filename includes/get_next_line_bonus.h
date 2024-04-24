/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maceccar <maceccar@student.42firenze.it>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 18:40:17 by maceccar          #+#    #+#             */
/*   Updated: 2024/04/24 22:35:03 by maceccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <corekit.h>    

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

//massimo numero di file che possono essere gestiti
# ifndef OPEN_MAX
#  define OPEN_MAX 2048
# endif

char	*get_next_line(int fd);

char	*ft_strchr(char *s, int c);

char	*ft_strjoin_free_s1(char *s1, char *s2);

size_t	ft_strlen(char *s);

char	*ft_get_line(char *left_str);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   interval_space.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhakbul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 19:01:04 by muhakbul          #+#    #+#             */
/*   Updated: 2024/10/20 19:14:08 by muhakbul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv) {

	int i;
    
    if (argc -1 != 1)
    
    i = 0;
    while(*argv[1])
    {
    	write(1, argv[1]++, 1);
    	if(*argv[1] != '\0')
    	write(1, "   ", 3);
    }
    write(1, "\n", 1);
    return(0);
}
       


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhakbul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 19:04:57 by muhakbul          #+#    #+#             */
/*   Updated: 2024/10/24 19:05:01 by muhakbul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


 #include <unistd.h>
 
  int     main(int argc, char *argv[])
  {
      int i;
      char letter;
 
      i = 0;
      if (argc == 2) 
      {
          while (argv[1][i]) 
          {
               letter = argv[1][i];
              if (argv[1][i] >= 'A' && argv[1][i] <= 'Z') 
                  letter += 32;
              if (argv[1][i] >= 'a' && argv[1][i] <= 'z') 
                  letter -= 32;
              write(1, &letter, 1); 
              i += 1; 
          }
      }
      write(1, "\n", 1);
      return (0);
  }

/*                                                                                                                                                                                           
** EPITECH PROJECT, 2020                                                                                                                            
** main                                                                                                                                                                      
** File description:                                                                                                                                                                         
** main                                                                                                                                                                               
*/

#include "my.h"

int main(int ac, char **av)
{
    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h') {
        printf("%s", "bibi");
    } else {
        game_loop();
    }
    return EXIT_SUCCESS;
}
/*                                                                                                                                                                                           
** EPITECH PROJECT, 2020                                                                                                                            
** event.c                                                                                                                                                         
** File description:                                                                                                                                                                         
** event                                                                                                                                                                              
*/

#include "my.h"

void analyse_event(init_t init)
{
    sfEvent event;

    while (sfRenderWindow_pollEvent(init.window, &event)) {
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(init.window);
    }
}
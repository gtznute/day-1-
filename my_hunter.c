/*                                                                                                                                                                                           
** EPITECH PROJECT, 2020                                                                                                                            
** my_hunter                                                                                                                                                                      
** File description:                                                                                                                                                                         
** my_hunter                                                                                                                                                                               
*/

#include "my.h"

void game_loop(void)
{
    init_t init = init_l();
    sfIntRect rect = set_rect(rect);
    sfClock *clock = sfClock_create();
    sfTime time;
    float seconde;

    while (sfRenderWindow_isOpen(init.window)) {
        time = sfClock_getElapsedTime(clock);
        seconde = time.microseconds / 100000.0;
        if (seconde > 1) {
            move_rect(&rect);
            sfClock_restart(clock);
        }
        analyse_event(init);
        display_game(init, rect);
    }
    destroy_all(init);
}
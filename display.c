/*                                                                                                                                                                                           
** EPITECH PROJECT, 2020                                                                                                                            
** display.c                                                                                                                                                       
** File description:                                                                                                                                                                         
** display                                                                                                                                                                         
*/

#include "my.h"

void display_game(init_t init, sfIntRect rect)
{
    sfVector2f position;
        position.x += 0.5;
        position.y += 0.5;
        sfSprite_setTexture(init.sprite1, init.background, sfTrue);
        sfSprite_setTexture(init.sprite, init.texture, sfTrue);
        sfSprite_setTextureRect(init.sprite, rect);
        sfSprite_setPosition(init.sprite, position);
        sfRenderWindow_clear(init.window, sfBlack);
        sfMusic_play(init.music);
        sfRenderWindow_drawSprite(init.window, init.sprite1, NULL);
        sfRenderWindow_drawSprite(init.window, init.sprite, NULL);
        sfRenderWindow_display(init.window);
}
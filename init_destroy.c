/*                                                                                                                                                                                           
** EPITECH PROJECT, 2020                                                                                                                            
** init_destroy.c                                                                                                                                                       
** File description:                                                                                                                                                                         
** init_destroy                                                                                                                                                                            
*/

#include "my.h"

init_t init_l(void)
{
    init_t init;
    sfVideoMode mode = {800, 600, 32};
    init.window = sfRenderWindow_create(mode, "My_hunter", sfResize | sfClose, NULL);
    init.texture = sfTexture_createFromFile("image/nyancat_spritesheet.png", NULL);
    init.background = sfTexture_createFromFile("image/background (1).jpg", NULL);
    init.music = sfMusic_createFromFile("sound/nyan_cat.ogg");
    init.sprite1 = sfSprite_create();
    init.sprite = sfSprite_create();
    init.clock = sfClock_create();
    return (init);
}

void destroy_all(init_t init)
{
    sfSprite_destroy(init.sprite);
    sfSprite_destroy(init.sprite1);
    sfTexture_destroy(init.texture);
    sfTexture_destroy(init.background);
    sfMusic_destroy(init.music);
    sfClock_destroy(init.clock);
    sfRenderWindow_destroy(init.window);
}
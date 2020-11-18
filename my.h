#include <stdlib.h>
#include <stdio.h>
#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <SFML/System.h>

typedef struct init {
    sfRenderWindow *window;
    sfTexture *texture;
    sfTexture *background;
    sfSprite *sprite;
    sfSprite *sprite1;
    sfClock *clock;
    sfMusic *music;
}init_t;

sfIntRect set_rect(sfIntRect rect);
void move_rect(sfIntRect *rect);
void analyse_event(init_t init);
void destroy_all(init_t init);
init_t init_l(void);
void display_game(init_t init, sfIntRect rect);
void game_loop(void);
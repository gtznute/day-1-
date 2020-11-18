/*                                                                                                                                                                                           
** EPITECH PROJECT, 2020                                                                                                                            
** movement                                                                                                                                                                      
** File description:                                                                                                                                                                         
** movement                                                                                                                                                                          
*/

#include "my.h"

sfIntRect set_rect(sfIntRect rect) 
{
    rect.top = 0;
    rect.left = 0;
    rect.width = 300;
    rect.height = 123;
    return(rect);
}

void move_rect(sfIntRect *rect)
{
    rect->left += 300;
    if (rect->left == 1500)
        rect->left = 0;
}
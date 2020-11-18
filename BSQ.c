
#include "include/my.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>

// int count_fonct(char **buff) 
// {
//     int nb_line = 0;
//     int nb_column = 0;

//     my_putchar('a');
//     for (int i = 0; buff[0][i] != '\n'; i++) {
//         nb_column += 1;
//     }
//     my_putchar('a');
//     for (int i = 0; buff[i][0] != '\0'; i++) {
//         if (buff[i] == '\n') 
//             nb_line += 1;
//     }
//     my_putchar('a');
//     return (nb_line);
// }

void fs_cat_size_bytes(char const *filepath)
{
    int size = 0; 
    char buff[5];

    int fd = open(filepath, O_RDONLY);

    size = read(fd, buff, 5);
    write(1, buff, size);
    close(fd);
    printf("%s", buff);
    // count_fonct(buff);
}

int main(void)
{
    char *filepath = "/mouli_maps/intermediate_map_filled_corners";
    fs_cat_size_bytes(filepath);
    return (0);
}
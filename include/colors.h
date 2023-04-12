#ifndef COLORS_H
#define COLORS_H

#define COLOR_RESET "\033[0m"

#define COLOR_RED "\033[31m"
#define COLOR_GREEN "\033[32m"
#define COLOR_YELLOW "\033[33m"
#define COLOR_BLUE "\033[34m"
#define COLOR_MAGENTA "\033[35m"
#define COLOR_CYAN "\033[36m"
#define COLOR_WHITE "\033[37m"
#define BG_COLOR_WHITE "\033[47m"

const char *colors[] = {
        COLOR_WHITE,
        COLOR_RED,
        COLOR_GREEN,
        COLOR_YELLOW,
        COLOR_BLUE,
        COLOR_MAGENTA,
        COLOR_CYAN,
    }; // array to be able to iterate over colors

const char *colors_names[] = {
        "white",
        "red",
        "green",
        "yellow",
        "blue",
        "magenta",
        "cyan",
    }; // array to be able to iterate over colors names

#endif
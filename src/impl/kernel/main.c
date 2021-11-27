#include "print.h"

void kernel_main()
{
    print_clear();
    print_set_color(PRINT_COLOR_YELLOW, PRINT_COLOR_BLACK);
    print_str("Schwarzburg OS, now in 64 bit!\n\n");
    print_set_color(PRINT_COLOR_GREEN, PRINT_COLOR_LIGHT_RED);
    print_str("Please await until OS has fully booted up\n\n");
    print_set_color(PRINT_COLOR_RED, PRINT_COLOR_BLUE);
    print_str("OS has fully booted up\n\n");
}
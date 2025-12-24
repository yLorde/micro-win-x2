#include "main.h"
#include "print.h"

void kernel_main() {
    print_clear();
    print_set_color(PRINT_COLOR_YELLOW, PRINT_COLOR_BLACK);
    print_str("Loading kernel...\n");

    print_set_color(PRINT_COLOR_LIGHT_GREEN, PRINT_COLOR_BLACK);
    print_str("Welcome to Micro-Win-x2!\n");
}
#include "main"


int print_string(const char *str) {
    int i = 0;
    if (str == NULL) {
        return write(1, "(Null)", 6);
    }
    while (str[i]) {
        _putchar(str[i]);
        i++;
    }
    return i;
}


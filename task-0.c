#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int main()
{
    printf("Hello world!\n");
    return 0;
}

int _printf(const char *format, ...) {
    
    int num_char_printed = 0;
    
    va_list args;
    va_start(args, format);
    
    for (const char* p = format; *p != '\0'; p++) {
    if (*p == '%') {
        p++; // move to the next character after '%'
        if (*p == 'c') {
            // Handle the 'c' conversion specifier
           char c = va_arg(args, int); // get the next argument as a char
           putchar(c); // print the char to stdout
           num_chars_printed++; // increment the counter
        }
        else if (*p == 's') {
            // Handle the 's' conversion specifier
            const char* str = va_arg(args, const char*); // get the next argument as a string
            num_chars_printed += puts(str); 
        }
        else if (*p == '%') {
            // Handle the '%' character
             putchar('%'); // print the '%' character to stdout
             num_chars_printed++; // increment the counter
        }
        else {
            // Handle an invalid conversion specifier
            
        }
    }
    else {
        // Handle a regular character
        puts("Error: Invalid conversion specifier");
        return (1)
    }
    
}
    va_end(args);
    return (word_count) 
}


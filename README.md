# print()
This is a collaboration project by **Afolabi Praise** and **Fawas Iwayemi**, ALX software engineering student, where a function "_printf" works like the actual "printf" command found im the stdio.h libary.

_print() is a function that performs formatted output conversion and prints data. its prototype is;

int _printf(const char *format, ...)

Where **format** contains the string that is printed. As _printf() is variadic function, it can receives n arguments that replace by n tags written inside the string.

The format tags prototype is the following:

%[flags][length]specifier

if the program runs successfully, the **return value** is the amount of chars printed.

| specifier | output |
| -------------- | --------------- |
| c | character |
| d or i | signed decimal interger |
| s | string of character |
| b | signed binary |
| o | signed octal |
| u | unsigned integer |
| x | unsigned hexadecimal |
| X | unsigned hexadecimal (upper case) |
| p | pointer address |
| r | reverse string of characters |
| R | ROT13 translation of string |
| S | string with special chars replaced by their ASCII value |
| % | character |

| Flags | Description | Specifiers |
| ------------- | ------------- | ------------- | 
| +  | Prints a plus sign (+) when the argument is a positive number. In other case, prints a minus sign (-). | i, d |
| (space) | Prints a blank space if the argument is a positive number | i, d |
| #  | Prints 0, 0x and 0X for o, x and X specifiers, respectively. It doesn't print anything if the argument is zero | o, x, X |

| Length | Description | Specifiers |
| ------------- | ------------- | ------------- | 
| l | Prints a long int or unsigned long int | i, d, o, u, x and X |
| h | Prints a short int or unsigned short int | i, d, o, u, x and X |

------------

## TASK

0. write a function that produce output according to a format.

1. handle the following conversion specifiers. d , i 

2. handle the following custon conversion specifiers.
   b: the unsigned the argument is converted to binary.
   
3.  handle the following conversion specifiers. u , o , x , X

4. Use a local buffer of 1024 chars in order to call write as little as possible.

5. Handle the following custom conversion specifier:

   S : prints the string.
   Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way: \x, followed by the ASCII code value in hexadecimal (upper case - always 2 characters)

6. Handle the following conversion specifier: p.

7. Handle the following flag characters for non-custom conversion specifiers:
   + , space , #

8. Handle the following length modifiers for non-custom conversion specifiers:
   l , h
   Conversion specifiers to handle: d, i, u, o, x, X

9. Handle the field width for non-custom conversion specifiers.

10. Handle the precision for non-custom conversion specifiers.

11. Handle the 0 flag character for non-custom conversion specifiers.

12. Handle the - flag character for non-custom conversion specifiers.

13. Handle the following custom conversion specifier:
    r : prints the reversed string

14. Handle the following custom conversion specifier:
    R: prints the rot13'ed string

15.work well done.


## Authors
Afolabi Praise <afolabipraise43@gmail.com>
Fawas Iwayemi <Iwayemiolawale@gmail.com>

------------

### End
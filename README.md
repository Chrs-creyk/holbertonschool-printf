<html>
<body>
<h1>PRINTF PROJECT</h1>
<img src= "https://i.ytimg.com/vi/mZFdyoZhUb4/maxresdefault.jpg" width="300" height="auto"/>
<hr> printf Project

-This printf project was to make a coding function called "_printf()" that is similar to printf() in what it supposed to do. Here's a link if you would like to read about formating and functions on printf: (https://man7.org/linux/man-pages/man3/printf.3.html)

-A printf functions in the printf() family produce output according to a format as described below. The functions printf() and vprintf() write output to stdout, the standard output stream; fprintf() and vfprintf() write output to the given output stream; sprintf(), snprintf(), vsprintf() and vsnprintf() write to the character string str. Heres the link if you would like to know more: (https://linux.die.net/man/3/printf)

The prototype used is the following:

int _printf(const char *format, ...);

-The table set below are a number of specifiers that the original printf can use. Ours can only use at the moment d, i, s, c and %.
Image can be found here: (https://www.cplusplus.com/reference/cstdio/printf/)

image

EXAMPLES
Use: _printf("%d", 8);
Output: 8
Use: _printf("%c", h)
Output: h
FILE FUNCTIONS
_printf.c
Our printf function is stored here. This performs just as the original that prints any data given to it.

main.h
This a header file. It includes all prototypes functions used.

Return values
On succes should give the correct integer.

Return (0);

AUTHORS
Jerson Riascos 5828
Cristhian Jurado 5860
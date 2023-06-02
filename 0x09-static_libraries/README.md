<h1>0x09. C - Static Libraries</h1>

<table>
    <tr>
        <td><h2><strong>FILE</strong></h2></td>
        <td><h2><strong>DESCRIPTION</strong></h2></td>
    </tr>
    <tr>
        <td><h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x09-static_libraries/main.h" target="_blank">main.h</a></h2></td>
        <td>The header file containing all functions prototypes.</td>
    </tr>
    <tr>
        <td><h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x09-static_libraries/_putchar.c" target="_blank">_putchar.c</a></h2></td>
        <td>The putchar function file.</td>
    </tr>
    <tr>
        <td>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x09-static_libraries/0-isupper.c" target="_blank">0-isupper.c</a></h2>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x09-static_libraries/0-isupper.o" target="_blank">0-isupper.o</a></h2>
        </td>
        <td>
            <p>Write a function that checls for uppercase character.</p>
            <ul>
                <li>Prototype: int _isupper(int c);</li>
                <li>Return 1 if c is uppercase</li>
                <li>Returns 0 otherwise</li>
            </ul>
        </td>
    </tr>
    <tr>
        <td>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x09-static_libraries/0-memset.c" target="_blank">0-memset.c</a></h2>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x09-static_libraries/0-memset.o" target="_blank">0-memset.o</a></h2>
        </td>
        <td>
            <p>Write a function that fills memory with a constant byte.</p>
            <ul>
                <li>Prototype: char *_memset(char *s, char b, unsigned int n);</li>
                <li>The _memset() function fills the first n bytes of the memory area pointed to by s with the constant byte b</li>
                <li>Return a pointer to the memory area s</li>
            </ul>
        </td>
    </tr>
    <tr>
        <td>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x09-static_libraries/0-strcat.c" target="_blank">0-strcat.c</a></h2>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x09-static_libraries/0-strcat.o" target="_blank">0-strcat.o</a></h2>
        </td>
        <td>
            <p>Write a function that concatenates two strings.</p>
            <ul>
                <li>Prototype: char *_strcat(char *dest, char *src);</li>
                <li>This function appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte</li>
                <li>Returns a pointer to the resulting string dest</li>
            </ul>
        </td>
    </tr>
    <tr>
        <td>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x09-static_libraries/1-isdigit.c" target="_blank">1-isdigit.c</a></h2>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x09-static_libraries/1-isdigit.o" target="_blank">1-isdigit.o</a></h2>
        </td>
        <td>
            <p>Write a function that checks for a digit (0 through 9).</p>
            <ul>
                <li>Prototype: int _isdigit(int c);</li>
                <li>Returns 1 if c is a digit</li>
                <li>Returns 0 otherwise</li>
            </ul>
        </td>
    </tr>
    <tr>
        <td>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x09-static_libraries/1-memcpy.c" target="_blank">1-memcpy.c</a></h2>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x09-static_libraries/1-memcpy.o" target="_blank">1-memcpy.o</a></h2>
        </td>
        <td>
            <p>Write a function that copies memory area.</p>
            <ul>
                <li>Prototype: char *_memcpy(char *dest, char *src, unsigned int n);</li>
                <li>The _memscpy() function copies n bytes from memory area src to memory area dest</li>
                <li>Return a pointer to dest</li>
            </ul>
        </td>
    </tr>
    <tr>
        <td>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x09-static_libraries/1-strncat.c" target="_blank">1-strncat.c</a></h2>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x09-static_libraries/1-strncat.o" target="_blank">1-strncat.o</a></h2>
        </td>
        <td>
            <p>Write a function that concatenates two strings.</p>
            <ul>
                <li>Prototype: char *_strncat(char *dest, char *src, int n);</li>
                <li>The _strncat function is similar to the _strcat function, except that</li>
                <ul>
                    <li>it will use at most n bytes from src; and</li>
                    <li>src does not need to be null-terminated if it contains n or more bytes</li>
                </ul>
                <li>Return a pointer to the resulting string dest</li>
            </ul>
        </td>
    </tr>
    <tr>
        <td>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x09-static_libraries/100-atoi.c" target="_blank">100-atoi.c</a></h2>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x09-static_libraries/100-atoi.o" target="_blank">100-atoi.o</a></h2>
        </td>
        <td>
            <p>Write a function that converts a string to an integer.</p>
            <ul>
                <li>Prototype: int _atoi(char *s)</li>
            </ul>
        </td>
    </tr>
    <tr>
        <td>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x09-static_libraries/2-strchr.c" target="_blank">2-strchr.c</a></h2>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x09-static_libraries/2-strchr.o" target="_blank">2-strchr.o</a></h2>
        </td>
        <td>
            <p>Write a function that locates a character in a string.</p>
            <ul>
                <li>Prototype: char *_strchr(char *s, char c);</li>
                <li>Returns a pointer to the first occurrence of the character c in the string s, or NULL if the character is not found</li>
            </ul>
        </td>
    </tr>
    <tr>
        <td>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x09-static_libraries/2-strlen.c" target="_blank">2-strlen.c</a></h2>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x09-static_libraries/2-strlen.o" target="_blank">2-strlen.o</a></h2>
        </td>
        <td>
            <p>Write a function that returns the length of a string.</p>
            <ul>
                <li>Prototype: int _strlen(char *s);</li>
            </ul>
        </td>
    </tr>
    <tr>
        <td>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x09-static_libraries/2-strncpy.c" target="_blank">2-strncpy.c</a></h2>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x09-static_libraries/2-strncpy.o" target="_blank">2-strncpy.o</a></h2>
        </td>
        <td>
            <p>Write a function that copies a string.</p>
            <ul>
                <li>Prototype: char *_strncpy(char *dest, char *src, int n);</li>
                <li>Your function should work exactly like strncpy</li>
            </ul>
        </td>
    </tr>
    tr>
        <td>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x09-static_libraries/3-islower.c" target="_blank">3-islower.c</a></h2>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x09-static_libraries/3-islower.o" target="_blank">3-islower.o</a></h2>
        </td>
        <td>
            <p>Write a function that checks for lowercase character.</p>
            <ul>
                <li>Prototype: int _islower(int c);</li>
                <li>Returns 1 if c is lowercase</li>
                <li>Returns 0 otherwise</li>
            </ul>
        </td>
    </tr>
</table>
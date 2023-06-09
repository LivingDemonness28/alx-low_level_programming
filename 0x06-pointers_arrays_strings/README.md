<h1>0x06. C - More pointers, arrays and strings</h1>

<table>
    <tr>
        <td><h2><strong>FILE</strong></h2></td>
        <td><h2><strong>DESCRIPTION</strong></h2></td>
    </tr>
    <tr>
        <td><h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/main.h" target="_blank">main.h</a></h2></td>
        <td>The header file containing all functions prototypes.</td>
    </tr>
    <tr>
        <td><h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/_putchar.c" target="_blank">_putchar.c</a></h2></td>
        <td>The putchar function file.</td>
    </tr>
    <tr>
        <td>
        <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/0-strcat.c" target="_blank">0-strcat.c</a></h2>
        <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/0-main.c" target="_blank">0-main.c</a></h2>
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
        <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/1-strncat.c" target="_blank">1-strncat.c</a></h2>
        <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/1-main.c" target="_blank">1-main.c</a></h2>
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
        <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/2-strncpy.c" target="_blank">2-strncpy.c</a></h2>
        <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/2-main.c" target="_blank">2-main.c</a></h2>
        </td>
        <td>
            <p>Write a function that copies a string.</p>
            <ul>
                <li>Prototype: char *_strncpy(char *dest, char *src, int n);</li>
                <li>Your function should work exactly like strncpy</li>
            </ul>
        </td>
    </tr>
    <tr>
        <td>
        <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/3-strcmp.c" target="_blank">3-strcmp.c</a></h2>
        <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/3-main.c" target="_blank">3-main.c</a></h2>
        </td>
        <td>
            <p>Write a function that compares two strings.</p>
            <ul>
                <li>Prototype: int _strcmp(char *s1, char *s2);</li>
                <li>Your function should work exactly like strcmp</li>
            </ul>
        </td>
    </tr>
    <tr>
        <td>
        <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/4-rev_array.c" target="_blank">4-rev_array.c</a></h2>
        <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/4-main.c" target="_blank">4-main.c</a></h2>
        </td>
        <td>
            <p>Write a function that reverses the content of an array of integers.</p>
            <ul>
                <li>Prototype: void reverse_array(int *a, int n);</li>
                <li>Where n is the number of elements of the array</li>
            </ul>
        </td>
    </tr>
    <tr>
        <td>
        <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/5-string_toupper.c" target="_blank">5-string_toupper.c</a></h2>
        <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/5-main.c" target="_blank">5-main.c</a></h2>
        </td>
        <td>
            <p>Write a function that changes all lowercase letters of a string to uppercase.</p>
            <ul>
                <li>Prototype: char *string_toupper(char *);</li>
            </ul>
        </td>
    </tr>
    <tr>
        <td>
        <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/6-cap_string.c" target="_blank">6-cap_string.c</a></h2>
        <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/6-main.c" target="_blank">6-main.c</a></h2>
        </td>
        <td>
            <p>Write a function that capitalizes all words of a string.</p>
            <ul>
                <li>Prototype: char *cap_string(char *);</li>
                <li>Separators of words: space, tabulation, new line, , , ; , . , ! , ? , " , ( , ) , { , and }</li>
            </ul>
        </td>
    </tr>
    <tr>
        <td>
        <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/7-leet.c" target="_blank">7-leet.c</a></h2>
        <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/7-main.c" target="_blank">7-main.c</a></h2>
        </td>
        <td>
            <p>Write a function that encodes a string into <a href="https://en.wikipedia.org/wiki/Leet" target="_blank">1337</a></p>
            <ul>
                <li>Letters a and A should be replaced by 4</li>
                <li>Letters e and E should be replaced by 3</li>
                <li>Letters o and O should be replaced by 0</li>
                <li>Letters t and T should be replaced by 7</li>
                <li>Letters l and L should be replaced by 1</li>
                <li>Prototype: char *leet(char *);</li>
                <li>You can only use one if in your code</li>
                <li>You can only use two loops in your code</li>
                <li>You are not allowed to use switch</li>
                <li>You are not allowed to use any ternary operation</li>
            </ul>
        </td>
    </tr>
</table>
<h1>0x10. C - Variadic functions</h1>

<table>
    <tr>
        <td><h2><strong>FILE</strong></h2></td>
        <td><h2><strong>DESCRIPTION</strong></h2></td>
    </tr>
    <tr>
        <td><h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x10-variadic_functions/variadic_functions.h" target="_blank">variadic_functions.h</a></h2></td>
        <td>The header file containing all functions prototypes.</td>
    </tr>
    <tr>
        <td><h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x10-variadic_functions/_putchar.c" target="_blank">_putchar.c</a></h2></td>
        <td>The putchar function file.</td>
    </tr>
    <tr>
        <td>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x10-variadic_functions/0-main.c" target="_blank">0-main.c</a></h2>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x10-variadic_functions/0-sum_them_all.c" target="_blank">0-sum_them_all.c</a></h2>
        </td>
        <td>
            <p>Write a function that returns the sum of all its parameters.</p>
            <ul>
                <li>Prototype: int sum_them_all(const unsigned int n, ...);</li>
                <li>If n == 0, return 0</li>
            </ul>
        </td>
    </tr>
    <tr>
        <td><h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x10-variadic_functions/a" target="_blank">a</a></h2></td>
        <td>Executable file for Task 0</td>
    </tr>
    <tr>
        <td>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x10-variadic_functions/1-main.c" target="_blank">1-main.c</a></h2>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x10-variadic_functions/1-print_numbers.c" target="_blank">1-print_numbers.c</a></h2>
        </td>
        <td>
            <p>Write a function that prints numbers, followed by a new line.</p>
            <ul>
                <li>Prototype: void print_numbers(const char *separator, const unsigned int n, ...);</li>
                <li>where separator is the string to be printed between numbers</li>
                <li>and n is the number of integers passed to the function</li>
                <li>You are allowed to use printf</li>
                <li>If separator is NULL, don’t print it</li>
                <li>Print a new line at the end of your function</li>
            </ul>
        </td>
    </tr>
    <tr>
        <td><h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x10-variadic_functions/b" target="_blank">b</a></h2></td>
        <td>Executable file for Task 1</td>
    </tr>
    <tr>
        <td>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x10-variadic_functions/2-main.c" target="_blank">2-main.c</a></h2>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x10-variadic_functions/2-print_strings.c" target="_blank">2-print_strings.c</a></h2>
        </td>
        <td>
            <p>Write a function that prints strings, followed by a new line.</p>
            <ul>
                <li>Prototype: void print_strings(const char *separator, const unsigned int n, ...);</li>
                <li>where separator is the string to be printed between strings</li>
                <li>and n is the number of strings passed to the function</li>
                <li>You are allowed to use printf</li>
                <li>If separator is NULL, don’t print it</li>
                <li>If one of the string is NULL, print (nil) instead</li>
                <li>Print a new line at the end of your function</li>
            </ul>
        </td>
    </tr>
    <tr>
        <td><h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x10-variadic_functions/c" target="_blank">c</a></h2></td>
        <td>Executable file for Task 2</td>
    </tr>
    <tr>
        <td>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x10-variadic_functions/3-main.c" target="_blank">3-main.c</a></h2>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x10-variadic_functions/3-print_all.c" target="_blank">3-print_all.c</a></h2>
        </td>
        <td>
            <p>Write a function that prints anything.</p>
            <ul>
                <li>Prototype: void print_all(const char * const format, ...);</li>
                <li>where format is a list of types of arguments passed to the function</li>
                <ul>
                    <li>c: char</li>
                    <li>i: integer</li>
                    <li>f: float</li>
                    <li>s: char * (if the string is NULL, print (nil) instead)</li>
                    <li>any other char should be ignored</li>
                </ul>
                <li>You are not allowed to use for, goto, ternary operator, else, do ... while</li>
                <li>You can use a maximum of</li>
                <ul>
                    <li>2 while loops</li>
                    <li>2 if</li>
                </ul>
                <li>You can declare a maximum of 9 variables</li>
                <li>You are allowed to use printf</li>
                <li>Print a new line at the end of your function</li>
            </ul>
        </td>
    </tr>
    <tr>
        <td><h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x10-variadic_functions/d" target="_blank">d</a></h2></td>
        <td>Executable file for Task 3</td>
    </tr>
</table>
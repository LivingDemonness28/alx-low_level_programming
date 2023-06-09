<h1>0x0F. C - Function pointers</h1>

<table>
    tr>
        <td><h2><strong>FILE</strong></h2></td>
        <td><h2><strong>DESCRIPTION</strong></h2></td>
    </tr>
    <tr>
        <td><h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x0F-function_pointers/function_pointers.h" target="_blank">function_pointers.h</a></h2></td>
        <td>The header file containing all functions prototypes.</td>
    </tr>
    <tr>
        <td><h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x0F-function_pointers/_putchar.c" target="_blank">_putchar.c</a></h2></td>
        <td>The putchar function file.</td>
    </tr>
    <tr>
        <td>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x0F-function_pointers/0-main.c" target="_blank">0-main.c</a></h2>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x0F-function_pointers/0-print_name.c" target="_blank">0-print_name.c</a></h2>
        </td>
        <td>
            <p>Write a function that prints a name.</p>
            <ul>
                <li>Prototype: void print_name(char *name, void (*f)(char *));</li>
            </ul>
        </td>
    </tr>
    <tr>
        <td>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x0F-function_pointers/1-main.c" target="_blank">1-main.c</a></h2>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x0F-function_pointers/1-array_iterator.c" target="_blank">1-array_iterator.c</a></h2>
        </td>
        <td>
            <p>Write a function that executes a function given as a parameter on each element of an array.</p>
            <ul>
                <li>Prototype: void array_iterator(int *array, size_t size, void (*action)(int));</li>
                <li>where size is the size of the array</li>
                <li>and action is a pointer to the function you need to use</li>
            </ul>
        </td>
    </tr>
    <tr>
        <td>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x0F-function_pointers/2-main.c" target="_blank">2-main.c</a></h2>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x0F-function_pointers/2-int_index.c" target="_blank">2-int_index.c</a></h2>
        </td>
        <td>
            <p>Write a function that searches for an integer.</p>
            <ul>
                <li>Prototype: int int_index(int *array, int size, int (*cmp)(int));</li>
                <li>where size is the number of elements in the array array</li>
                <li>cmp is a pointer to the function to be used to compare values</li>
                <li>int_index returns the index of the first element for which the cmp function does not return 0</li>
                <li>If no element matches, return -1</li>
                <li>If size <= 0, return -1</li>
            </ul>
        </td>
    </tr>
    <tr>
        <td><h2>3. A goal is not always meant to be reached, it often serves simply as something to aim at</h2></td>
        <td>
            <p>Write a program that performs simple operations.</p>
            <ul>
                <li>You are allowed to use the standard library</li>
                <li>Usage: calc num1 operator num2</li>
                <li>You can assume num1 and num2 are integers, so use the atoi function to convert them from the string input to int</li>
                <li>operator is one of the following</li>
                <ul>
                    <li>+: addition</li>
                    <li>-: subtraction</li>
                    <li>*: multiplication</li>
                    <li>/: division</li>
                    <li>%: modulo</li>
                </ul>
                <li>The program prints the result of the operation, followed by a new line</li>
                <li>You can assume that the result of all operations can be stored in an int</li>
                <li>if the number of arguments is wrong, print Error, followed by a new line, and exit with the status 98</li>
                <li>if the operator is none of the above, print Error, followed by a new line, and exit with the status 99</li>
                <li>if the user tries to divide (/ or %) by 0, print Error, followed by a new line, and exit with the status 100</li>
            </ul>
            <p>This task requires that you create four different files.</p>
        </td>
    </tr>
    <tr>
        <td><h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x0F-function_pointers/3-calc.h" target="_blank">3-calc.h</a></h2></td>
        <td>This file should contain all the function prototypes and data structures used by the program. You can use this structure:</td>
    </tr>
    <tr>
        <td><h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x0F-function_pointers/3-op_functions.c" target="_blank">3-op_functions.c</a></h2></td>
        <td>
            <p>This file should contain the 5 following functions (not more):</p>
            <ul>
                <li>op_add: returns the sum of a and b. Prototype: int op_add(int a, int b);</li>
                <li>op_sub: returns the difference of a and b. Prototype: int op_sub(int a, int b);</li>
                <li>op_mul: returns the product of a and b. Prototype: int op_mul(int a, int b);</li>
                <li>op_div: returns the result of the division of a by b. Prototype: int op_div(int a, int b);</li>
                <li>op_mod: returns the remainder of the division of a by b. Prototype: int op_mod(int a, int b);</li>
            </ul>
        </td>
    </tr>
</table>
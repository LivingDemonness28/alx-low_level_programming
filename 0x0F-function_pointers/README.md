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
</table>
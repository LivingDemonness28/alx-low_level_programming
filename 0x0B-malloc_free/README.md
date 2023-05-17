<h1>0x0B. C - malloc, free</h1>

<table>
    <tr>
        <td><h2><strong>FILE</strong></h2></td>
        <td><h2><strong>DESCRIPTION</strong></h2></td>
    </tr>
    <tr>
        <td><h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x0B-malloc_free/main.h" target="_blank">main.h</a></h2></td>
        <td>The header file containing all functions prototypes.</td>
    </tr>
    <tr>
        <td><h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x0B-malloc_free/_putchar.c" target="_blank">_putchar.c</a></h2></td>
        <td>The putchar function file.</td>
    </tr>
    <tr>
        <td>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x0B-malloc_free/0-main.c" target="_blank">0-main.c</a></h2>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x0B-malloc_free/0-create_array.c" target="_blank">0-create_array.c</a></h2>
        </td>
        <td>
            <p>Write a function that creates an array of chars, and initializes it with a specific char.</p>
            <ul>
                <li>Prototype: char *create_array(unsigned int size, char c);</li>
                <li>Returns NULL if size = 0</li>
                <li>Returns a pointer to the array, or NULL if it fails</li>
            </ul>
        </td>
    </tr>
    <tr>
        <td>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x0B-malloc_free/1-main.c" target="_blank">1-main.c</a></h2>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x0B-malloc_free/1-strdup.c" target="_blank">1-strdup.c</a></h2>
        </td>
        <td>
            <p>Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.</p>
            <ul>
                <li>Prototype: char *_strdup(char *str);</li>
                <li>The _strdup() function returns a pointer to a new string which is a duplicate of the string str. Memory for the new string is obtained with malloc, and can be freed with free.</li>
                <li>Returns NULL if str = NULL</li>
                <li>On success, the _strdup function returns a pointer to the duplicated string. It returns NULL if insufficient memory was available</li>
            </ul>
        </td>
    </tr>
    <tr>
        <td>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x0B-malloc_free/2-main.c" target="_blank">2-main.c</a></h2>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x0B-malloc_free/2-str_concat.c" target="_blank">2-str_concat.c</a></h2>
        </td>
        <td>
            <p>Write a function that concatenates two strings.</p>
            <ul>
                <li>Prototype: char *str_concat(char *s1, char *s2);</li>
                <li>The returned pointer should point to a newly allocated space in memory which contains the contents of s1, followed by the contents of s2, and null terminated</li>
                <li>if NULL is passed, treat it as an empty string</li>
                <li>The function should return NULL on failure</li>
            </ul>
        </td>
    </tr>
    <tr>
        <td>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x0B-malloc_free/3-main.c" target="_blank">3-main.c</a></h2>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x0B-malloc_free/3-alloc_grid.c" target="_blank">3-alloc_grid.c</a></h2>
        </td>
        <td>
            <p>Write a function that returns a pointer to a 2 dimensional array of integers.</p>
            <ul>
                <li>Prototype: int **alloc_grid(int width, int height);</li>
                <li>Each element of the grid should be initialized to 0</li>
                <li>The function should return NULL on failure</li>
                <li>If width or height is 0 or negative, return NULL</li>
            </ul>
        </td>
    </tr>
    <tr>
        <td>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x0B-malloc_free/4-main.c" target="_blank">4-main.c</a></h2>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x0B-malloc_free/4-free_grid.c" target="_blank">4-free_grid.c</a></h2>
        </td>
        <td>
            <p>Write a function that frees a 2 dimensional grid previously created by your alloc_grid function.</p>
            <ul>
                <li>Prototype: void free_grid(int **grid, int height);</li>
                <li>Note that we will compile with your alloc_grid.c file. Make sure it compiles.</li>
            </ul>
        </td>
    </tr>
</table>
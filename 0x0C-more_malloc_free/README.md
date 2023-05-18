<h1>0x0C. C - More malloc, free</h1>

<table>
    <tr>
        <td><h2><strong>FILE</strong></h2></td>
        <td><h2><strong>DESCRIPTION</strong></h2></td>
    </tr>
    <tr>
        <td><h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x0C-more_malloc_free/main.h" target="_blank">main.h</a></h2></td>
        <td>The header file containing all functions prototypes.</td>
    </tr>
    <tr>
        <td><h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x0C-more_malloc_free/_putchar.c" target="_blank">_putchar.c</a></h2></td>
        <td>The putchar function file.</td>
    </tr>
    <tr>
        <td>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x0C-more_malloc_free/0-malloc_checked.c" target="_blank">0-malloc_checked.c</a></h2>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x0C-more_malloc_free/0-main.c" target="_blank">0-main.c</a></h2>
        </td>
        <td>
            <p>Write a function that allocates memory using malloc.</p>
            <ul>
                <li>Prototype: void *malloc_checked(unsigned int b);</li>
                <li>Returns a pointer to the allocated memory</li>
                <li>if malloc fails, the malloc_checked function should cause normal process termination with a status value of 98</li>
            </ul>
        </td>
    </tr>
    <tr>
        <td>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x0C-more_malloc_free/1-string_nconcat.c" target="_blank">1-string_nconcat.c</a></h2>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x0C-more_malloc_free/1-main.c" target="_blank">1-main.c</a></h2>
        </td>
        <td>
            <p>Write a function that concatenates two strings.</p>
            <ul>
                <li>Prototype: char *string_nconcat(char *s1, char *s2, unsigned int n);</li>
                <li>The returned pointer shall point to a newly allocated space in memory, which contains s1, followed by the first n bytes of s2, and null terminated</li>
                <li>If the function fails, it should return NULL</li>
                <li>If n is greater or equal to the length of s2 then use the entire string s2</li>
                <li>if NULL is passed, treat it as an empty string</li>
            </ul>
        </td>
    </tr>
</table>
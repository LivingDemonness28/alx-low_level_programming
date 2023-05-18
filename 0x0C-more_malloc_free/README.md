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
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x0C-more_malloc_free/0-main.c" target="_blank">0-main.c</a></h2>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x0C-more_malloc_free/0-malloc_checked.c" target="_blank">0-malloc_checked.c</a></h2>
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
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x0C-more_malloc_free/1-main.c" target="_blank">1-main.c</a></h2>
             <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x0C-more_malloc_free/1-string_nconcat.c" target="_blank">1-string_nconcat.c</a></h2>
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
    <tr>
        <td>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x0C-more_malloc_free/2-main.c" target="_blank">2-main.c</a></h2>
             <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x0C-more_malloc_free/2-calloc.c" target="_blank">2-calloc.c</a></h2>
        </td>
        <td>
            <p>Write a function that allocates memory for an array, using malloc.</p>
            <ul>
                <li>Prototype: void *_calloc(unsigned int nmemb, unsigned int size);</li>
                <li>The _calloc function allocates memory for an array of nmemb elements of size bytes each and returns a pointer to the allocated memory.</li>
                <li>The memory is set to zero</li>
                <li>If nmemb or size is 0, then _calloc returns NULL</li>
                <li>If malloc fails, then _calloc returns NULL</li>
            </ul>
        </td>
    </tr>
    <tr>
        <td>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x0C-more_malloc_free/3-main.c" target="_blank">3-main.c</a></h2>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x0C-more_malloc_free/3-array_range.c" target="_blank">3-array_range.c</a></h2>
        </td>
        <td>
            <p>Write a function that creates an array of integers.</p>
            <ul>
                <li>Prototype: int *array_range(int min, int max);</li>
                <li>The array created should contain all the values from min (included) to max (included), ordered from min to max</li>
                <li>Return: the pointer to the newly created array</li>
                <li>If min > max, return NULL</li>
                <li>If malloc fails, return NULL</li>
            </ul>
        </td>
    </tr>
    <tr>
        <td>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x0C-more_malloc_free/100-main.c" target="_blank">100-main.c</a></h2>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x0C-more_malloc_free/100-realloc.c" target="_blank">100-realloc.c</a></h2>
        </td>
        <td>
            <p>Write a function that reallocates a memory block using malloc and free</p>
            <ul>
                <li>Prototype: void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);</li>
                <li>where ptr is a pointer to the memory previously allocated with a call to malloc: malloc(old_size)</li>
                <li>old_size is the size, in bytes, of the allocated space for ptr</li>
                <li>and new_size is the new size, in bytes of the new memory block</li>
                <li>The contents will be copied to the newly allocated space, in the range from the start of ptr up to the minimum of the old and new sizes</li>
                <li>If new_size > old_size, the “added” memory should not be initialized</li>
                <li>If new_size == old_size do not do anything and return ptr</li>
                <li>If ptr is NULL, then the call is equivalent to malloc(new_size), for all values of old_size and new_size</li>
                <li>If new_size is equal to zero, and ptr is not NULL, then the call is equivalent to free(ptr). Return NULL</li>
                <li>Don’t forget to free ptr when it makes sense</li>
            </ul>
        </td>
    </tr>
</table>
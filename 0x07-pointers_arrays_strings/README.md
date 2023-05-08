<h1>0x07. C - Even more pointers, arrays and strings</h1>

<table>
    <tr>
        <td><h2><strong>FILE</strong></h2></td>
        <td><h2><strong>DESCRIPTION</strong></h2></td>
    </tr>
    <tr>
        <td><h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x07-pointers_arrays_strings/main.h" target="_blank">main.h</a></h2></td>
        <td>The header file containing all functions prototypes.</td>
    </tr>
    <tr>
        <td><h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x07-pointers_arrays_strings/_putchar.c" target="_blank">_putchar.c</a></h2></td>
        <td>The putchar function file.</td>
    </tr>
    <tr>
        <td>
            <h2><a href="ttps://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x07-pointers_arrays_strings/0-main.c">0-main.c</a></h2>
            <h2><a href="ttps://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x07-pointers_arrays_strings/0-memset.c">0-memset.c</a></h2>
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
            <h2><a href="ttps://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x07-pointers_arrays_strings/1-main.c">1-main.c</a></h2>
            <h2><a href="ttps://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x07-pointers_arrays_strings/1-memcpy.c">1-memcpy.c</a></h2>
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
            <h2><a href="ttps://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x07-pointers_arrays_strings/2-main.c">2-main.c</a></h2>
            <h2><a href="ttps://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x07-pointers_arrays_strings/2-strchr.c">2-strchr.c</a></h2>
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
            <h2><a href="ttps://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x07-pointers_arrays_strings/3-main.c">3-main.c</a></h2>
            <h2><a href="ttps://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x07-pointers_arrays_strings/3-strspn.c">3-strspn.c</a></h2>
        </td>
        <td>
            <p>Write a function that gets the length of a prefix substring.</p>
            <ul>
                <li>Prototype: unsigned int _strspn(char *s, char *accept);</li>
                <li>Returns the number of bytes in the initial segment of s which consist only of bytes from accept</li>
            </ul>
        </td>
    </tr>
    <tr>
        <td>
            <h2><a href="ttps://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x07-pointers_arrays_strings/4-main.c">4-main.c</a></h2>
            <h2><a href="ttps://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x07-pointers_arrays_strings/4-strpbrk.c">4-strpbrk.c</a></h2>
        </td>
        <td>
            <p>Write a function that searches a string for any of a set of bytes.</p>
            <ul>
                <li>Prototype: char *_strpbrk(char *s, char *accept);</li>
                <li>The _strpbrk() function locates the first occurrence in the string s of any of the bytes in the string accept</li>
                <li>Returns a pointer to the byte in s that matches one of the bytes in accept, or NULL if no such byte is found</li>
            </ul>
        </td>
    </tr>
</table>
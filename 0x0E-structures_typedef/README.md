<h1>0x0E. C - Structures, typedef</h1>

<table>
    tr>
        <td><h2><strong>FILE</strong></h2></td>
        <td><h2><strong>DESCRIPTION</strong></h2></td>
    </tr>
    <tr>
        <td><h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x0E-structures_typedef/_putchar.c" target="_blank">_putchar.c</a></h2></td>
        <td>The putchar function file.</td>
    </tr>
    <tr>
        <td><h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x0E-structures_typedef/dog.h" target="_blank">dog.h</a></h2></td>
        <td>
            <p>Define a new type struct dog with the following elements:</p>
            <ul>
                <li>name, type = char *</li>
                <li>age, type = float</li>
                <li>owner, type = char *</li>
            </ul>
        </td>
    </tr>
    <tr>
        <td><h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x0E-structures_typedef/1-init_dog.c" target="_blank">1-init_dog.c</a></h2></td>
        <td>
            <p>Write a function that initialize a variable of type struct dog</p>
            <ul>
                <li>Prototype: void init_dog(struct dog *d, char *name, float age, char *owner);</li>
            </ul>
        </td>
    </tr>
    <tr>
        <td><h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x0E-structures_typedef/2-print_dog.c" target="_blank">2-print_dog.c</a></h2></td>
        <td>
            <p>Write a function that prints a struct dog</p>
            <ul>
                <li>Prototype: void print_dog(struct dog *d);</li>
                <li>You are allowed to use the standard library</li>
                <li>If an element of d is NULL, print (nil) instead of this element. (if name is NULL, print Name: (nil))</li>
                <li>If d is NULL print nothing.</li>
            </ul>
        </td>
    </tr>
    <tr>
        <td><h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x0E-structures_typedef/dog.h" target="_blank">dog.h</a></h2></td>
        <td>Define a new type dog_t as a new name for the type struct dog.</td>
    </tr>
    <tr>
        <td><h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x0E-structures_typedef/4-new_dog.c" target="_blank">4-new_dog.c</a></h2></td>
        <td>
            <p>Write a function that creates a new dog.</p>
            <ul>
                <li>Prototype: dog_t *new_dog(char *name, float age, char *owner);</li>
                <li>You have to store a copy of name and owner</li>
                <li>Return NULL if the function fails</li>
            </ul>
        </td>
    </tr>
    <tr>
        <td><h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x0E-structures_typedef/5-free_dog.c" target="_blank">5-free_dog.c</a></h2></td>
        <td>
            <p>Write a function that frees dog</p>
            <ul>
                <li>Prototype: void free_dog(dog_t *d);</li>
            </ul>
        </td>
    </tr>
</table>
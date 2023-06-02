<h1>0x12. C - Singly linked lists</h1>

<table>
    <tr>
        <td><h2><strong>FILE</strong></h2></td>
        <td><h2><strong>DESCRIPTION</strong></h2></td>
    </tr>
    <tr>
        <td><h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x12-singly_linked_lists/lists.h" target="_blank">lists.h</a></h2></td>
        <td>The header file containing all functions prototypes.</td>
    </tr>
    <tr>
        <td><h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x12-singly_linked_lists/_putchar.c" target="_blank">_putchar.c</a></h2></td>
        <td>The putchar function file.</td>
    </tr>
    <tr>
        <td>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x12-singly_linked_lists/0-main.c" target="_blank">0-main.c</a></h2>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x12-singly_linked_lists/0-print_list.c" target="_blank">0-print_list.c</a></h2>
        </td>
        <td>
            <p>Write a function that prints all the elements of a list_t list.</p>
            <ul>
                <li>Prototype: size_t print_list(const list_t *h);</li>
                <li>Return: the number of nodes</li>
                <li>If str is NULL, print [0] (nil)</li>
                <li>You are allowed to use printf</li>
            </ul>
        </td>
    </tr>
    <tr>
        <td><h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x12-singly_linked_lists/a" target="_blank">a</a></h2></td>
        <td>Executable file for Task 0</td>
    </tr>
    <tr>
        <td>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x12-singly_linked_lists/1-main.c" target="_blank">1-main.c</a></h2>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x12-singly_linked_lists/1-list_len.c" target="_blank">1-list_len.c</a></h2>
        </td>
        <td>
            <p>Write a function that returns the number of elements in a linked list_t list.</p>
            <ul>
                <li>Prototype: size_t list_len(const list_t *h);</li>
            </ul>
        </td>
    </tr>
    <tr>
        <td><h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x12-singly_linked_lists/b" target="_blank">b</a></h2></td>
        <td>Executable file for Task 1</td>
    </tr>
    <tr>
        <td>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x12-singly_linked_lists/2-main.c" target="_blank">2-main.c</a></h2>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x12-singly_linked_lists/2-add_node.c" target="_blank">2-add_node.c</a></h2>
        </td>
        <td>
            <p>Write a function that adds a new node at the beginning of a list_t list.</p>
            <ul>
                <li>Prototype: list_t *add_node(list_t **head, const char *str);</li>
                <li>Return: the address of the new element, or NULL if it failed</li>
                <li>str needs to be duplicated</li>
                <li>You are allowed to use strdup</li>
            </ul>
        </td>
    </tr>
    <tr>
        <td><h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x12-singly_linked_lists/c" target="_blank">c</a></h2></td>
        <td>Executable file for Task 2</td>
    </tr>
    <tr>
        <td>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x12-singly_linked_lists/3-main.c" target="_blank">3-main.c</a></h2>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x12-singly_linked_lists/3-add_node_end.c" target="_blank">3-add_node_end.c</a></h2>
        </td>
        <td>
            <p>Write a function that adds a new node at the end of a list_t list.</p>
            <ul>
                <li>Prototype: list_t *add_node_end(list_t **head, const char *str);</li>
                <li>Return: the address of the new element, or NULL if it failed</li>
                <li>str needs to be duplicated</li>
                <li>You are allowed to use strdup</li>
            </ul>
        </td>
    </tr>
    <tr>
        <td><h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x12-singly_linked_lists/d" target="_blank">d</a></h2></td>
        <td>Executable file for Task 3</td>
    </tr>
    <tr>
        <td>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x12-singly_linked_lists/4-main.c" target="_blank">4-main.c</a></h2>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x12-singly_linked_lists/4-free_list.c" target="_blank">4-free_list.c</a></h2>
        </td>
        <td>
            <p>Write a function that frees a list_t list.</p>
            <ul>
                <li>Prototype: void free_list(list_t *head);</li>
            </ul>
        </td>
    </tr>
    <tr>
        <td><h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x12-singly_linked_lists/e" target="_blank">e</a></h2></td>
        <td>Executable file for Task 4</td>
    </tr>
    <tr>
        <td>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x12-singly_linked_lists/100-main.c" target="_blank">100-main.c</a></h2>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x12-singly_linked_lists/100-first.c" target="_blank">100-first.c</a></h2>
        </td>
        <td>
            <p>Write a function that prints You're beat! and yet, you must allow,\nI bore my house upon my back!\n before the main function is executed.</p>
            <ul>
                <li>You are allowed to use the printf function</li>
            </ul>
        </td>
    </tr>
    <tr>
        <td><h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x12-singly_linked_lists/first" target="_blank">first</a></h2></td>
        <td>Executable file for Task 5 (Advanced Task)</td>
    </tr>
</table>
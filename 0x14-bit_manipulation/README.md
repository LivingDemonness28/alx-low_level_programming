<h1>0x14. C - Bit Manipulation</h1>

<table>
    <tr>
        <td><h2><strong>FILE</strong></h2></td>
        <td><h2><strong>DESCRIPTION</strong></h2></td>
    </tr>
    <tr>
        <td><h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x14-bit_manipulation/main.h" target="_blank">main.h</a></h2></td>
        <td>The header file containing all functions prototypes.</td>
    </tr>
    <tr>
        <td>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x14-bit_manipulation/0-main.c" target="_blank">0-main.c</a></h2>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x14-bit_manipulation/0-binary_to_uint.c" target="_blank">0-binary_to_uint.c</a></h2>
        </td>
        <td>
            <p>Write a function that converts a binary number to an unsigned int.</p>
            <ul>
                <li>Prototype: unsigned int binary_to_uint(const char *b);</li>
                <li>where b is pointing to a string of 0 and 1 chars</li>
                <li>Return: the converted number, or 0 if</li>
                <ul>
                    <li>there is one or more chars in the string b that is not 0 or 1</li>
                    <li>b is NULL</li>
                </ul>
            </ul>
        </td>
    </tr>
    <tr>
        <td><h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x14-bit_manipulation/a" target="_blank">a</a></h2></td>
        <td>Executable file for Task 0</td>
    </tr>
    <tr>
        <td>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x14-bit_manipulation/1-main.c" target="_blank">1-main.c</a></h2>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x14-bit_manipulation/1-print_binary.c" target="_blank">1-print_binary.c</a></h2>
        </td>
        <td>
            <p>Write a function that prints the binary representation of a number.</p>
            <ul>
                <li>Prototype: void print_binary(unsigned long int n);</li>
                <li>You are not allowed to use arrays</li>
                <li>You are not allowed to use malloc</li>
                <li>You are not allowed to use the % or / operators</li>
            </ul>
        </td>
    </tr>
    <tr>
        <td><h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x14-bit_manipulation/b" target="_blank">b</a></h2></td>
        <td>Executable file for Task 1</td>
    </tr>
    <tr>
        <td>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x14-bit_manipulation/2-main.c" target="_blank">2-main.c</a></h2>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x14-bit_manipulation/2-get_bit.c" target="_blank">2-get_bit.c</a></h2>
        </td>
        <td>
            <p>Write a function that returns the value of a bit at a given index.</p>
            <ul>
                <li>Prototype: int get_bit(unsigned long int n, unsigned int index);</li>
                <li>where index is the index, starting from 0 of the bit you want to get</li>
                <li>Returns: the value of the bit at index index or -1 if an error occured</li>
            </ul>
        </td>
    </tr>
    <tr>
        <td><h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x14-bit_manipulation/c" target="_blank">c</a></h2></td>
        <td>Executable file for Task 2</td>
    </tr>
    <tr>
        <td>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x14-bit_manipulation/3-main.c" target="_blank">3-main.c</a></h2>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x14-bit_manipulation/3-set_bit.c" target="_blank">3-set_bit.c</a></h2>
        </td>
        <td>
            <p>Write a function that sets the value of a bit to 1 at a given index.</p>
            <ul>
                <li>Prototype: int set_bit(unsigned long int *n, unsigned int index);</li>
                <li>where index is the index, starting from 0 of the bit you want to set</li>
                <li>Returns: 1 if it worked, or -1 if an error occurred</li>
            </ul>
        </td>
    </tr>
    <tr>
        <td><h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x14-bit_manipulation/d" target="_blank">d</a></h2></td>
        <td>Executable file for Task 3</td>
    </tr>
    <tr>
        <td>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x14-bit_manipulation/4-main.c" target="_blank">4-main.c</a></h2>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x14-bit_manipulation/4-clear_bit.c" target="_blank">4-clear_bit.c</a></h2>
        </td>
        <td>
            <p>Write a function that sets the value of a bit to 0 at a given index.</p>
            <ul>
                <li>Prototype: int clear_bit(unsigned long int *n, unsigned int index);</li>
                <li>where index is the index, starting from 0 of the bit you want to set</li>
                <li>Returns: 1 if it worked, or -1 if an error occurred</li>
            </ul>
        </td>
    </tr>
    <tr>
        <td><h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x14-bit_manipulation/e" target="_blank">e</a></h2></td>
        <td>Executable file for Task 4</td>
    </tr>
    <tr>
        <td>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x14-bit_manipulation/5-main.c" target="_blank">5-main.c</a></h2>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x14-bit_manipulation/5-flip_bits.c" target="_blank">5-flip_bits.c</a></h2>
        </td>
        <td>
            <p>Write a function that returns the number of bits you would need to flip to get from one number to another.</p>
            <ul>
                <li>Prototype: unsigned int flip_bits(unsigned long int n, unsigned long int m);</li>
                <li>You are not allowed to use the % or / operators</li>
            </ul>
        </td>
    </tr>
    <tr>
        <td><h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x14-bit_manipulation/f" target="_blank">f</a></h2></td>
        <td>Executable file for Task 5</td>
    </tr>
    <tr>
        <td>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x14-bit_manipulation/100-main.c" target="_blank">100-main.c</a></h2>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x14-bit_manipulation/100-get_endianness.c" target="_blank">100-get_endianness.c</a></h2>
        </td>
        <td>
            <p>Write a function that checks the endianness.</p>
            <ul>
                <li>Prototype: int get_endianness(void);</li>
                <li>Returns: 0 if big endian, 1 if little endian</li>
            </ul>
        </td>
    </tr>
    <tr>
        <td><h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x14-bit_manipulation/h" target="_blank">h</a></h2></td>
        <td>Executable file for Task 6</td>
    </tr>
    <tr>
        <td><h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x14-bit_manipulation/100-get_endianness.c" target="_blank">100-get_endianness.c</a></h2></td>
        <td>
            <p>Find the password for <a href="https://github.com/alx-tools/0x13.c" target="_blank">this program</a>.</p>
            <ul>
                <li>Save the password in the file 101-password</li>
                <li>Your file should contain the exact password, no new line, no extra space</li>
            </ul>
        </td>
    </tr>
</table>
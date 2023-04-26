<h1>0x02. C - Functions, nested loops</h1>

<table>
    <tr>
        <td><h2><strong>FILE</strong></h2></td>
        <td><h2><strong>DESCRIPTION</strong></h2></td>
    </tr>
    <tr>
        <td><h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x02-functions_nested_loops/main.h" target="_blank">main.h</a></h2></td>
        <td>The header file containing all functions prototypes.</td>
    </tr>
    <tr>
        <td><h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x02-functions_nested_loops/_putchar.c" target="_blank">_putchar.c</a></h2></td>
        <td>The putchar function file.</td>
    </tr>
    <tr>
        <td><h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x02-functions_nested_loops/0-putchar.c" target="_blank">0-putchar.c</a></h2></td>
        <td>
            <p>Write a program that prints _putchar, followed by a new line.</p>
            <ul>
                <li>The program should return 0</li>
            </ul>
        </td>
    </tr>
    <tr>
        <td>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x02-functions_nested_loops/1-alphabet.c" target="_blank">1-alphabet.c</a></h2>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x02-functions_nested_loops/1-main.c" target="_blank">1-main.c</a></h2>
        </td>
        <td>
            <p>Write a function that prints the alphabet, in lowercase, followed by a new line.</p>
            <ul>
                <li>Prototype: void print_alphabet(void);</li>
                <li>You can only use _putchar twice in your code</li>
            </ul>
        </td>
    </tr>
    <tr>
        <td>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x02-functions_nested_loops/2-print_alphabet.c" target="_blank">2-print_alphabet.c</a></h2>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x02-functions_nested_loops/2-main.c" target="_blank">2-main.c</a></h2>
        </td>
        <td>
            <p>Write a function that prints 10 times the alphabet, in lowercase, followed by a new line.</p>
            <ul>
                <li>Prototype: void print_alphabet_x10(void);</li>
                <li>You can only use _putchar twice in your code</li>
            </ul>
        </td>
    </tr>
    <tr>
        <td>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x02-functions_nested_loops/3-islower.c" target="_blank">3-islower.c</a></h2>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x02-functions_nested_loops/3-main.c" target="_blank">3-main.c</a></h2>
        </td>
        <td>
            <p>Write a function that checks for lowercase character.</p>
            <ul>
                <li>Prototype: int _islower(int c);</li>
                <li>Returns 1 if c is lowercase</li>
                <li>Returns 0 otherwise</li>
            </ul>
        </td>
    </tr>
    <tr>
        <td>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x02-functions_nested_loops/4-isalpha.c" target="_blank">4-isalpha.c</a></h2>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x02-functions_nested_loops/4-main.c" target="_blank">4-main.c</a></h2>
        </td>
        <td>
            <p>Write a function that checks for alphabetic character.</p>
            <ul>
                <li>Protoype: int _isalpha(int c);</li>
                <li>Returns 1 if c is a letter, lowercase or uppercase</li>
                <li>Returns 0 otherwise</li>
            </ul>
        </td>
    </tr>
    <tr>
        <td>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x02-functions_nested_loops/5-sign.c" target="_blank">5-sign.c</a></h2>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x02-functions_nested_loops/5-main.c" target="_blank">5-main.c</a></h2>
        </td>
        <td>
            <p>Write a function that prints the sign of a number.</p>
            <ul>
                <li>Prototype: int print_sign(int n);</li>
                <li>Returns 1 and prints + if n is greater than zero</li>
                <li>Returns 0 and prints 0 if n is zero</li>
                <li>Returns -1 and prints - if n is less than zero</li>
            </ul>
        </td>
    </tr>
    <tr>
        <td>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x02-functions_nested_loops/6-abs.c" target="_blank">6-abs.c</a></h2>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x02-functions_nested_loops/6-main.c" target="_blank">6-main.c</a></h2>
        </td>
        <td>
            <p>Write a function that computesthe absolute value of an integer.</p>
            <ul>
                <li>Prototype: int _abs(int);</li>
            </ul>
        </td>
    </tr>
    <tr>
        <td>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x02-functions_nested_loops/7-print_last_digit.c" target="_blank">7-print_last_digit.c</a></h2>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x02-functions_nested_loops/7-main.c" target="_blank">7-main.c</a></h2>
        </td>
        <td>
            <p>Write a function that prints the lastdigit of a number.</p>
            <ul>
                <li>Prototype: int print_last_digit(int);</li>
                <li>Returns the value of the last digit</li>
            </ul>
        </td>
    </tr>
    <tr>
        <td>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x02-functions_nested_loops/8-24-hours.c" target="_blank">8-24-hours.c</a></h2>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x02-functions_nested_loops/8-main.c" target="_blank">8-main.c</a></h2>
        </td>
        <td>
            <p>Write a function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59</p>
            <ul>
                <li>Protoype: void jack_bauer(void);</li>
                <li>You can listen to <a href="https://www.youtube.com/watch?v=btAfXqgMkPs" target="_blank">this soundtrack</a> while coding :)</li>
            </ul>
        </td>
    </tr>
    <tr>
        <td>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x02-functions_nested_loops/9-times_table.c" target="_blank">9-times_table.c</a></h2>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x02-functions_nested_loops/9-main.c" target="_blank">9-main.c</a></h2>
        </td>
        <td>
            <p>Write a function that prints the 9 times table, starting with 0.</p>
            <ul>
                <li>Prototype: void times_table(void);</li>
            </ul>
        </td>
    </tr>
    <tr>
        <td>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x02-functions_nested_loops/10-add.c" target="_blank">10-add.c</a></h2>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x02-functions_nested_loops/10-main.c" target="_blank">10-main.c</a></h2>
        </td>
        <td>
            <p>Write a function that adds two integers and returns the result.</p>
            <ul>
                <li>Prototype: int add(int, int);</li>
            </ul>
        </td>
    </tr>
    <tr>
        <td>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x02-functions_nested_loops/11-print_to_98.c" target="_blank">11-print_to_98.c</a></h2>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x02-functions_nested_loops/11-main.c" target="_blank">11-main.c</a></h2>
        </td>
        <td>
            <p>Write a function that prints all natural numbers from n to 98, followed by a new line.</p>
            <ul>
                <li>Prototype: void print_to_98(int n);</li>
                <li>Numbers must be separated by a comma, followed by a space</li>
                <li>Numbers should be printed in order</li>
                <li>The first printed number should be the number passed to your function</li>
                <li>The last printed number should be 98</li>
                <li>You are allowed to use the standard library</li>
            </ul>
        </td>
    </tr>
    <tr>
        <td><h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x02-functions_nested_loops/100=times_table.c" target="_blank">100-times_table.c</a></h2></td>
        <td>
            <p>Write a function that prints the n times table, starting with 0.</p>
            <ul>
                <li>Prototype: void print_times_table(int n);</li>
                <li>If n is greater than 15 or less than 0 the function should not print anything</li>
            </ul>
        </td>
    </tr>
    <tr>
        <td><h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x02-functions_nested_loops/101-natural.c" target="_blank">101-natural.c</a></h2></td>
        <td>
            <p>If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23. Write a program that computes and prints the sum of all the multiples of 3 or 5 below 1024 (excluded), followed by a new line.</p>
        </td>
    </tr>
        <td><h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x02-functions_nested_loops/102-fibonacci.c" target="_blank">102-fibonacci.c</a></h2></td>
        <td>
            <p>Write a program that prints the first 50 Fibonacci numbers, starting with 1 and 2, followed by a new line.</p>
            <ul>
                <li>The numbers must be separated by comma, followed by a space</li>
            </ul>
        </td>
    </tr>
    <tr>
        <td><h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x02-functions_nested_loops/103-fibonacci.c" target="_blank">103-fibonacci.c</a></h2></td>
        <td>Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be: 1, 2, 3, 5, 8, 13, 21, 34, 55, 89. By considering the terms in the Fibonacci sequence whose values do not exceed 4,000,000, write a program that finds and prints the sum of the even-valued terms, followed by a new line.</td>
    </tr>
    <tr>
        <td><h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x02-functions_nested_loops/104-fibonacci.c" target="_blank">104-fibonacci.c</a></h2></td>
        <td>
            <p>Write a program that finds and prints the first 98 Fibonacci numbers, starting with 1 and 2, followed by a new line.</p>
            <ul>
                <li>The number should be separated by comma,followed by a space</li>
            </ul>
        </td>
    </tr>
</table>
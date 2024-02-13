<h1>0x15. C - File I/O</h1>

<table>
    <tr>
        <td><h2><strong>FILE</strong></h2></td>
        <td><h2><strong>DESCRIPTION</strong></h2></td>
    </tr>
    <tr>
        <td><h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x15-file_io/main.h" target="_blank">main.h</a></h2></td>
        <td>The header file containing all functions prototypes.</td>
    </tr>
    <tr>
        <td><h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x15-file_io/_putchar.c" target="_blank">_putchar.c</a></h2></td>
        <td>The putchar function file.</td>
    </tr>
    <tr>
        <td>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x15-file_io/0-main.c" target="_blank">0-main.c</a></h2>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x15-file_io/0-read_textfile.c" target="_blank">0-read_textfile.c</a></h2>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x15-file_io/Requiescat" target="_blank">Requiescat</a></h2>
        </td>
        <td>
            <p>Write a function that reads a text file and prints it to the POSIX standard output.</p>
            <ul>
                <li>Prototype: ssize_t read_textfile(const char *filename, size_t letters);</li>
                <li>where letters is the number of letters it should read and print</li>
                <li>returns the actual number of letters it could read and print</li>
                <li>if the file can not be opened or read, return 0</li>
                <li>if filename is NULL return 0</li>
                <li>if write fails or does not write the expected amount of bytes, return 0</li>
            </ul>
        </td>
    </tr>
    <tr>
        <td><h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x15-file_io/a" target="_blank">a</a></h2></td>
        <td>Excutable file for Task 0.</td>
    </tr>
    <tr>
        <td>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x15-file_io/1-main.c" target="_blank">1-main.c</a></h2>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x15-file_io/1-create_file.c" target="_blank">1-create_file.c</a></h2>
        </td>
        <td>
            <p>Create a function that creates a file.</p>
            <ul>
                <li>Prototype: int create_file(const char *filename, char *text_content);</li>
                <li>where filename is the name of the file to create and text_content is a NULL terminated string to write to the file</li>
                <li>Returns: 1 on success, -1 on failure (file can not be created, file can not be written, write “fails”, etc…)</li>
                <li>The created file must have those permissions: rw-------. If the file already exists, do not change the permissions.</li>
                <li>if the file already exists, truncate it</li>
                <li>if filename is NULL return -1</li>
                <li>if text_content is NULL create an empty file</li>
            </ul>
        </td>
    </tr>
    <tr>
        <td><h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x15-file_io/b" target="_blank">b</a></h2></td>
        <td>Excutable file for Task 1.</td>
    </tr>
    <tr>
        <td>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x15-file_io/2-main.c" target="_blank">2-main.c</a></h2>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x15-file_io/2-append_text_to_file.c" target="_blank">2-append_text_to_file.c</a></h2>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x15-file_io/hello" target="_blank">hello</a></h2>
        </td>
        <td>
            <p>Write a function that appends text at the end of a file.</p>
            <ul>
                <li>Prototype: int append_text_to_file(const char *filename, char *text_content);</li>
                <li>where filename is the name of the file and text_content is the NULL terminated string to add at the end of the file</li>
                <li>Return: 1 on success and -1 on failure</li>
                <li>Do not create the file if it does not exist</li>
                <li>If filename is NULL return -1</li>
                <li>If text_content is NULL, do not add anything to the file. Return 1 if the file exists and -1 if the file does not exist or if you do not have the required permissions to write the file</li>
            </ul>
        </td>
    </tr>
    <tr>
        <td><h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x15-file_io/c" target="_blank">c</a></h2></td>
        <td>Excutable file for Task 2.</td>
    </tr>
    <tr>
        <td>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x15-file_io/3-cp.c" target="_blank">3-cp.c</a></h2>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x15-file_io/incitatous" target="_blank">incitatous</a></h2>
            <h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x15-file_io/Incitatous" target="_blank">Incitatous</a></h2>
        </td>
        <td>
            <p>Write a function that appends text at the end of a file.</p>
            <ul>
                <li>Usage: cp file_from file_to</li>
                <li>if the number of argument is not the correct one, exit with code 97 and print Usage: cp file_from file_to, followed by a new line, on the POSIX standard error if file_to already exists, truncate it</li>
                <li>if file_from does not exist, or if you can not read it, exit with code 98 and print Error: Can't read from file NAME_OF_THE_FILE, followed by a new line, on the POSIX standard error</li>
                <ul>
                    <li>where NAME_OF_THE_FILE is the first argument passed to your program</li>
                </ul>
                <li>if you can not create or if write to file_to fails, exit with code 99 and print Error: Can't write to NAME_OF_THE_FILE, followed by a new line, on the POSIX standard error</li>
                <ul>
                    <li>where NAME_OF_THE_FILE is the second argument passed to your program</li>
                </ul>
                <li>if you can not close a file descriptor , exit with code 100 and print Error: Can't close fd FD_VALUE, followed by a new line, on the POSIX standard error</li>
                <ul>
                    <li>where FD_VALUE is the value of the file descriptor</li>
                </ul>
                <li>Permissions of the created file: rw-rw-r--. If the file already exists, do not change the permissions</li>
                <li>You must read 1,024 bytes at a time from the file_from to make less system calls. Use a buffer</li>
                <li>You are allowed to use dprintf</li>
            </ul>
        </td>
    </tr>
    <tr>
        <td><h2><a href="https://github.com/LivingDemonness28/alx-low_level_programming/blob/master/0x15-file_io/cp" target="_blank">cp</a></h2></td>
        <td>Excutable file for Task 3.</td>
    </tr>
</table>
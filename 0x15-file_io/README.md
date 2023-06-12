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
</table>
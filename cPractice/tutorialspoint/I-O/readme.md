#I/O

The last chaper explained the standart input and output devices handled by C programming language. This chapter cover how C programmers can create, open, close text or binary files for their data storage.

A file represents a sequence of bytes, regardless of it being a text file or a binary file. C programming language provides access on high level functions as well as low level (OS level) calls to handle file on your storage devices. This chapter will take you through the important calls for file management.

## Opening Files

You can use the fopen() function to create a new file or to open an existing file. This call will initialize an object of the type FILE, which contains all the information necessary to control the stream. The prototype of this function call is as follows -

`FILE *fopen( const char * filename, const char * mode); `

Here, filename is a string literal, which you will use to name your file, and access mode can have one of the following values -

### r

Opens an existing text file for reading purpose.

### w

Opens a text file for writing. If it does not exist, then a new file is created. Here your program will start writing content from the beginning of the file.

### a

Opens a text file for writing in appending mode. If it does not exist, then a new file is created. Here your program will start appending content in the existing file content.

### r+

Opens a text file for both reading and writing.

### w+

Opens a text file for both reading and writing. It first truncates the file to zero length if it exists, otherwise creates a file if it does not exist.

### a+

Opens a text file for both reading and writing. It creates the file if it does not exist. The reading will start from the beginning but writing can only be appended.

If you are going to handle binary files, then you will use following access modes instead of the above mentioned ones −

` "rb", "wb", "ab", "rb+", "r+b", "wb+", "w+b", "ab+", "a+b" `


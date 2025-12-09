//Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.


#include <stdio.h>
int main() 
{
    FILE *fp;
    char line[200];
    char filename[] = "file.txt";
    fp = fopen(filename, "r");
    if (fp == NULL) 
    { printf("File does not exist \n", filename);
        return 1;
    }
    printf("\nContents of '%s':\n\n", filename);
    while (fgets(line, sizeof(line), fp) != NULL) 
    { printf("%s", line); }
    fclose(fp);
    return 0;
}

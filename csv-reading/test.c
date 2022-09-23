#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 1000 // constant declaration

int main()
{
    int counter = 0;
    FILE *input_file;

    char line[SIZE];
    char *token;

    input_file = fopen("msft.csv", "r");

    while (fgets(line, SIZE, input_file))
    { // lee hasta un \n
        counter++;

        if (counter == 1)
        {
            // Descomponer cada linea en tokens
            token = strtok(line, ",");
            while (token != NULL)
            {
                printf("%s\n", token);
                token = strtok(NULL, ",");
            }
        }
    }

    fclose(input_file);

    return 0;
}
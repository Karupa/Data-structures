#include <stdlib.h> // For exit() function
int main()
{
    int a[1000];
    FILE *fptr;

    if ((fptr = fopen("program.txt", "r")) == NULL)
    {
        printf("Error! opening file");
        // Program exits if file pointer returns NULL.
        exit(1);         
    }

    // reads text until newline 
    fscanf(fptr,"%[^\n]", a);

    printf("Data from the file:\n%d", a);
    fclose(fptr);
    
    return 0;
}

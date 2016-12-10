#include <stdio.h>
#include <cs50.h>

/*This program will create the half pyramid structure seen from the classic nintendo game, Mario. 
It will ask the user for a height and it will create a custom sized half pyramid based on user
input*/

//Declaring function which will create the pyramid structure
void pyramid(int height);

/*Prompts user for height and will prompt again if number is not between 1-23. 
Will exit program if 0 is input*/
int main(void)
{
    int height;
    do
    {
        printf("Height: ");
        height = GetInt();
    }
    while (height < 0 || height > 23);
    if (height == 0) {
        exit(0);
    }
    pyramid(height);
}

//Creates pyramid structure with #, spaces, and new lines.
void pyramid(int height)
{
    int hash, space_bar;
    
    for (int i = 0; i < height; i++)
    {
        for (space_bar = height - i; space_bar > 1; space_bar--)
        {
            printf(" ");
        }
        for (hash = 1; hash < (i+3); hash++)
        {
            printf("#");
        }
        printf("\n");
    }
}

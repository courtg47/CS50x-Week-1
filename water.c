#include <stdio.h>
#include <cs50.h>

/*This program will give you the number of 16 oz. bottles of water you use in your daily shower. 
Please provide number of minutes of your shower and the output will be bottles of water.*/

//declaring function that will print the number of bottles of water on screen
void PrintBottles(int minutes);

//Gets the length of shower in minutes from user and returns how many bottles of water consumed
int main(void)
{
    printf("Length of shower in minutes: ");
    int minutes = GetInt();
    PrintBottles(minutes);
}

//Calculates the number of bottles of water consumed
void PrintBottles(int minutes)
{
    printf("Bottles: %d", minutes * 12);
}

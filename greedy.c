#include <stdio.h>
#include <cs50.h>
#include <math.h>

/*This program gives you back an exact number of coins depending on how much change you have.
Please enter how much change is owed.*/

void Give_Change(int Change_Owed);

/*Asks for owed change, converts from dollars to cents, rounds, then runs through
Give change function*/
int main(void)
{
    float Change_Owed_Float;
    do 
    {
        printf("How much change is owed? $: \n");
        Change_Owed_Float = GetFloat();
    }
    while (Change_Owed_Float < 0.00);
    
    //Converting from dollars to cents, then rounding, then converting from float to int
    int Change_Owed = roundf(Change_Owed_Float * 100);

    //Running change provided through Give Change function
    Give_Change(Change_Owed);
}

//Calculates exact number of coins
void Give_Change(int Change_Owed)
{
    int Num_Coins, quarters, dimes, nickels, pennies;
    quarters = 25;
    dimes = 10;
    nickels = 5;
    pennies = 1;
    Num_Coins = 0;
    
    //Calculates number of quarters, if any
    while (Change_Owed >= 25)
    {
        Change_Owed = (Change_Owed - quarters);
        Num_Coins++;
    }
    
    //Calculates number of dimes, if any
    while (Change_Owed >= 10)
    {
        Change_Owed = (Change_Owed - dimes);
        Num_Coins++;
    } 
    
    //Calculate number of nickels, if any
    while (Change_Owed >= 5)
    {
        Change_Owed = (Change_Owed - nickels);
        Num_Coins++;
    }
            
    
    //Calculates number of pennies, if any
    while (Change_Owed >= 1)
    {
        Change_Owed = (Change_Owed - pennies);
        Num_Coins++;
    }
      
    //prints number of coins to the screen
    printf("%d\n", Num_Coins);
    

}

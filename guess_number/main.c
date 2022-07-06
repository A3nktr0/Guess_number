#include "guess_number.h"

int main(int argc, char* argv[])
{
	int random_number;
	int player_number;
	int attempts = 0;
	char play_again;


	do
	{

	printf("********** GUESS NUMBER GAME **********\n\n");
	random_number = defineRandomNumber();
	printf("Please try to guess the number wich am i thinking of !\n\n");

	do
	{
		printf("********************\n");
		printf("Enter a number : ");
		player_number = custom_fgets_number();
		

		if (player_number > random_number)
		{
			printf("Too high!\n");
			printf("********************\n\n");
		}
		else if(player_number < random_number)
		{
			printf("Too low !\n");
			printf("********************\n\n");
		}
		else
		{
			printf("\nGOOD JOB !!!\n\n");
		}
		attempts++;
	} while (player_number != random_number);

	printf("Your guess : %d \n", player_number);
	printf("Random number was : %d \n", random_number);
	printf("Attempts : %d \n\n", attempts);

	printf("Play again (y/n) : ");

	do
	{
		play_again = fgetc(stdin);
		emptyBuffer();

		if (play_again !='y' && play_again !='n')
		{
			printf("\nInput unknow, try again (y/n) : ");
		}
	} while (play_again != 'y' && play_again != 'n' && play_again != 'Y' && play_again != 'N');
	
	
	if (play_again == 'y' || play_again == 'Y') {
		printf("\nLet's go again !!! \n");
	}

	} while (play_again != 'n' && play_again != 'N');
	printf("\nEnd of the game ...\n");


	return 0;
}
/*Taylor Koth
 * Lab 3
 * CSCI 112 Fall '17
 * 9/25/17
 */

#include <stdio.h>

//The functions that will follow the main method
int get_input(void);
int is_valid(int);
void print_pattern(int);


int choice, temp;

int main(void){
	choice = get_input();
	print_pattern(choice);
	return 0;
}

int get_input(void){
	int true;
	do{
		printf("Enter an odd number less than or equal to 9 and greater than 0 > ");
		scanf("%d", &temp);
		true = is_valid(temp);
	} while (true == 0);
	return temp;
}

//This function will test the input value and return a 0 or a 1 wether
//the input value is not valid or valid, respectively
int is_valid(int x){
	if(x%2 == 0){
		printf("You have entered an even number. Please try again.\n\n");
		return 0;
	}else if(x > 9){
		printf("You have entered a number greater than 9. Please try again.\n\n");
		return 0;
	}else if(x < 1){
		printf("You have entered a number less than 1. Please try again.\n\n");
		return 0;
	}else {
		return 1;
	}

}

//This function will do the printing of the stuff
void print_pattern(int in){
	int i, j, k, l;
	for(i = 1; i = in; i+=2){
		printf("%*s", in-i, "");
		for(j = 1; j = i; j++){
			printf("%d", j);
			printf(" ");
		}
		printf("\n");
	}	

	for(k = in-2; k = 1; k-=2){
		printf("%*s", in-k, "");
		for(l = 1; l = k; l++){
			printf("%d", l);
			printf(" ");
		}
		printf("\n");
	}
}

/* The Character Classification Program, a program that counts the number of characters in various categories */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void printHeader( void ); /* function prototype */

/* function main begins program execution */
int main(void)
{
 	char *text=(char*)malloc(sizeof(char)*100);  /* define a pointer, and create a dynamic array, because the length of the value entered by the user is not known */
 	int alphabetic = 0; /* define a variable to count alphabetic characters and initialize its value as 0 */
	int digit = 0; /* define a variable to count digit characters and initialize its value as 0 */
	int lowercase_letter = 0; /* define a variable to count lowercase letter characters and initialize its value as 0 */
 	int uppercase_letter = 0; /* define a variable to count uppercase letter characters and initialize its value as 0 */
 	int punctuation = 0; /* define a variable to count punctuation characters and initialize its value as 0 */
 	int white_space = 0; /* define a variable to count white-space characters and initialize its value as 0 */
 	int special_character = 0; /* define a variable to count special characters and initialize its value as 0 */
 	int text_length; /* define text_length value based on the text length received from the user */
 	int i; /* define loop counter1 */
 	int j; /* define loop counter2 */

 
 	for( i = 0; i <= 30; ++i ){ /* initialization of the the control value as 0, identification of loop continuation condition and increment of control variable by 1 */ 
   		
   	if ( i != 15 ){ /* if counter1(i) is not equals to 15 */
			printf( "*" ); /* display the message */
	   } /* end if */
	   	
		else {  /* if counter1(i) equals to 15 */
			printf( " Welcome to The Character Classification Program " ); /* display the message */
	   } /* end else */
	    	
	} /* end for */
	
	
	printf("\n\n");
	
 	printf("->Please, enter a text: "); /* display a message to request input */
 	gets(text); /* read user-entered text and set each character as an element of the text array, respectively*/
 	printf("\n");
 
 	printf("->Your Text:'%s'\n\n", text); /* display the text entered by the user on the screen */
 	printf("*Caution!\nThe quotation marks at the beginning and end of the output text are not included in the actual content of the text you have entered."
 			"\nThey were used as markers to help you better understand the boundaries of the text.\n"); /* display the warning about a topic that may cause confusion */
 	
	printf("\n\n");
 
 	text_length = strlen(text); /* set the value of the text_length variable as the length value of the text */
 	
 	j = 0; /* initialize loop counter2(j) to 0 */
  
 	while(text[j] != '\0'){ /* loop until j. character of the text ( text[j] ) equals '\0' */
 		
 		if(isalpha(text[j])){ /* if the j. character of the text ( text[j] ) is an alphabetic character, continue with next iteration of loop */
   		alphabetic++; /* increment the value of the alphabetic by one */
   	
   		if(islower(text[j])){ /* if the j. character of the text ( text[j] ) is a lowercase letter character, continue with next iteration of loop */
 				lowercase_letter++; /* increment the value of the lowercase_letter by one */
   		} /* end if */
   	
   		else if(isupper(text[j])){ /* if the j. character of the text ( text[j] ) is an uppercase letter character, continue with next iteration of loop */
				uppercase_letter++; /* increment the value of the uppercase_letter by one */
			} /* end else if */
			
		} /* end if */
		
 		else if(isdigit(text[j])){ /* if the j. character of the text ( text[j] ) is a digit character, continue with next iteration of loop */
 			digit++; /* increment the value of the digit by one */
 		} /* end else if */
 		
 		else if(ispunct(text[j])){ /* if the j. character of the text ( text[j] ) is a punctuation character, continue with next iteration of loop */
 			punctuation++; /* increment the value of the punctuation by one */
 		} /* end else if */
 		
 		else if(isspace(text[j])){ /* if the j. character of the text ( text[j] ) is a white-space character, continue with next iteration of loop */
 			white_space++; /* increment the value of the white_space by one */
 		} /* end else if */
 		
 		else{ /* if the j. character of the text ( text[j] ) is not one of the characters types mentioned above, continue with next iteration of loop */
 			special_character++; /* increment the value of the special_character by one */
 		} /* end else */
 		
 	j++; /* increment loop counter2(j) */
 	
 	} /* end while */

 	printHeader(); /* print a header for the output */
 
	printf("\n    Text Length %28d"
			"\n    Alphabetic %29d"
			"\n    Lowercase Letter %23d"
			"\n    Uppercase Letter %23d "
			"\n    Digit %34d"
			"\n    Punctuation %28d"
			"\n    White Space %28d"
			"\n    Special Character %22d", text_length, alphabetic, lowercase_letter, uppercase_letter, digit, punctuation, white_space, special_character); /* display a message in separate lines containing the total value and class of each variable, output of the table's rows (Message1) */

	free(text); /* free up the space occupied by the specified text in the ram */
	
printf("\n\n\n");
system("pause");
return 0; /* indicates successful termination */

}/* end function main */

/* print a header for the output */
void printHeader( void )
{
   int k; /* define loop counter3 */

	printf("   Character Classification     |     Total Number\n"); /* output table column head */
 	
 	/* output line of - characters */
 	for(k=0 ; k<55 ; ++k){ /* initialization of the the control value as 0, identification of loop continuation condition and increment of control variable by 1 */ 
		printf("-"); /* display the message */
	} /* end for */
	
	printf( "\n" ); /* start new line of output */
} /* end function printHeader */ 

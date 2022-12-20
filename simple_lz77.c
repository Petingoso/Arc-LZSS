#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFFERSIZE 1024

char * search_match(char *window, char *search_buffer );
char * tokenize_match(char *match);

void update_search_buffer(char ch,char *search_buffer);
void advance_window(char * search_buffer, char * window);


int main (int argc, char *argv[])
{
	char * text= "Abc cde cfg cgh"; // gonna have the input
	char * search_buffer[BUFFERSIZE];
	char *buffer_pointer;
	int buffer_position=0;
	int offset = 0;
	int length = 0;

	for (int i = 0 ;i <= strlen(text); i++){ //loop input to check matches

		buffer_pointer = strrchr(search_buffer, text[i]); // assign to pointer
		if ( buffer_pointer != NULL){ // check if theres a match, you can remove null but looks nicer 
			buffer_position = search_buffer - &buffer_pointer; // subtract 2 pointers to find the pos, thanks stack overflow

			printf("buffer_position is %d, buffer_pointer is %d and search_buffer is %d\n", buffer_position,buffer_pointer, &search_buffer);

			offset = i - buffer_position;
			length = 1; // temporary till theres bigger matches

			printf("<%d,%d>\n",offset,length);
		}
		else {
			printf("%c\n",text[i]);	
		}

		update_search_buffer(text[i], search_buffer); // add char to known list
	}


}

void update_search_buffer(char ch,char *search_buffer){
	strncat(search_buffer, &ch, 1);
}




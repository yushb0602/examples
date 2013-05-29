/* file libprint.c */
#include "stdio.h" 
void printstring(char* str)
{
	printf("String: %s\n", str); 
}

//special function when so is loaded
void _init()
{
	printf("Inside _init()\n"); 
} 
void _fini()
{
	printf("Inside _fini()\n"); 
}

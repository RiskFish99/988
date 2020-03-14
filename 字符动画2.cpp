#include <stdio.h>					
#include <string.h>					
#include <stdlib.h>					
#include <Windows.h>    			
#include <assert.h>					
 
void go(int x, int y)
{
	COORD pos; pos.X = x - 1; pos.Y = y - 1;			
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
 
int main()
{
	system("color f0");				
	long i;								
	char FileName[100];					
	char hi[254000];					
	FILE *in;							
 
	for (i = 1; i <= 6600; i++)
	{
		sprintf(FileName,
			"C:\\Users\\86139\\Desktop\\baascii\\ba(%1d).txt", i);
 
		in = fopen(FileName, "r");
		assert(in != NULL);		
		fread(hi, 1, 254000, in);
		printf("%s\n%d", hi, i);
		go(1, 1);			
		Sleep(27);			
		fclose(in);
	}
}

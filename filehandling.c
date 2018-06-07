#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main( int argc, char * argv[] )
{
				if( argc != 2 )
				{
								printf("Enter correct file details\n");
								exit(1);
				}
				//printf("%s %s\n", argv[0], argv[1] );
				FILE *fp = fopen( argv[1], "r" );
				if( fp == NULL)
				{
								printf("File does not exist\n");
								exit(1);
				}
				char ch, str[15];
				int count = 0;
				while( fgets( str, 15, fp) != NULL )
				{
								printf("%slength of above string: %ld\n", str, strlen(str));
								count++;
				}
				//printf("%d\n", count);
		    fclose(fp);
				char s2[10];
				printf("Enter something and then press enter: ");
				scanf("%s", s2);
				ch = getchar();
				printf("Length of entered string is: %ld, %c\n", strlen(s2), ch );
				return 0;
}

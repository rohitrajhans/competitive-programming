#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main( int argc, char * argv[] )
{
			if( argc != 2)
			{
							printf("Enter correct file details\n");
							exit(1);
			}

			FILE *fp = fopen( argv[1], "r" );

			if( fp == NULL ) 
			{
							printf("File not found\n");
							exit(1);
			}

			char s[20], name[20];
			int i ;
			char ch;
			//fscanf( fp, "%s ", s);

			while( fscanf(fp, "%s ", s) != -1)
			{
						strcpy( name, s);
						fscanf(fp, "%s\n", s);
						i = atoi(s);
						printf("%s %d\n", name, i);
						//fscanf(fp, "%s ", s);
			}
			//printf("%s %d\n", name, i);
			return 0;
}

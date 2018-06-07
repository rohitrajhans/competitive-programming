#include<stdio.h>
#include<string.h>
int main()
{
				FILE *fp;
				char s[80];
				fp = fopen("PR1.txt", "w");
				if( fp==NULL )
				{
								puts("Cannot open file\n");
								return 0;
				}
				printf("\nEnter few lines of text: \n");
				while( strlen( gets(s) ) )
				{
								fputs( s, fp );
								fputs( "\n", fp );
				}
				fclose(fp);
				return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct student stud;

typedef struct student
{
				char name[10];
				int count;
				stud * next;
} stud;

stud * addSort( stud*, char* );
void printList(stud*);
stud* createElement( char *);
char name[10];

int main()
{
				int n;
				stud* list = NULL;
				scanf("%d", &n);
				getchar();
				for( int i = 0; i<n; i++)
				{
								scanf("%s", name);
								getchar();
								list = addSort( list, name);
				}
				printList(list);
				return 0;
}

stud* createElement(char name[])
{
				stud* new;
				new = malloc( sizeof(stud) );
				strcpy( new->name, name );
				return new;
}

stud *addSort( stud* list, char name[] )
{
				stud* new = createElement(name);
				if( list == NULL )
				{
								list = new;
								new->count = 1;
								new->next = NULL;
								return list;
				}

				stud* tmp = list;

				while( tmp )
				{
								if( strcmp( tmp->name, name) == 0 )
								{
												tmp->count++;
												return list;
								}
								tmp = tmp->next;
				}	

				tmp = list;

				if( strcmp( tmp->name, name ) > 0 )
				{
								list = new;
								new->next = tmp;
								new->count = 1;
								return list;
				}
				
				stud *prev;
				while( tmp->next )
				{
								prev = tmp;
								tmp = tmp->next;
								if( strcmp( tmp->name, name ) > 0 )
								{
												prev->next = new;
												new->next = tmp;
												new->count = 1;
												return list;
								}
				}

				new->next = NULL;
				tmp->next = new;
				new->count = 1;
				return list;
}

void printList( stud* list)
{
				stud* tmp = list;
				while(tmp)
				{
								printf(" %-10s \t %d\n", tmp->name, tmp->count);
								tmp = tmp->next;
				}
				return;
}

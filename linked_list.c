#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct STUDENT {
				char name[20];
				struct STUDENT* next;
} STUD;

STUD* insertElement( STUD * );
void get_inputp( STUD * );
STUD* createElement();
void printList( STUD *);
STUD* deleteListItem( STUD*, char * );
STUD* addToBegin( STUD *);

int main()
{
				STUD* start = NULL;
				printf("Enter number of inputs: ");
				int n;
				scanf("%d", &n);
				for( int i = 0; i<n; i++)
								start = insertElement( start );
				printList( start );
				start = deleteListItem( start , "burman" );
				printList( start );
				return 0;
}

STUD* createElement( )
{
				STUD * new;
				new = malloc( sizeof( STUD ) );
			  if( new != NULL )
				{
								get_inputp( new );
								new->next = NULL;
								return new;
				}
}

STUD* insertElement( STUD* start ) 
{
				STUD* new = createElement();
				if( start == NULL )
				{
								start = new;
								return new;
				}

				STUD *tmp = start;
				while( tmp->next )
								tmp = tmp->next;
				tmp->next = new;
				return start;
}
		
void get_inputp(STUD* new)
{
				printf("Enter name: ");
				scanf("%s", new->name);
				return;
}

void printList( STUD *start)
{
				STUD* tmp = start;
				while( tmp )
				{
								printf("Name: %s\n", tmp->name );
								tmp = tmp->next;
				}
				return;
}

STUD* deleteListItem ( STUD* start, char* name )
{
				if( start == NULL)
								return start;
				STUD* tmp = start;
				if( strcmp( tmp->name, name) == 0) //if item to be deleted is first item of the list, start pointer must point to second item
				{
								start = tmp->next;
								free(tmp);
								return start;
				}
				STUD* prev;
				while( tmp->next )
				{
								prev = tmp;
								tmp = tmp->next;
								if( !strcmp( tmp->name, name ) )
								{
												prev->next = tmp->next;
												free(tmp);
												return start;
								}
				}
				printf("Student with name %s not found\n", name);
				return start;
}

STUD* addToBegin( STUD* start)
{
				STUD* new = createElement();
				new->next = start;
				start = new;
				return start;
}


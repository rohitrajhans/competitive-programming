#include<stdio.h>
#include<stdlib.h>

typedef struct {
				char idno[14];
				char name[50];
				char gender;
				int age;
				char res_status;
				float cgpa;
				char emailaddress[40];
} STUD;

int populateRecords(STUD arr[]);
void generateEmail_address(char id[], char email[]);
void printRecords( STUD arr[], int);
int calculateNumbers(STUD arr[], int gender, int res);

int main()
{
				STUD s[10];
				int no_of_records = populateRecords(s);
				printRecords( s, no_of_records);
								return 0;
}

int populateRecords( STUD arr[10]) {
				char ch;
				int i = 0;
				do {
								scanf("%[^,]", arr[i].idno); getchar();
								scanf("%[^,]", arr[i].name); getchar();
								scanf("%c", &arr[i].gender); getchar();
								scanf("%d", &arr[i].age); getchar();
								scanf("%c", &arr[i].res_status); getchar();
								scanf("%f", &arr[i].cgpa);
								i++;
				} while( (ch = getchar() ) != EOF );
				int no_of_records = i-1;
				return no_of_records;
}

void printRecords( STUD arr[10], int no_records)
{
				for( int i =0; i<no_records; i++)
				{
								printf("%d:\n    %s\n    %s\n    Gender: %c\n    Age: %d\n", i+1, arr[i].idno, arr[i].name, arr[i].gender, arr[i].age);
								if(arr[i].res_status == 'H')
												printf("    Residence Status: Hostel\n");
								else
												printf("    Residence Status: Day Scholar\n");
								if(arr[i].cgpa == 0 ) 
												printf("    CGPA: Not Available\n");
								else 
												printf("    CGPA: %.2f\n", arr[i].cgpa);
				}
				return;
}

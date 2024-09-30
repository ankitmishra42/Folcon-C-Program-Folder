//Timetable Management program by using c language
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#define MAX_DAYS 6
#define MAX_SUBJECTS 5
#define MAX_NAME_LEANTH 30

struct ClassSchedule{
char teacherName[MAX_NAME_LEANTH];
};

int i;
void convertToUpper(char *str) {
    for ( i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }
}

void convertToLower(char *str) {
    for ( i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }
}

int main()
{
	struct ClassSchedule timetable[MAX_DAYS][MAX_SUBJECTS];
	struct ClassSchedule timetable2[MAX_DAYS][MAX_SUBJECTS];
	int day, subject;


	//Initialize timetable
	for(day = 0; day < MAX_DAYS; day++)
	{
		for(subject = 0; subject < MAX_SUBJECTS; subject++)
		{
	   		strcpy(timetable[day][subject].teacherName,"");
	   		strcpy(timetable2[day][subject].teacherName,"");
		}
	}
	//User Input
	int choice, i, j;

	char className[30];
	char dayy[10];
	char subjectt[10];
	char *days[] = {"monday","tuesday","wednesday","thursday","friday","saturday"};
	char *sub1[] = {"cpp","dbms","cmpf","manag","e_com"};
	char *sub2[] = {"cppm","dbmsm","cmpfm","managm","e_comm"};
	char BCA[] = "BCA";
	char MCA[] = "MCA";
	char *time[] = {"09:30","10:15","11:00","11:45","12:30"};

	do{

		printf("\nTimetable Management Menu:\n");
		printf("1. Add Class Schedule\n");
		printf("2. Display Timetable\n");
		printf("3. Exit\n");
		printf("Enter your choice: ");
		scanf("%d",&choice);
		

        switch (choice) {
        	
            case 1:
            	day = subject = 9;
            	sos7:
                printf("\nEnter Any day (Monday, Tuesday, Wednesday, Thursday, Friday, Saturday): ");
                scanf("%s", dayy);
                convertToLower(dayy);
                for(i=0; i<6; i++)
				{
					if(strcmp(days[i], dayy) == 0)
					day = i;
				}
				if(day == 9)
				{
					printf("Invalid day!\n");
					goto sos7;
				}
				
                sos0:
                printf("Enter Class Name (BCA or MCA): ");
                scanf("%s",className);
                convertToUpper(className);
                if (strcmp(className, BCA)==0)
				{
					sos8:
					printf("Enter Subject (cpp[, dbms, cmpf, manag, e_com): ");
					scanf("%s", subjectt);
  	  	  	  	  	convertToLower(subjectt);
					for(j=0; j<5; j++)
					{
						if(strcmp(sub1[j], subjectt) == 0)
							subject = j;
					}
					if(subject == 9)
					{
						printf("Invalid subject!\n");
						goto sos8;
					}
				}
            	else if(strcmp(className, MCA)==0)
				{
					sos9:
					printf("Enter Subject (cppm, dbmsm, cmpfm, managm, e_comm): ");
			  	 	scanf("%s", subjectt);
                	convertToLower(subjectt);
					for(j=0; j<5; j++)
					{
						if(strcmp(sub2[j], subjectt) == 0)
							subject = j;
					}
					if(subject == 9)
					{
						printf("Invalid subject!\n");
						goto sos9;
					}
				}
            	else
				{
					printf("Invalid Class!\n");
					goto sos0;
				}


                if (day >= 0 && day < MAX_DAYS && subject >= 0 && subject < MAX_SUBJECTS) {
                   
                    if (strcmp(className, BCA)==0)
                    {
                    	sos1:
                    	printf("Enter Teacher Name: ");
						scanf("%s", timetable[day][subject].teacherName);
						convertToLower(timetable[day][subject].teacherName);
					}
					else if(strcmp(className, MCA)==0)
                    {
                    	sos2:
						printf("Enter Teacher Name: ");
						scanf("%s", timetable2[day][subject].teacherName);
  	  	  	  	  	    convertToLower(timetable2[day][subject].teacherName);
					}


					if(strcmp(timetable[day][subject].teacherName, timetable2[day][subject].teacherName) == 0 && (strcmp(className, BCA)==0))
					{
						printf("Sorry! This Teacher Alloted Frist In MCA for %s.\n", sub2[subject]);
						goto sos1;
					}
					else if(strcmp(timetable[day][subject].teacherName, timetable2[day][subject].teacherName)== 0 && (strcmp(className, MCA)==0))
					{
						printf("Sorry! This Teacher Alloted Frist In BCA for %s.\n", sub1[subject]);
						goto sos2;
					}

                    printf("Class Schedule added successfully!\n");
                }
				else
				{
                    printf("Invalid day or subject.\n");
                }
                break;

            case 2:
				printf("\t\t\t\t\t\t\t\t\t   BCA\n");
                printf("\t\t\t\t\t\t\t\t\t Timetable\n");
                printf("\t\t\t\t\t\t\t\t\tDay/Subject\n\n\t   \t");
               
                for (subject = 0; subject < MAX_SUBJECTS; subject++)
				{
                    printf("\t%s\t\t\t",time[subject]);
                }
                printf("\n\n");

                for (day = 0; day < MAX_DAYS; day++)
				{
                    printf("%9s\t ", days[day]);               
                    for (subject = 0; subject < MAX_SUBJECTS; subject++)
					{
                        printf("%11s BY %11s \t", sub1[subject],timetable[day][subject].teacherName);
                    }
                    printf("\n\n");
                }
				printf("\n\n");
               
    			printf("\t\t\t\t\t\t\t\t\t   MCA\n");
                printf("\t\t\t\t\t\t\t\t\t Timetable\n");
                printf("\t\t\t\t\t\t\t\t\tDay/Subject\n\n\t   \t");
               
                for (subject = 0; subject < MAX_SUBJECTS; subject++)
				{
                    printf("\t%s\t\t\t",time[subject]);
                }
                printf("\n\n");

                for (day = 0; day < MAX_DAYS; day++)
				{
                    printf("%9s\t ", days[day]);               
                    for (subject = 0; subject < MAX_SUBJECTS; subject++)
					{
                        printf("%11s BY %11s \t", sub2[subject],timetable2[day][subject].teacherName);
                    }
                    printf("\n\n");
                }              
                 break;

            case 3:
                printf("\nExiting program. Goodbye!\n");
                break;

            default:
                printf("\nInvalid choice. Please try again.\n");
                break;
        }
    } while (choice != 3);

return 0;
}
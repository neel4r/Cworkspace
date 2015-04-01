/*
 * Programmer : Sunil 		Date : 20/02/2014
 *
 * Platform : Linux
 *
 * System date and time info form standard API
 * 
 */
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	struct tm *tmPtr;
	time_t currentTime;
	char date_time[21];

	// get current time
	(void) time(&currentTime);
	
	// raw time
	printf("Raw time info is %ld\n", currentTime);

	// using gmt
	tmPtr = gmtime(&currentTime);
	printf("gmtime gives \n");
	printf("Date : %02d/%02d/02d\n", tmPtr->tm_mday, tmPtr->tm_mon+1, tmPtr->tm_year);
	printf("Time : %02d:%02d:%02d\n", tmPtr->tm_hour, tmPtr->tm_min, tmPtr->tm_sec);
	
	// using ctime
	printf("ctime gives \n");
	printf("Date and time : %s", ctime(&currentTime));
	
	// using strftime 
	strftime(date_time, sizeof(date_time),"%m-%d-%Y  %I:%M%p\n", localtime(&current));
  	puts(date_time);
	return 0;

	}

/*
 * Programmer : Sunil 		Date : 21/02/2014
 *
 * Platform : Linux
 *
 * System info
 * 
 */
#include <sys/utsname.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char computerName[256];
	struct utsname uts;
	
	if(gethostname(computerName,255) != 0 || uname(&uts) < 0)
	{	
		fprintf(stderr, "Could not get host info ! \n");
		exit(1);
		}

	printf("Computer name : %s \n", computerName);
	printf("Processor info : %s \n", uts.machine);
	printf("OS : %s \n", uts.sysname);
	printf("Node name : %s \n", uts.nodename);	
	printf("Version : %s \n", uts.release);
	printf("Release : %s \n", uts.version);

	return 0;
	}

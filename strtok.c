#include <stdio.h>
#include <string.h>

main()
{
	char name[25] = "kim sang hyung 1970 6.29";
	char *p;
	
	p = strtok(name, " ");
	
	//if (p) 
	//printf("%s\n뀨뀨",p);

	while(p!=NULL) 
	{
		p = strtok(NULL, " ");

		if (p) 
		printf("%s\n",p);
	}
}
	


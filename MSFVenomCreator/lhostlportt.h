#include <stdio.h>
#define clear() printf("\033[H\033[J")



void selectLHOST()
{
	

	banner();
	printf("\n");
	printf("%s",tbl_lhost);
	scanf("%s",lhost);
	//return lhost;
}


void selectLPOST()
{
	

	banner();
	printf("\n");
	printf("%s",tbl_lport);
	scanf("%s",lport);
	//return lhost;
}

void selectIterations()
{
	
	banner();
	printf("\n");
	printf("%s",tbl_iterates);
	scanf("%s",iterates);
	//return lhost;
}

void selectNoops()
{
	
	banner();
	printf("\n");
	printf("%s",tbl_noops);
	scanf("%s",noops);
	//return lhost;
}

void selectNameFile()
{
	banner();
	printf("\n");
	printf("%s",tbl_filename);
	scanf("%s",filename);
}

char* createPayload()
{
	int selectVal	=0;
	int loopWhile	=1;

	while(loopWhile == 1)
	{
		banner();

		printf(BlueF);
		printf("\n");
		printf("%s"," [1] Yes \n");
		printf("------------------ \n");
		printf("%s"," [0] Exit "); 
		printf(white);
		printf("\n\n");
		printf( "Do you want to create payload ? [number]: ");
		scanf("%d", &selectVal);
		
		switch(selectVal) 
		{
			case 0 :
			 	return "exit";
			 	loopWhile=0;
			 	break;
      			case 1 :
				return "Yes";
			 	loopWhile=0;
			 	break;


		      	default :
			 	loopWhile=1;
		   }

	}
}

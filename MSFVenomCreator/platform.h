#include <stdio.h>
#define clear() printf("\033[H\033[J")


char * InterChoices()
{
	int selectVal	=0;
	int loopWhile	=1;

	while(loopWhile == 1)
	{
		banner();

		
		printf(white);
		printf("\n");
		printf("%s",tbl_interchoices_1);
		printf(BlueF);
		printf("%s",tbl_interchoices_2);
		printf("------------------ \n");
		printf("%s",tbl_interchoices_0); 
		printf(white);
		printf("\n");
		printf( "Select your choice [number]: ");
		scanf("%d", &selectVal);
		
		switch(selectVal) 
		{
			case 0 :
			 	loopWhile=0;
				clear();
			 	exit(0);
      			case 1 :
				return "SBS";
			 	loopWhile=0;
			 	break;
			case 2 :
				return "quick";
				loopWhile=0;
			 	break;

		      	default :
			 	loopWhile=1;
		   }

	}
}



char * selectPlatform()
{
	int selectVal	=0;
	int loopWhile	=1;

	while(loopWhile == 1)
	{
		banner();

		printf(BlueF);
		printf("\n");
		printf("%s",tbl_plateform_1);
		printf(white);
		printf("%s",tbl_plateform_2);
		printf("------------------ \n");
		printf("%s",tbl_plateform_0); 
		printf(white);
		printf("\n");
		printf( "Select plateform [number]: ");
		scanf("%d", &selectVal);
		
		switch(selectVal) 
		{
			case 0 :
			 	loopWhile=0;
				clear();
			 	exit(0);
      			case 1 :
				platform = "android";
				return "android";
			 	loopWhile=0;
			 	break;
		      	case 2 :
				platform = "windows";
				return "windows";
				loopWhile=0;
			 	break;
			case 3 :
				return "quick";
				loopWhile=0;
			 	break;

		      	default :
			 	loopWhile=1;
		   }

	}
}


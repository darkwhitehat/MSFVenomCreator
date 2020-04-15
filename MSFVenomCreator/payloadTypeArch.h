#include <stdio.h>
#define clear() printf("\033[H\033[J")

char * selectArch()
{
	int selectVal	=0;
	int loopWhile	=1;

	while(loopWhile == 1)
	{
		banner();

		printf(BlueF);
		printf("\n");
		printf(white);
		printf("%s",tbl_procfamily_1);
		printf(BlueF);
		printf("%s",tbl_procfamily_2);
		printf("------------------ \n");
		printf("%s",tbl_procfamily_0); 
		printf(white);
		printf("\n");
		printf( "Select the processor architecture [number]: ");
		scanf("%d", &selectVal);
		
		switch(selectVal) 
		{
			case 0 :
			 	loopWhile=0;
				clear();
			 	exit(0);
      			case 1 :
				return "x86";
			 	loopWhile=0;
			 	break;
		      	case 2 :
				return "x64";
				loopWhile=0;
			 	break;

		      	default :
			 	loopWhile=1;
		   }

	}
}


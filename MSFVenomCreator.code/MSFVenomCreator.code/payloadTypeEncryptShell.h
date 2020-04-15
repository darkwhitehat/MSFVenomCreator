#include <stdio.h>
#define clear() printf("\033[H\033[J")



char* selectPayloadTypeEncryptShell()
{
	int selectVal	=0;
	int loopWhile	=1;

	while(loopWhile == 1)
	{
		banner();

		printf(BlueF);
		printf("\n");
		printf("%s",tbl_entete_1);
		printf("%s",tbl_payloadwindowsEncrypSh_1);
		printf("%s",tbl_payloadwindowsEncrypSh_2);
		printf("%s",tbl_payloadwindowsEncrypSh_3);
		printf("%s",tbl_payloadwindowsEncrypSh_0);
		printf(white);
		printf("\n");
		printf("%s",tbl_payloadwindowsEncrypSh_str);
		scanf("%d", &selectVal);
		
		switch(selectVal) 
		{
			case 0 :
			 	return "exit";
			 	loopWhile=0;
			 	break;
      			case 1 :
			 	loopWhile=0;
				return payloadwindowsEncrypSh_1;
			 	break;
		      	case 2 :
				loopWhile=0;
				return payloadwindowsEncrypSh_2;
			 	break;

		      	default :
			 	loopWhile=1;
		   }

	}
}





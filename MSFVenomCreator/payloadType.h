#include <stdio.h>

#define clear() printf("\033[H\033[J")


char * selectPayloadType()
{
	int selectVal	=0;
	int loopWhile	=1;

	while(loopWhile == 1)
	{
		banner();

		printf(BlueF);
		printf("\n");
		printf("%s",tbl_payloadwindows_1);
		printf("%s",tbl_payloadwindows_2);
		printf("%s",tbl_payloadwindows_3);
		printf(white);
		printf("%s",tbl_payloadwindows_4);
		printf(BlueF);
		printf("%s",tbl_payloadwindows_5);
		printf("%s",tbl_payloadwindows_6);
		printf("%s",tbl_payloadwindows_7);
		printf("%s",tbl_payloadwindows_8);
		printf("%s",tbl_payloadwindows_9);
		printf("%s",tbl_payloadwindows_10);
		printf("------------------ \n");
		printf("%s",tbl_payloadwindows_0);
		printf(white);
		printf("\n");
		printf("%s",tbl_payloadwindows_str);
		scanf("%d", &selectVal);
		
		 switch(selectVal) 
		{
			case 0 :
			 	return "exit";
			 	loopWhile=0;
			 	break;
      			case 1 :
				return "autre";
			 	loopWhile=0;
			 	break;
		      	case 2 :
				return "dllinject";
				loopWhile=0;
			 	break;
		      	case 3 :
				return "encrypted_shell";
			 	loopWhile=0;
			 	break;
		      	case 4 :
				return "meterpreter";
			 	loopWhile=0;
			 	break;
		      	case 5 :
				return "patchupdllinject";
			 	loopWhile=0;
		 		break;
			case 6 :
				return "patchupmeterperter";
			 	loopWhile=0;
		 		break;
			case 7 :
				return "shell";
			 	loopWhile=0;
		 		break;
			case 8 :
				return "upexec";
			 	loopWhile=0;
		 		break;
			case 9 :
				return "vncinject";
			 	loopWhile=0;
		 		break;
			case 10:
				return "x64";
			 	loopWhile=0;
		 		break;

		      	default :
			 	loopWhile=1;
		   }

	
	}
}


#include <stdio.h>
#define clear() printf("\033[H\033[J")



char* selectPayloadTypeAutre()
{
	int selectVal	=0;
	int loopWhile	=1;

	while(loopWhile == 1)
	{
		banner();

		printf(BlueF);
		printf("\n");
		printf("%s",tbl_entete_1);
		printf("%s",tbl_payloadwindowsAutre_1);
		printf("%s",tbl_payloadwindowsAutre_2);
		printf("%s",tbl_payloadwindowsAutre_3);
		printf("%s",tbl_payloadwindowsAutre_4);
		printf("%s",tbl_payloadwindowsAutre_5);
		printf("%s",tbl_payloadwindowsAutre_6);
		printf("%s",tbl_payloadwindowsAutre_7);
		printf("%s",tbl_payloadwindowsAutre_8);
		printf("%s",tbl_payloadwindowsAutre_9);
		printf("%s",tbl_payloadwindowsAutre_10);
		printf("%s",tbl_payloadwindowsAutre_11);
		printf("%s",tbl_payloadwindowsAutre_12);
		printf("%s",tbl_payloadwindowsAutre_13);
		printf("%s",tbl_payloadwindowsAutre_14);
		printf("%s",tbl_payloadwindowsAutre_15);
		printf("%s",tbl_payloadwindowsAutre_0);
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
			 	loopWhile=0;
				return payloadwindowsAutre_1;
			 	break;
		      	case 2 :
				loopWhile=0;
				return payloadwindowsAutre_2;
			 	break;
		      	case 3 :
			 	loopWhile=0;
				return payloadwindowsAutre_3;
			 	break;
		      	case 4 :
			 	loopWhile=0;
				return payloadwindowsAutre_4;
			 	break;
		      	case 5 :
			 	loopWhile=0;
				return payloadwindowsAutre_5;
		 		break;
			case 6 :
			 	loopWhile=0;
				return payloadwindowsAutre_6;
		 		break;
			case 7 :
			 	loopWhile=0;
				return payloadwindowsAutre_7;
		 		break;
			case 8 :
			 	loopWhile=0;
				return payloadwindowsAutre_8;
		 		break;
			case 9 :
			 	loopWhile=0;
				return payloadwindowsAutre_9;
		 		break;
			case 10 :
			 	loopWhile=0;
				return payloadwindowsAutre_10;
		 		break;
			case 11 :
			 	loopWhile=0;
				return payloadwindowsAutre_11;
		 		break;
			case 12 :
			 	loopWhile=0;
				return payloadwindowsAutre_12;
		 		break;
			case 13 :
			 	loopWhile=0;
				return payloadwindowsAutre_13;
		 		break;
			case 14 :
			 	loopWhile=0;
				return payloadwindowsAutre_14;
		 		break;

		      	default :
			 	loopWhile=1;
		   }

	
	}
}



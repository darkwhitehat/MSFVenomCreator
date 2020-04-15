#include <stdio.h>
#define clear() printf("\033[H\033[J")


char* selectPayloadTypeUpexec()
{
	int selectVal	=0;
	int loopWhile	=1;

	while(loopWhile == 1)
	{
		banner();

		printf(BlueF);
		printf("\n");
		printf("%s",tbl_entete_1);
		printf("%s",tbl_payloadwindowsupexec_1);
		printf("%s",tbl_payloadwindowsupexec_2);
		printf("%s",tbl_payloadwindowsupexec_3);
		printf("%s",tbl_payloadwindowsupexec_4);
		printf("%s",tbl_payloadwindowsupexec_5);
		printf("%s",tbl_payloadwindowsupexec_6);
		printf("%s",tbl_payloadwindowsupexec_7);
		printf("%s",tbl_payloadwindowsupexec_8);
		printf("%s",tbl_payloadwindowsupexec_9);
		printf("%s",tbl_payloadwindowsupexec_10);
		printf("%s",tbl_payloadwindowsupexec_11);
		printf("%s",tbl_payloadwindowsupexec_12);
		printf("%s",tbl_payloadwindowsupexec_13);
		printf("%s",tbl_payloadwindowsupexec_14);
		printf("%s",tbl_payloadwindowsupexec_15);
		printf("%s",tbl_payloadwindowsupexec_16);
		printf("%s",tbl_payloadwindowsupexec_17);
		printf("%s",tbl_payloadwindowsupexec_18);
		printf("%s",tbl_payloadwindowsupexec_19);
		printf("%s",tbl_payloadwindowsupexec_20);
		printf("%s",tbl_payloadwindowsupexec_21);
		printf("%s",tbl_payloadwindowsupexec_0);
		printf(white);
		printf("\n");
		printf("%s",tbl_payloadwindowsupexec_str);
		scanf("%d", &selectVal);
		
		 switch(selectVal) 
		{
			case 0 :
			 	return "exit";
			 	loopWhile=0;
			 	break;
      			case 1 :
			 	loopWhile=0;
				return payloadwindowsupexec_1;
			 	break;
		      	case 2 :
				loopWhile=0;
				return payloadwindowsupexec_2;
			 	break;
		      	case 3 :
			 	loopWhile=0;
				return payloadwindowsupexec_3;
			 	break;
		      	case 4 :
			 	loopWhile=0;
				return payloadwindowsupexec_4;
			 	break;
		      	case 5 :
			 	loopWhile=0;
				return payloadwindowsupexec_5;
		 		break;
			case 6 :
			 	loopWhile=0;
				return payloadwindowsupexec_6;
		 		break;
			case 7 :
			 	loopWhile=0;
				return payloadwindowsupexec_7;
		 		break;
			case 8 :
			 	loopWhile=0;
				return payloadwindowsupexec_8;
		 		break;
			case 9 :
			 	loopWhile=0;
				return payloadwindowsupexec_9;
		 		break;
			case 10 :
			 	loopWhile=0;
				return payloadwindowsupexec_10;
		 		break;
			case 11 :
			 	loopWhile=0;
				return payloadwindowsupexec_11;
		 		break;
			case 12 :
			 	loopWhile=0;
				return payloadwindowsupexec_12;
		 		break;
			case 13 :
			 	loopWhile=0;
				return payloadwindowsupexec_13;
		 		break;
			case 14 :
			 	loopWhile=0;
				return payloadwindowsupexec_14;
		 		break;
			case 15 :
			 	loopWhile=0;
				return payloadwindowsupexec_15;
		 		break;
			case 16 :
			 	loopWhile=0;
				return payloadwindowsupexec_16;
		 		break;
			case 17 :
			 	loopWhile=0;
				return payloadwindowsupexec_17;
		 		break;
			case 18 :
			 	loopWhile=0;
				return payloadwindowsupexec_18;
		 		break;
			case 19 :
			 	loopWhile=0;
				return payloadwindowsupexec_19;
		 		break;
			case 20 :
			 	loopWhile=0;
				return payloadwindowsupexec_20;
		 		break;
	
		      	default :
			 	loopWhile=1;
		   }

	
	}
}


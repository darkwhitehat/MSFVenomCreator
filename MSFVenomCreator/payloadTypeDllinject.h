#include <stdio.h>
#define clear() printf("\033[H\033[J")


char* selectPayloadTypeDllinject()
{
	int selectVal	=0;
	int loopWhile	=1;

	while(loopWhile == 1)
	{
		banner();

		printf(BlueF);
		printf("\n");
		printf("%s",tbl_entete_1);
		printf("%s",tbl_payloadwindowsDllinjec_1);
		printf("%s",tbl_payloadwindowsDllinjec_2);
		printf("%s",tbl_payloadwindowsDllinjec_3);
		printf("%s",tbl_payloadwindowsDllinjec_4);
		printf("%s",tbl_payloadwindowsDllinjec_5);
		printf("%s",tbl_payloadwindowsDllinjec_6);
		printf("%s",tbl_payloadwindowsDllinjec_7);
		printf("%s",tbl_payloadwindowsDllinjec_8);
		printf("%s",tbl_payloadwindowsDllinjec_9);
		printf("%s",tbl_payloadwindowsDllinjec_10);
		printf("%s",tbl_payloadwindowsDllinjec_11);
		printf("%s",tbl_payloadwindowsDllinjec_12);
		printf("%s",tbl_payloadwindowsDllinjec_13);
		printf("%s",tbl_payloadwindowsDllinjec_14);
		printf("%s",tbl_payloadwindowsDllinjec_15);
		printf("%s",tbl_payloadwindowsDllinjec_16);
		printf("%s",tbl_payloadwindowsDllinjec_17);
		printf("%s",tbl_payloadwindowsDllinjec_18);
		printf("%s",tbl_payloadwindowsDllinjec_19);
		printf("%s",tbl_payloadwindowsDllinjec_20);
		printf("%s",tbl_payloadwindowsDllinjec_21);
		printf("%s",tbl_payloadwindowsDllinjec_22);
		printf("%s",tbl_payloadwindowsDllinjec_23);
		printf("%s",tbl_payloadwindowsDllinjec_24);
		printf("%s",tbl_payloadwindowsDllinjec_0);
		printf(white);
		printf("\n");
		printf("%s",tbl_payloadwindowsDllinjec_str);
		scanf("%d", &selectVal);
		
		 switch(selectVal) 
		{
			case 0 :
			 	return "exit";
			 	loopWhile=0;
			 	break;
      			case 1 :
			 	loopWhile=0;
				return payloadwindowsDllinjec_1;
			 	break;
		      	case 2 :
				loopWhile=0;
				return payloadwindowsDllinjec_2;
			 	break;
		      	case 3 :
			 	loopWhile=0;
				return payloadwindowsDllinjec_3;
			 	break;
		      	case 4 :
			 	loopWhile=0;
				return payloadwindowsDllinjec_4;
			 	break;
		      	case 5 :
			 	loopWhile=0;
				return payloadwindowsDllinjec_5;
		 		break;
			case 6 :
			 	loopWhile=0;
				return payloadwindowsDllinjec_6;
		 		break;
			case 7 :
			 	loopWhile=0;
				return payloadwindowsDllinjec_7;
		 		break;
			case 8 :
			 	loopWhile=0;
				return payloadwindowsDllinjec_8;
		 		break;
			case 9 :
			 	loopWhile=0;
				return payloadwindowsDllinjec_9;
		 		break;
			case 10 :
			 	loopWhile=0;
				return payloadwindowsDllinjec_10;
		 		break;
			case 11 :
			 	loopWhile=0;
				return payloadwindowsDllinjec_11;
		 		break;
			case 12 :
			 	loopWhile=0;
				return payloadwindowsDllinjec_12;
		 		break;
			case 13 :
			 	loopWhile=0;
				return payloadwindowsDllinjec_13;
		 		break;
			case 14 :
			 	loopWhile=0;
				return payloadwindowsDllinjec_14;
		 		break;
			case 15 :
			 	loopWhile=0;
				return payloadwindowsDllinjec_15;
		 		break;
			case 16 :
			 	loopWhile=0;
				return payloadwindowsDllinjec_16;
		 		break;
			case 17 :
			 	loopWhile=0;
				return payloadwindowsDllinjec_17;
		 		break;
			case 18 :
			 	loopWhile=0;
				return payloadwindowsDllinjec_18;
		 		break;
			case 19 :
			 	loopWhile=0;
				return payloadwindowsDllinjec_19;
		 		break;
			case 20 :
			 	loopWhile=0;
				return payloadwindowsDllinjec_20;
		 		break;
			case 21 :
			 	loopWhile=0;
				return payloadwindowsDllinjec_21;
		 		break;
			case 22 :
			 	loopWhile=0;
				return payloadwindowsDllinjec_22;
		 		break;
			case 23 :
			 	loopWhile=0;
				return payloadwindowsDllinjec_23;
		 		break;
		      	default :
			 	loopWhile=1;
		   }

	
	}
}


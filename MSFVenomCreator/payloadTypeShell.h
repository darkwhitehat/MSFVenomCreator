#include <stdio.h>
#define clear() printf("\033[H\033[J")


char* selectPayloadTypeSell()
{
	int selectVal	=0;
	int loopWhile	=1;

	while(loopWhile == 1)
	{
		banner();

		printf(BlueF);
		printf("\n");
		printf("%s",tbl_entete_1);
		printf("%s",tbl_payloadwindowsshell_1);
		printf("%s",tbl_payloadwindowsshell_2);
		printf("%s",tbl_payloadwindowsshell_3);
		printf("%s",tbl_payloadwindowsshell_4);
		printf("%s",tbl_payloadwindowsshell_5);
		printf("%s",tbl_payloadwindowsshell_6);
		printf("%s",tbl_payloadwindowsshell_7);
		printf("%s",tbl_payloadwindowsshell_8);
		printf("%s",tbl_payloadwindowsshell_9);
		printf("%s",tbl_payloadwindowsshell_10);
		printf("%s",tbl_payloadwindowsshell_11);
		printf("%s",tbl_payloadwindowsshell_12);
		printf("%s",tbl_payloadwindowsshell_13);
		printf("%s",tbl_payloadwindowsshell_14);
		printf("%s",tbl_payloadwindowsshell_15);
		printf("%s",tbl_payloadwindowsshell_16);
		printf("%s",tbl_payloadwindowsshell_17);
		printf("%s",tbl_payloadwindowsshell_18);
		printf("%s",tbl_payloadwindowsshell_19);
		printf("%s",tbl_payloadwindowsshell_20);
		printf("%s",tbl_payloadwindowsshell_21);
		printf("%s",tbl_payloadwindowsshell_22);
		printf("%s",tbl_payloadwindowsshell_23);
		printf("%s",tbl_payloadwindowsshell_24);
		printf("%s",tbl_payloadwindowsshell_25);
		printf("%s",tbl_payloadwindowsshell_0);
		printf(white);
		printf("\n");
		printf("%s",tbl_payloadwindowsshell_str);
		scanf("%d", &selectVal);
		
		 switch(selectVal) 
		{
			case 0 :
			 	return "exit";
			 	loopWhile=0;
			 	break;
      			case 1 :
			 	loopWhile=0;
				return payloadwindowsshell_1;
			 	break;
		      	case 2 :
				loopWhile=0;
				return payloadwindowsshell_2;
			 	break;
		      	case 3 :
			 	loopWhile=0;
				return payloadwindowsshell_3;
			 	break;
		      	case 4 :
			 	loopWhile=0;
				return payloadwindowsshell_4;
			 	break;
		      	case 5 :
			 	loopWhile=0;
				return payloadwindowsshell_5;
		 		break;
			case 6 :
			 	loopWhile=0;
				return payloadwindowsshell_6;
		 		break;
			case 7 :
			 	loopWhile=0;
				return payloadwindowsshell_7;
		 		break;
			case 8 :
			 	loopWhile=0;
				return payloadwindowsshell_8;
		 		break;
			case 9 :
			 	loopWhile=0;
				return payloadwindowsshell_9;
		 		break;
			case 10 :
			 	loopWhile=0;
				return payloadwindowsshell_10;
		 		break;
			case 11 :
			 	loopWhile=0;
				return payloadwindowsshell_11;
		 		break;
			case 12 :
			 	loopWhile=0;
				return payloadwindowsshell_12;
		 		break;
			case 13 :
			 	loopWhile=0;
				return payloadwindowsshell_13;
		 		break;
			case 14 :
			 	loopWhile=0;
				return payloadwindowsshell_14;
		 		break;
			case 15 :
			 	loopWhile=0;
				return payloadwindowsshell_15;
		 		break;
			case 16 :
			 	loopWhile=0;
				return payloadwindowsshell_16;
		 		break;
			case 17 :
			 	loopWhile=0;
				return payloadwindowsshell_17;
		 		break;
			case 18 :
			 	loopWhile=0;
				return payloadwindowsshell_18;
		 		break;
			case 19 :
			 	loopWhile=0;
				return payloadwindowsshell_19;
		 		break;
			case 20 :
			 	loopWhile=0;
				return payloadwindowsshell_20;
		 		break;
			case 21 :
			 	loopWhile=0;
				return payloadwindowsshell_21;
		 		break;
			case 22 :
			 	loopWhile=0;
				return payloadwindowsshell_22;
		 		break;
			case 23 :
			 	loopWhile=0;
				return payloadwindowsshell_23;
		 		break;
			case 24 :
			 	loopWhile=0;
				return payloadwindowsshell_24;
		 		break;
		      	default :
			 	loopWhile=1;
		   }

	
	}
}


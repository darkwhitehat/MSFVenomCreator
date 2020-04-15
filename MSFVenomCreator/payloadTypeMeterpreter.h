#include <stdio.h>
#define clear() printf("\033[H\033[J")


char* selectPayloadTypeMeterpreter()
{
	int selectVal	=0;
	int loopWhile	=1;

	while(loopWhile == 1)
	{
		banner();

		printf(BlueF);
		printf("\n");
		printf("%s",tbl_entete_1);
		printf("%s",tbl_payloadwindowsMeterpreter_1);
		printf("%s",tbl_payloadwindowsMeterpreter_2);
		printf("%s",tbl_payloadwindowsMeterpreter_3);
		printf("%s",tbl_payloadwindowsMeterpreter_4);
		printf("%s",tbl_payloadwindowsMeterpreter_5);
		printf("%s",tbl_payloadwindowsMeterpreter_6);
		printf("%s",tbl_payloadwindowsMeterpreter_7);
		printf("%s",tbl_payloadwindowsMeterpreter_8);
		printf("%s",tbl_payloadwindowsMeterpreter_9);
		printf("%s",tbl_payloadwindowsMeterpreter_10);
		printf("%s",tbl_payloadwindowsMeterpreter_11);
		printf(white);
		printf("%s",tbl_payloadwindowsMeterpreter_12);
		printf(BlueF);
		printf("%s",tbl_payloadwindowsMeterpreter_13);
		printf(white);
		printf("%s",tbl_payloadwindowsMeterpreter_14);
		printf(BlueF);
		printf("%s",tbl_payloadwindowsMeterpreter_15);
		printf("%s",tbl_payloadwindowsMeterpreter_16);
		printf("%s",tbl_payloadwindowsMeterpreter_17);
		printf("%s",tbl_payloadwindowsMeterpreter_18);
		printf("%s",tbl_payloadwindowsMeterpreter_19);
		printf(white);
		printf("%s",tbl_payloadwindowsMeterpreter_20);
		printf(BlueF);
		printf("%s",tbl_payloadwindowsMeterpreter_21);
		printf("%s",tbl_payloadwindowsMeterpreter_22);
		printf("%s",tbl_payloadwindowsMeterpreter_23);
		printf("%s",tbl_payloadwindowsMeterpreter_24);
		printf("%s",tbl_payloadwindowsMeterpreter_25);
		printf("%s",tbl_payloadwindowsMeterpreter_26);
		printf("%s",tbl_payloadwindowsMeterpreter_27);
		printf("%s",tbl_payloadwindowsMeterpreter_28);
		printf("%s",tbl_payloadwindowsMeterpreter_0);
		printf(white);
		printf("\n");
		printf("%s",tbl_payloadwindowsMeterpreter_str);
		scanf("%d", &selectVal);
		
		 switch(selectVal) 
		{
			case 0 :
			 	return "exit";
			 	loopWhile=0;
			 	break;
      			case 1 :
			 	loopWhile=0;
				return payloadwindowsMeterpreter_1;
			 	break;
		      	case 2 :
				loopWhile=0;
				return payloadwindowsMeterpreter_2;
			 	break;
		      	case 3 :
			 	loopWhile=0;
				return payloadwindowsMeterpreter_3;
			 	break;
		      	case 4 :
			 	loopWhile=0;
				return payloadwindowsMeterpreter_4;
			 	break;
		      	case 5 :
			 	loopWhile=0;
				return payloadwindowsMeterpreter_5;
		 		break;
			case 6 :
			 	loopWhile=0;
				return payloadwindowsMeterpreter_6;
		 		break;
			case 7 :
			 	loopWhile=0;
				return payloadwindowsMeterpreter_7;
		 		break;
			case 8 :
			 	loopWhile=0;
				return payloadwindowsMeterpreter_8;
		 		break;
			case 9 :
			 	loopWhile=0;
				return payloadwindowsMeterpreter_9;
		 		break;
			case 10 :
			 	loopWhile=0;
				return payloadwindowsMeterpreter_10;
		 		break;
			case 11 :
			 	loopWhile=0;
				return payloadwindowsMeterpreter_11;
		 		break;
			case 12 :
			 	loopWhile=0;
				return payloadwindowsMeterpreter_12;
		 		break;
			case 13 :
			 	loopWhile=0;
				return payloadwindowsMeterpreter_13;
		 		break;
			case 14 :
			 	loopWhile=0;
				return payloadwindowsMeterpreter_14;
		 		break;
			case 15 :
			 	loopWhile=0;
				return payloadwindowsMeterpreter_15;
		 		break;
			case 16 :
			 	loopWhile=0;
				return payloadwindowsMeterpreter_16;
		 		break;
			case 17 :
			 	loopWhile=0;
				return payloadwindowsMeterpreter_17;
		 		break;
			case 18 :
			 	loopWhile=0;
				return payloadwindowsMeterpreter_18;
		 		break;
			case 19 :
			 	loopWhile=0;
				return payloadwindowsMeterpreter_19;
		 		break;
			case 20 :
			 	loopWhile=0;
				return payloadwindowsMeterpreter_20;
		 		break;
			case 21 :
			 	loopWhile=0;
				return payloadwindowsMeterpreter_21;
		 		break;
			case 22 :
			 	loopWhile=0;
				return payloadwindowsMeterpreter_22;
		 		break;
			case 23 :
			 	loopWhile=0;
				return payloadwindowsMeterpreter_23;
		 		break;
			case 24 :
			 	loopWhile=0;
				return payloadwindowsMeterpreter_24;
		 		break;
			case 25 :
			 	loopWhile=0;
				return payloadwindowsMeterpreter_25;
		 		break;
			case 26 :
			 	loopWhile=0;
				return payloadwindowsMeterpreter_26;
		 		break;
			case 27 :
			 	loopWhile=0;
				return payloadwindowsMeterpreter_27;
		 		break;
			
		      	default :
			 	loopWhile=1;
		   }

	
	}
}


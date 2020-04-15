#include <stdio.h>
#define clear() printf("\033[H\033[J")


char* selectPayloadTypePatchupMeterpreter()
{
	int selectVal	=0;
	int loopWhile	=1;

	while(loopWhile == 1)
	{
		banner();

		printf(BlueF);
		printf("\n");
		printf("%s",tbl_entete_1);
		printf("%s",tbl_payloadwindowspatchupmeterpreter_1);
		printf("%s",tbl_payloadwindowspatchupmeterpreter_2);
		printf("%s",tbl_payloadwindowspatchupmeterpreter_3);
		printf("%s",tbl_payloadwindowspatchupmeterpreter_4);
		printf("%s",tbl_payloadwindowspatchupmeterpreter_5);
		printf("%s",tbl_payloadwindowspatchupmeterpreter_6);
		printf("%s",tbl_payloadwindowspatchupmeterpreter_7);
		printf("%s",tbl_payloadwindowspatchupmeterpreter_8);
		printf("%s",tbl_payloadwindowspatchupmeterpreter_9);
		printf("%s",tbl_payloadwindowspatchupmeterpreter_10);
		printf("%s",tbl_payloadwindowspatchupmeterpreter_11);
		printf("%s",tbl_payloadwindowspatchupmeterpreter_12);
		printf("%s",tbl_payloadwindowspatchupmeterpreter_13);
		printf("%s",tbl_payloadwindowspatchupmeterpreter_14);
		printf("%s",tbl_payloadwindowspatchupmeterpreter_15);
		printf("%s",tbl_payloadwindowspatchupmeterpreter_16);
		printf("%s",tbl_payloadwindowspatchupmeterpreter_17);
		printf("%s",tbl_payloadwindowspatchupmeterpreter_18);
		printf("%s",tbl_payloadwindowspatchupmeterpreter_19);
		printf("%s",tbl_payloadwindowspatchupmeterpreter_20);
		printf("%s",tbl_payloadwindowspatchupmeterpreter_0);
		printf(white);
		printf("\n");
		printf("%s",tbl_payloadwindowspatchupmeterpreter_str);
		scanf("%d", &selectVal);
		
		 switch(selectVal) 
		{
			case 0 :
			 	return "exit";
			 	loopWhile=0;
			 	break;
      			case 1 :
			 	loopWhile=0;
				return payloadwindowspatchupmeterpreter_1;
			 	break;
		      	case 2 :
				loopWhile=0;
				return payloadwindowspatchupmeterpreter_2;
			 	break;
		      	case 3 :
			 	loopWhile=0;
				return payloadwindowspatchupmeterpreter_3;
			 	break;
		      	case 4 :
			 	loopWhile=0;
				return payloadwindowspatchupmeterpreter_4;
			 	break;
		      	case 5 :
			 	loopWhile=0;
				return payloadwindowspatchupmeterpreter_5;
		 		break;
			case 6 :
			 	loopWhile=0;
				return payloadwindowspatchupmeterpreter_6;
		 		break;
			case 7 :
			 	loopWhile=0;
				return payloadwindowspatchupmeterpreter_7;
		 		break;
			case 8 :
			 	loopWhile=0;
				return payloadwindowspatchupmeterpreter_8;
		 		break;
			case 9 :
			 	loopWhile=0;
				return payloadwindowspatchupmeterpreter_9;
		 		break;
			case 10 :
			 	loopWhile=0;
				return payloadwindowspatchupmeterpreter_10;
		 		break;
			case 11 :
			 	loopWhile=0;
				return payloadwindowspatchupmeterpreter_11;
		 		break;
			case 12 :
			 	loopWhile=0;
				return payloadwindowspatchupmeterpreter_12;
		 		break;
			case 13 :
			 	loopWhile=0;
				return payloadwindowspatchupmeterpreter_13;
		 		break;
			case 14 :
			 	loopWhile=0;
				return payloadwindowspatchupmeterpreter_14;
		 		break;
			case 15 :
			 	loopWhile=0;
				return payloadwindowspatchupmeterpreter_15;
		 		break;
			case 16 :
			 	loopWhile=0;
				return payloadwindowspatchupmeterpreter_16;
		 		break;
			case 17 :
			 	loopWhile=0;
				return payloadwindowspatchupmeterpreter_17;
		 		break;
			case 18 :
			 	loopWhile=0;
				return payloadwindowspatchupmeterpreter_18;
		 		break;
			case 19 :
			 	loopWhile=0;
				return payloadwindowspatchupmeterpreter_19;
		 		break;
		      	default :
			 	loopWhile=1;
		   }

	
	}
}


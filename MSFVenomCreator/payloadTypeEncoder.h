#include <stdio.h>
#define clear() printf("\033[H\033[J")



char* selectPayloadEncoder()
{
	int selectVal	=0;
	int loopWhile	=1;

	while(loopWhile == 1)
	{
		banner();

		printf(BlueF);
		printf("\n");
		printf("%s",tbl_payloadEncodersentete);
		printf("%s",tbl_payloadEncoder_1);
		printf("%s",tbl_payloadEncoder_2);
		printf("%s",tbl_payloadEncoder_3);
		printf("%s",tbl_payloadEncoder_4);
		printf("%s",tbl_payloadEncoder_5);
		printf("%s",tbl_payloadEncoder_6);
		printf("%s",tbl_payloadEncoder_7);
		printf("%s",tbl_payloadEncoder_8);
		printf("%s",tbl_payloadEncoder_9);
		printf("%s",tbl_payloadEncoder_10);
		printf("%s",tbl_payloadEncoder_11);
		printf("%s",tbl_payloadEncoder_12);
		printf("%s",tbl_payloadEncoder_13);
		printf("%s",tbl_payloadEncoder_14);
		printf("%s",tbl_payloadEncoder_15);
		printf("%s",tbl_payloadEncoder_16);
		printf("%s",tbl_payloadEncoder_17);
		printf("%s",tbl_payloadEncoder_18);
		printf("%s",tbl_payloadEncoder_19);
		printf("%s",tbl_payloadEncoder_20);
		printf("%s",tbl_payloadEncoder_21);
		printf("%s",tbl_payloadEncoder_22);
		printf("%s",tbl_payloadEncoder_23);
		printf("%s",tbl_payloadEncoder_24);
		printf(white);
		printf("%s",tbl_payloadEncoder_25);
		printf(BlueF);
		printf("%s",tbl_payloadEncoder_26);
		printf("%s",tbl_payloadEncoder_27);
		printf("%s",tbl_payloadEncoder_28);
		printf("%s",tbl_payloadEncoder_29);
		printf("%s",tbl_payloadEncoder_0);
		printf(white);
		printf("\n");
		printf("%s",tbl_payloadEncoder_str);
		scanf("%d", &selectVal);
		
		switch(selectVal) 
		{
			case 0 :
			 	return "exit";
			 	loopWhile=0;
			 	break;
      			case 1 :
			 	loopWhile=0;
				return payloadEncoder_1;
			 	break;
		      	case 2 :
				loopWhile=0;
				return payloadEncoder_2;
			 	break;
		      	case 3 :
				loopWhile=0;
				return payloadEncoder_3;
			 	break;
		      	case 4 :
				loopWhile=0;
				return payloadEncoder_4;
			 	break;
		      	case 5 :
				loopWhile=0;
				return payloadEncoder_5;
			 	break;
		      	case 6 :
				loopWhile=0;
				return payloadEncoder_6;
			 	break;
		      	case 7 :
				loopWhile=0;
				return payloadEncoder_7;
			 	break;
		      	case 8 :
				loopWhile=0;
				return payloadEncoder_8;
			 	break;
		      	case 9 :
				loopWhile=0;
				return payloadEncoder_9;
			 	break;
		      	case 10 :
				loopWhile=0;
				return payloadEncoder_10;
			 	break;
		      	case 11 :
				loopWhile=0;
				return payloadEncoder_11;
			 	break;
		      	case 12 :
				loopWhile=0;
				return payloadEncoder_12;
			 	break;
		      	case 13 :
				loopWhile=0;
				return payloadEncoder_13;
			 	break;
		      	case 14 :
				loopWhile=0;
				return payloadEncoder_14;
			 	break;
		      	case 15 :
				loopWhile=0;
				return payloadEncoder_15;
			 	break;
		      	case 16 :
				loopWhile=0;
				return payloadEncoder_16;
			 	break;
		      	case 17 :
				loopWhile=0;
				return payloadEncoder_17;
			 	break;
		      	case 18 :
				loopWhile=0;
				return payloadEncoder_18;
			 	break;
		      	case 19 :
				loopWhile=0;
				return payloadEncoder_19;
			 	break;
		      	case 20 :
				loopWhile=0;
				return payloadEncoder_20;
			 	break;
		      	case 21 :
				loopWhile=0;
				return payloadEncoder_21;
			 	break;
		      	case 22 :
				loopWhile=0;
				return payloadEncoder_22;
			 	break;
		      	case 23 :
				loopWhile=0;
				return payloadEncoder_23;
			 	break;
		      	case 24 :
				loopWhile=0;
				return payloadEncoder_24;
			 	break;
		      	case 25 :
				loopWhile=0;
				return payloadEncoder_25;
			 	break;
		      	case 26 :
				loopWhile=0;
				return payloadEncoder_26;
			 	break;
		      	case 27 :
				loopWhile=0;
				return payloadEncoder_27;
			 	break;
		      	case 28 :
				loopWhile=0;
				return payloadEncoder_28;
			 	break;

		      	default :
			 	loopWhile=1;
		   }

	}
}













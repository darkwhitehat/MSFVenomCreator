#include <stdio.h>
#define clear() printf("\033[H\033[J")

char * selectExeformats()
{
	int selectVal	=0;
	int loopWhile	=1;

	while(loopWhile == 1)
	{
		banner();

		printf(BlueF);
		printf("\n");
		printf("%s",tbl_payloadExeFormatsentete);
		printf("%s",tbl_payloadExeFormats_1);
		printf("%s",tbl_payloadExeFormats_2);
		printf("%s",tbl_payloadExeFormats_3);
		printf("%s",tbl_payloadExeFormats_4);
		printf("%s",tbl_payloadExeFormats_5);
		printf(white);
		printf("%s",tbl_payloadExeFormats_6);
		printf("%s",tbl_payloadExeFormats_7);
		printf(BlueF);
		printf("%s",tbl_payloadExeFormats_8);
		printf("%s",tbl_payloadExeFormats_9);
		printf("%s",tbl_payloadExeFormats_10);
		printf("%s",tbl_payloadExeFormats_11);
		printf("%s",tbl_payloadExeFormats_12);
		printf("%s",tbl_payloadExeFormats_13);
		printf(white);
		printf("%s",tbl_payloadExeFormats_14);
		printf("%s",tbl_payloadExeFormats_15);
		printf(BlueF);
		printf("%s",tbl_payloadExeFormats_16);
		printf("%s",tbl_payloadExeFormats_17);
		printf("%s",tbl_payloadExeFormats_18);
		printf("%s",tbl_payloadExeFormats_19);
		printf("%s",tbl_payloadExeFormats_20);
		printf("%s",tbl_payloadExeFormats_21);
		printf("%s",tbl_payloadExeFormats_22);
		printf("%s",tbl_payloadExeFormats_23);
		printf("%s",tbl_payloadExeFormats_24);
		printf("%s",tbl_payloadExeFormats_25);
		printf("%s",tbl_payloadExeFormats_26);
		printf(white);
		printf("%s",tbl_payloadExeFormats_27);
		printf(BlueF);
		printf("%s",tbl_payloadExeFormats_28);
		printf("%s",tbl_payloadExeFormats_29); 
		printf("%s",tbl_payloadExeFormats_31); 
		printf("%s",tbl_payloadExeFormats_32); 
		printf("%s",tbl_payloadExeFormats_33); 
		printf("%s",tbl_payloadExeFormats_34); 
		printf("%s",tbl_payloadExeFormats_35); 
		printf("%s",tbl_payloadExeFormats_36); 
		printf("%s",tbl_payloadExeFormats_37); 
		printf("%s",tbl_payloadExeFormats_38); 
		printf(white);
		printf("%s",tbl_payloadExeFormats_39); 
		printf(BlueF);
		printf("%s",tbl_payloadExeFormats_40); 
		printf("%s",tbl_payloadExeFormats_41); 
		printf("%s",tbl_payloadExeFormats_42); 
		printf("%s",tbl_payloadExeFormats_43); 
		printf("%s",tbl_payloadExeFormats_44); 
		printf("%s",tbl_payloadExeFormats_45); 
		printf("%s",tbl_payloadExeFormats_46); 
		printf("%s",tbl_payloadExeFormats_47); 
		printf("%s",tbl_payloadExeFormats_48); 
		printf("%s",tbl_payloadExeFormats_49); 
		printf("%s",tbl_payloadExeFormats_50); 
		printf("%s",tbl_payloadExeFormats_51); 
		printf("%s",tbl_payloadExeFormats_52); 
		printf("%s",tbl_payloadExeFormats_0);
		printf(white);
		printf("\n");
		printf("%s",tbl_payloadExeFormats_str);
		scanf("%d", &selectVal);
		
		switch(selectVal) 
		{
			case 0 :
			 	loopWhile=0;
				clear();
			 	exit(0);
      			case 1 :
				return payloadExeFormats_1;
			 	loopWhile=0;
			 	break;
		      	case 2 :
				return payloadExeFormats_2;
				loopWhile=0;
			 	break;
		      	case 3 :
				return payloadExeFormats_3;
				loopWhile=0;
			 	break;
		      	case 4 :
				return payloadExeFormats_4;
				loopWhile=0;
			 	break;
		      	case 5 :
				return payloadExeFormats_5;
				loopWhile=0;
			 	break;
		      	case 6 :
				return payloadExeFormats_6;
				loopWhile=0;
			 	break;
		      	case 7 :
				return payloadExeFormats_7;
				loopWhile=0;
			 	break;
		      	case 8 :
				return payloadExeFormats_8;
				loopWhile=0;
			 	break;
		      	case 9 :
				return payloadExeFormats_9;
				loopWhile=0;
			 	break;
		      	case 10 :
				return payloadExeFormats_10;
				loopWhile=0;
			 	break;
		      	case 11 :
				return payloadExeFormats_11;
				loopWhile=0;
			 	break;
		      	case 12 :
				return payloadExeFormats_12;
				loopWhile=0;
			 	break;
		      	case 13 :
				return payloadExeFormats_13;
				loopWhile=0;
			 	break;
		      	case 14 :
				return payloadExeFormats_14;
				loopWhile=0;
			 	break;
		      	case 15 :
				return payloadExeFormats_15;
				loopWhile=0;
			 	break;
		      	case 16 :
				return payloadExeFormats_16;
				loopWhile=0;
			 	break;
		      	case 17 :
				return payloadExeFormats_17;
				loopWhile=0;
			 	break;
		      	case 18 :
				return payloadExeFormats_18;
				loopWhile=0;
			 	break;
		      	case 19 :
				return payloadExeFormats_19;
				loopWhile=0;
			 	break;
		      	case 20 :
				return payloadExeFormats_20;
				loopWhile=0;
			 	break;
		      	case 21 :
				return payloadExeFormats_21;
				loopWhile=0;
			 	break;
		      	case 22 :
				return payloadExeFormats_22;
				loopWhile=0;
			 	break;
		      	case 23 :
				return payloadExeFormats_23;
				loopWhile=0;
			 	break;
		      	case 24 :
				return payloadExeFormats_24;
				loopWhile=0;
			 	break;
		      	case 25 :
				return payloadExeFormats_25;
				loopWhile=0;
			 	break;
		      	case 26 :
				return payloadExeFormats_26;
				loopWhile=0;
			 	break;
		      	case 27 :
				return payloadExeFormats_27;
				loopWhile=0;
			 	break;
		      	case 28 :
				return payloadExeFormats_28;
				loopWhile=0;
			 	break;
		      	case 29 :
				return payloadExeFormats_29;
				loopWhile=0;
			 	break;
		      	case 30 :
				return payloadExeFormats_30;
				loopWhile=0;
			 	break;
		      	case 31 :
				return payloadExeFormats_31;
				loopWhile=0;
			 	break;
		      	case 32 :
				return payloadExeFormats_32;
				loopWhile=0;
			 	break;
		      	case 33 :
				return payloadExeFormats_33;
				loopWhile=0;
			 	break;
		      	case 34 :
				return payloadExeFormats_34;
				loopWhile=0;
			 	break;
		      	case 35 :
				return payloadExeFormats_35;
				loopWhile=0;
			 	break;
		      	case 36 :
				return payloadExeFormats_36;
				loopWhile=0;
			 	break;
		      	case 37 :
				return payloadExeFormats_37;
				loopWhile=0;
			 	break;
		      	case 38 :
				return payloadExeFormats_38;
				loopWhile=0;
			 	break;
		      	case 39 :
				return payloadExeFormats_39;
				loopWhile=0;
			 	break;
		      	case 40 :
				return payloadExeFormats_40;
				loopWhile=0;
			 	break;
		      	case 41 :
				return payloadExeFormats_41;
				loopWhile=0;
			 	break;
		      	case 42 :
				return payloadExeFormats_42;
				loopWhile=0;
			 	break;
		      	case 43 :
				return payloadExeFormats_43;
				loopWhile=0;
			 	break;
		      	case 44 :
				return payloadExeFormats_44;
				loopWhile=0;
			 	break;
		      	case 45 :
				return payloadExeFormats_45;
				loopWhile=0;
			 	break;
		      	case 46 :
				return payloadExeFormats_46;
				loopWhile=0;
			 	break;
		      	case 47 :
				return payloadExeFormats_47;
				loopWhile=0;
			 	break;
		      	case 48 :
				return payloadExeFormats_48;
				loopWhile=0;
			 	break;
		      	case 49 :
				return payloadExeFormats_49;
				loopWhile=0;
			 	break;
		      	case 50 :
				return payloadExeFormats_50;
				loopWhile=0;
			 	break;
		      	case 51 :
				return payloadExeFormats_51;
				loopWhile=0;
			 	break;

		      	default :
			 	loopWhile=1;
		   }

	}
}


#include <stdio.h>
#define clear() printf("\033[H\033[J")


char* selectPayloadTypevncinject()
{
	int selectVal	=0;
	int loopWhile	=1;

	while(loopWhile == 1)
	{
		banner();

		printf(BlueF);
		printf("\n");
		printf("%s",tbl_entete_1);
		printf("%s",tbl_payloadwindowsvncinject_1);
		printf("%s",tbl_payloadwindowsvncinject_2);
		printf("%s",tbl_payloadwindowsvncinject_3);
		printf("%s",tbl_payloadwindowsvncinject_4);
		printf("%s",tbl_payloadwindowsvncinject_5);
		printf("%s",tbl_payloadwindowsvncinject_6);
		printf("%s",tbl_payloadwindowsvncinject_7);
		printf("%s",tbl_payloadwindowsvncinject_8);
		printf("%s",tbl_payloadwindowsvncinject_9);
		printf("%s",tbl_payloadwindowsvncinject_10);
		printf("%s",tbl_payloadwindowsvncinject_11);
		printf("%s",tbl_payloadwindowsvncinject_12);
		printf("%s",tbl_payloadwindowsvncinject_13);
		printf("%s",tbl_payloadwindowsvncinject_14);
		printf("%s",tbl_payloadwindowsvncinject_15);
		printf("%s",tbl_payloadwindowsvncinject_16);
		printf("%s",tbl_payloadwindowsvncinject_17);
		printf("%s",tbl_payloadwindowsvncinject_18);
		printf("%s",tbl_payloadwindowsvncinject_19);
		printf("%s",tbl_payloadwindowsvncinject_20);
		printf("%s",tbl_payloadwindowsvncinject_21);
		printf("%s",tbl_payloadwindowsvncinject_22);
		printf("%s",tbl_payloadwindowsvncinject_23);
		printf("%s",tbl_payloadwindowsvncinject_24);
		printf("%s",tbl_payloadwindowsvncinject_25);
		printf("%s",tbl_payloadwindowsvncinject_0);
		printf(white);
		printf("\n");
		printf("%s",tbl_payloadwindowsvncinject_str);
		scanf("%d", &selectVal);
		
		 switch(selectVal) 
		{
			case 0 :
			 	return "exit";
			 	loopWhile=0;
			 	break;
      			case 1 :
			 	loopWhile=0;
				return payloadwindowsvncinject_1;
			 	break;
		      	case 2 :
				loopWhile=0;
				return payloadwindowsvncinject_2;
			 	break;
		      	case 3 :
			 	loopWhile=0;
				return payloadwindowsvncinject_3;
			 	break;
		      	case 4 :
			 	loopWhile=0;
				return payloadwindowsvncinject_4;
			 	break;
		      	case 5 :
			 	loopWhile=0;
				return payloadwindowsvncinject_5;
		 		break;
			case 6 :
			 	loopWhile=0;
				return payloadwindowsvncinject_6;
		 		break;
			case 7 :
			 	loopWhile=0;
				return payloadwindowsvncinject_7;
		 		break;
			case 8 :
			 	loopWhile=0;
				return payloadwindowsvncinject_8;
		 		break;
			case 9 :
			 	loopWhile=0;
				return payloadwindowsvncinject_9;
		 		break;
			case 10 :
			 	loopWhile=0;
				return payloadwindowsvncinject_10;
		 		break;
			case 11 :
			 	loopWhile=0;
				return payloadwindowsvncinject_11;
		 		break;
			case 12 :
			 	loopWhile=0;
				return payloadwindowsvncinject_12;
		 		break;
			case 13 :
			 	loopWhile=0;
				return payloadwindowsvncinject_13;
		 		break;
			case 14 :
			 	loopWhile=0;
				return payloadwindowsvncinject_14;
		 		break;
			case 15 :
			 	loopWhile=0;
				return payloadwindowsvncinject_15;
		 		break;
			case 16 :
			 	loopWhile=0;
				return payloadwindowsvncinject_16;
		 		break;
			case 17 :
			 	loopWhile=0;
				return payloadwindowsvncinject_17;
		 		break;
			case 18 :
			 	loopWhile=0;
				return payloadwindowsvncinject_18;
		 		break;
			case 19 :
			 	loopWhile=0;
				return payloadwindowsvncinject_19;
		 		break;
			case 20 :
			 	loopWhile=0;
				return payloadwindowsvncinject_20;
		 		break;
			case 21 :
			 	loopWhile=0;
				return payloadwindowsvncinject_21;
		 		break;
			case 22 :
			 	loopWhile=0;
				return payloadwindowsvncinject_22;
		 		break;
			case 23 :
			 	loopWhile=0;
				return payloadwindowsvncinject_23;
		 		break;
			case 24 :
			 	loopWhile=0;
				return payloadwindowsvncinject_24;
		 		break;
	
		      	default :
			 	loopWhile=1;
		   }

	
	}
}


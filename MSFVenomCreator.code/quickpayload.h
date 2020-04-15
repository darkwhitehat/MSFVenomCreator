#include <stdio.h>


char * selectquickpayloadhelp()
{
	int selectVal	=0;
	int loopWhile	=1;

	while(loopWhile == 1)
	{
		
		printf(BlueF);
		printf("\n");
		printf("%s",tbl_quickpayload_entete);
		printf("%s",tbl_quickpayload_1);
		printf("%s",tbl_quickpayload_2);
		printf("%s",tbl_quickpayload_3);
		printf("%s",tbl_quickpayload_4);
		printf("%s",tbl_quickpayload_5);
		printf("%s",tbl_quickpayload_6);
		printf("%s",tbl_quickpayload_7);
		printf("%s",tbl_quickpayload_8);
		printf("%s",tbl_quickpayload_9);
		printf("%s",tbl_quickpayload_10);
		printf("%s",tbl_quickpayload_11);
		printf("------------------ \n");
		printf("%s",tbl_quickpayload_0);
		printf(white);
		printf("\n");
		printf( "Select your option [number]: ");
		scanf("%d", &selectVal);
		
		switch(selectVal) 
		{
			case 0 :
				return "";
			 	loopWhile=0;
      			case 1 :
				return quickpayload_1;
			 	loopWhile=0;
			 	break;
		      	case 2 :
				return quickpayload_2;
				loopWhile=0;
			 	break;
			case 3 :
				return quickpayload_3;
				loopWhile=0;
			 	break;
			case 6 :
				return quickpayload_6;
				loopWhile=0;
			 	break;
			case 11 :
				return quickpayload_11;
				loopWhile=0;
			 	break;

		      	default :
			 	loopWhile=1;
		   }

	}
}


void show_msfv_archs()
{
	printf(yellow);
	printf("\n");
	printf("%s",msfv_archs_entete_1);
	printf("%s",msfv_archs_entete_2);
	//printf("%s",msfv_archs_entete_3);
	//printf("%s",msfv_archs_entete_4);
	printf(BlueF);
	printf("%s",msfv_archs_1);
	printf("%s",msfv_archs_2);
	printf("%s",msfv_archs_3);
	printf("%s",msfv_archs_4);
	printf("%s",msfv_archs_5);
	printf("%s",msfv_archs_6);
	printf("%s",msfv_archs_7);
	printf("%s",msfv_archs_8);
	printf("%s",msfv_archs_9);
	printf("%s",msfv_archs_10);
	printf("%s",msfv_archs_11);
	printf(white);
	printf("%s",msfv_archs_str);

	int selectVal	=0;
	int loopWhile	=1;

	while(loopWhile == 1)
	{
		scanf("%d", &selectVal);
		
		switch(selectVal) 
		{
			case 0 :
			 	loopWhile=0;
		}
	}
}


void show_msfv_platforms()
{
	printf(yellow);
	printf("\n");
	printf("%s",msfv_platforms_entete_1);
	printf("%s",msfv_platforms_entete_2);
	//printf("%s",msfv_archs_entete_3);
	//printf("%s",msfv_archs_entete_4);
	printf(BlueF);
	printf("%s",msfv_platforms_archs_1);
	printf("%s",msfv_platforms_archs_2);
	printf("%s",msfv_platforms_archs_3);
	printf("%s",msfv_platforms_archs_4);
	printf("%s",msfv_platforms_archs_5);
	printf("%s",msfv_platforms_archs_6);
	printf("%s",msfv_platforms_archs_7);
	printf("%s",msfv_platforms_archs_8);
	printf("%s",msfv_platforms_archs_9);
	printf("%s",msfv_platforms_archs_10);
	printf("%s",msfv_platforms_archs_11);
	printf("%s",msfv_platforms_archs_12);
	printf(white);
	printf("%s",msfv_archs_str);
	int selectVal	=0;
	int loopWhile	=1;

	while(loopWhile == 1)
	{
		scanf("%d", &selectVal);
		
		switch(selectVal) 
		{
			case 0 :
			 	loopWhile=0;
		}
	}
}


void show_msfv_encoders()
{
	printf(yellow);
	printf("\n");
	printf("%s",msfv_encoders_entete_1);
	printf(BlueF);
	printf("%s",msfv_encoders_entete_2);
	printf("%s",msfv_encoders_entete_3);
	printf("%s",msfv_encoders_entete_4);
	printf("%s",msfv_encoders_entete_5);

	printf(BlueF);
	printf("%s",msfv_encoders_1);
	printf("%s",msfv_encoders_2);
	printf("%s",msfv_encoders_3);
	printf("%s",msfv_encoders_4);
	printf("%s",msfv_encoders_5);
	printf("%s",msfv_encoders_6);
	printf("%s",msfv_encoders_7);
	printf("\n");
	printf("%s",msfv_encoders_8);
	printf("%s",msfv_encoders_9);
	printf("\n");
	printf("%s",msfv_encoders_10);
	printf("%s",msfv_encoders_11);
	printf("%s",msfv_encoders_12);
	printf("%s",msfv_encoders_13);
	printf("\n");
	printf("%s",msfv_encoders_14);
	printf("\n");
	printf("%s",msfv_encoders_15);
	printf("%s",msfv_encoders_16);
	printf("\n");
	printf("%s",msfv_encoders_17);
	printf("\n");
	printf("%s",msfv_encoders_18);
	printf("\n");
	printf("%s",msfv_encoders_19);
	printf("%s",msfv_encoders_20);
	printf("%s",msfv_encoders_21);
	printf("%s",msfv_encoders_22);
	printf("\n");
	printf("%s",msfv_encoders_23);
	printf("%s",msfv_encoders_24);
	printf("%s",msfv_encoders_25);
	printf("%s",msfv_encoders_26);
	printf("%s",msfv_encoders_27);
	printf("%s",msfv_encoders_28);
	printf("%s",msfv_encoders_29);
	printf("%s",msfv_encoders_30);
	printf("%s",msfv_encoders_31);
	printf("%s",msfv_encoders_32);
	printf("%s",msfv_encoders_33);
	printf("%s",msfv_encoders_34);
	printf("%s",msfv_encoders_35);
	printf("%s",msfv_encoders_36);
	printf("%s",msfv_encoders_37);
	printf("%s",msfv_encoders_38);
	printf("%s",msfv_encoders_39);
	printf("%s",msfv_encoders_40);
	printf("%s",msfv_encoders_41);
	printf("%s",msfv_encoders_42);
	printf("%s",msfv_encoders_43);
	printf("%s",msfv_encoders_44);
	printf("%s",msfv_encoders_45);
	printf("%s",msfv_encoders_46);

	printf(white);
	printf("\n");
	printf("%s",msfv_encoders_str);

	int selectVal	=0;
	int loopWhile	=1;

	while(loopWhile == 1)
	{
		scanf("%d", &selectVal);
		
		switch(selectVal) 
		{
			case 0 :
			 	loopWhile=0;
		}
	}
		
}

void show_msfv_formats()
{
	printf(yellow);
	printf("\n");
	printf("%s",msfv_formats_entete_1);
	printf("%s",msfv_formats_entete_2);
	printf(BlueF);
	printf("%s",msfv_formats_entete_3);
	printf("%s",msfv_formats_entete_4);
	printf("%s",msfv_formats_1);
	printf("%s",msfv_formats_2);
	printf("%s",msfv_formats_3);
	printf("%s",msfv_formats_4);
	printf("%s",msfv_formats_5);
	printf("%s",msfv_formats_6);
	printf("%s",msfv_formats_7);
	printf("%s",msfv_formats_8);
	printf("%s",msfv_formats_9);
	printf("%s",msfv_formats_10);
	printf("%s",msfv_formats_11);
	printf("%s",msfv_formats_12);
	printf("%s",msfv_formats_13);
	printf("%s",msfv_formats_14);
	printf("%s",msfv_formats_15);
	printf("%s",msfv_formats_16);
	printf("%s",msfv_formats_17);
	printf("%s",msfv_formats_18);
	printf(white);
	printf("\n");
	printf("%s",msfv_formats_str);

	int selectVal	=0;
	int loopWhile	=1;

	while(loopWhile == 1)
	{
		scanf("%d", &selectVal);
		
		switch(selectVal) 
		{
			case 0 :
			 	loopWhile=0;
		}
	}
}




char * selectpayloadmsfv()
{
	int selectVal	=0;
	int loopWhile	=1;

	while(loopWhile == 1)
	{
		
		printf(BlueF);
		printf("\n");
		printf("%s",tbl_quickpayload_entete);
		printf("%s",msfv_payloads_1);
		printf("%s",msfv_payloads_2);
		printf("%s",msfv_payloads_3);
		printf("%s",msfv_payloads_4);
		printf("%s",msfv_payloads_5);
		printf("%s",msfv_payloads_6);
		printf("%s",msfv_payloads_7);
		printf("%s",msfv_payloads_8);
		printf("%s",msfv_payloads_9);
		printf("%s",msfv_payloads_10);
		printf("%s",msfv_payloads_11);
		printf(white);
		printf("%s",msfv_payloads_12);
		printf("%s",msfv_payloads_13);
		printf("%s",msfv_payloads_14);
		printf("%s",msfv_payloads_15);
		printf("%s",msfv_payloads_16);
		printf("%s",msfv_payloads_17);
		printf("%s",msfv_payloads_18);
		printf("%s",msfv_payloads_19);
		printf("%s",msfv_payloads_20);
		printf("%s",msfv_payloads_21);
		printf("%s",msfv_payloads_22);
		printf("%s",msfv_payloads_23);
		printf(BlueF);
		printf("%s",msfv_payloads_24);
		printf("%s",msfv_payloads_25);
		printf("%s",msfv_payloads_26);
		printf("%s",msfv_payloads_27);
		printf("%s",msfv_payloads_28);
		printf("%s",msfv_payloads_29);
		printf("%s",msfv_payloads_30);
		printf("%s",msfv_payloads_31);
		printf("%s",msfv_payloads_32);
		printf("%s",msfv_payloads_33);
		printf(yellow);
		printf("%s",msfv_payloads_34);
		printf("%s",msfv_payloads_35);
		printf("%s",msfv_payloads_36);
		printf("%s",msfv_payloads_37);
		printf("%s",msfv_payloads_38);
		printf("%s",msfv_payloads_39);
		printf("%s",msfv_payloads_40);
		printf("%s",msfv_payloads_41);
		printf("%s",msfv_payloads_42);
		printf("%s",msfv_payloads_43);
		printf("%s",msfv_payloads_44);
		printf("%s",msfv_payloads_45);
		printf("%s",msfv_payloads_46);
		printf("------------------ \n");
		printf("%s",msfv_payloads_0);
		printf(white);
		printf("\n");
		
		printf("%s",msfv_payloads_str);
		scanf("%d", &selectVal);
		
		switch(selectVal) 
		{
			case 0 :
				return "";
			 	loopWhile=0;
				break;
      			case 1 :
				return Vmsfv_payloads_1;
			 	loopWhile=0;
			 	break;
		      	case 2 :
				return Vmsfv_payloads_2;
				loopWhile=0;
			 	break;
			case 3 :
				return Vmsfv_payloads_3;
				loopWhile=0;
			 	break;
			case 4 :
				return Vmsfv_payloads_4;
				loopWhile=0;
			 	break;
			case 5 :
				return Vmsfv_payloads_5;
				loopWhile=0;
			 	break;
      			case 6 :
				return Vmsfv_payloads_6;
			 	loopWhile=0;
			 	break;
      			case 7 :
				return Vmsfv_payloads_7;
			 	loopWhile=0;
			 	break;
      			case 8 :
				return Vmsfv_payloads_8;
			 	loopWhile=0;
			 	break;
      			case 9 :
				return Vmsfv_payloads_9;
			 	loopWhile=0;
			 	break;
      			case 10 :
				return Vmsfv_payloads_10;
			 	loopWhile=0;
			 	break;
      			case 11 :
				return Vmsfv_payloads_11;
			 	loopWhile=0;
			 	break;

      			case 12 :
				return Vmsfv_payloads_12;
			 	loopWhile=0;
			 	break;

      			case 13 :
				return Vmsfv_payloads_13;
			 	loopWhile=0;
			 	break;

      			case 14 :
				return Vmsfv_payloads_14;
			 	loopWhile=0;
			 	break;

      			case 15 :
				return Vmsfv_payloads_15;
			 	loopWhile=0;
			 	break;

      			case 16 :
				return Vmsfv_payloads_16;
			 	loopWhile=0;
			 	break;

      			case 17 :
				return Vmsfv_payloads_17;
			 	loopWhile=0;
			 	break;

      			case 18 :
				return Vmsfv_payloads_18;
			 	loopWhile=0;
			 	break;

      			case 19 :
				return Vmsfv_payloads_19;
			 	loopWhile=0;
			 	break;

      			case 20 :
				return Vmsfv_payloads_20;
			 	loopWhile=0;
			 	break;

      			case 21 :
				return Vmsfv_payloads_21;
			 	loopWhile=0;
			 	break;

      			case 22 :
				return Vmsfv_payloads_22;
			 	loopWhile=0;
			 	break;

      			case 23 :
				return Vmsfv_payloads_23;
			 	loopWhile=0;
			 	break;

      			case 24 :
				return Vmsfv_payloads_24;
			 	loopWhile=0;
			 	break;

      			case 25 :
				return Vmsfv_payloads_25;
			 	loopWhile=0;
			 	break;

      			case 26 :
				return Vmsfv_payloads_26;
			 	loopWhile=0;
			 	break;

      			case 27 :
				return Vmsfv_payloads_27;
			 	loopWhile=0;
			 	break;

      			case 28 :
				return Vmsfv_payloads_28;
			 	loopWhile=0;
			 	break;

      			case 29 :
				return Vmsfv_payloads_29;
			 	loopWhile=0;
			 	break;

      			case 30 :
				return Vmsfv_payloads_30;
			 	loopWhile=0;
			 	break;

      			case 31 :
				return Vmsfv_payloads_31;
			 	loopWhile=0;
			 	break;

      			case 32 :
				return Vmsfv_payloads_32;
			 	loopWhile=0;
			 	break;

      			case 33 :
				return Vmsfv_payloads_33;
			 	loopWhile=0;
			 	break;

      			case 34 :
				return Vmsfv_payloads_34;
			 	loopWhile=0;
			 	break;

      			case 35 :
				return Vmsfv_payloads_35;
			 	loopWhile=0;
			 	break;

      			case 36 :
				return Vmsfv_payloads_36;
			 	loopWhile=0;
			 	break;

      			case 37 :
				return Vmsfv_payloads_37;
			 	loopWhile=0;
			 	break;

      			case 38 :
				return Vmsfv_payloads_38;
			 	loopWhile=0;
			 	break;

      			case 39 :
				return Vmsfv_payloads_39;
			 	loopWhile=0;
			 	break;

      			case 40 :
				return Vmsfv_payloads_40;
			 	loopWhile=0;
			 	break;

      			case 41 :
				return Vmsfv_payloads_41;
			 	loopWhile=0;
			 	break;

      			case 42 :
				return Vmsfv_payloads_42;
			 	loopWhile=0;
			 	break;

      			case 43 :
				return Vmsfv_payloads_43;
			 	loopWhile=0;
			 	break;

      			case 44 :
				return Vmsfv_payloads_44;
			 	loopWhile=0;
			 	break;

      			case 45 :
				return Vmsfv_payloads_45;
			 	loopWhile=0;
			 	break;

      			case 46 :
				return Vmsfv_payloads_46;
			 	loopWhile=0;
			 	break;


		      	default :
			 	loopWhile=1;
		   }

	}
}



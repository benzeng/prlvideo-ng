
char * FUN_1009e1180(uint param_1)

{
  char *pcVar1;
  
  pcVar1 = "https://report.parallels.com/%1/%2/report";
  if ((param_1 & 0xfffffffd) == 9) {
    pcVar1 = "https://report.parallels.com/%1/%2/cep";
  }
  return pcVar1;
}


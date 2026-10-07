
char * FUN_100722970(int param_1)

{
  char *pcVar1;
  
  if (param_1 == 1) {
    return "VZSRV";
  }
  if (param_1 == 2) {
    return "VZGROUP";
  }
  if (param_1 == 4) {
    return "VZAKEY";
  }
  if (param_1 == 3) {
    return "PRLSRV";
  }
  if (param_1 == 5) {
    return "PRLDSK";
  }
  if (param_1 == 6) {
    return "PCSSTOR";
  }
  pcVar1 = (char *)0x0;
  if (param_1 == 7) {
    pcVar1 = "VDI";
  }
  return pcVar1;
}



char * FUN_1002daaa0(int param_1)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar2 = "unknown";
  if (param_1 == 1) {
    pcVar2 = "auto";
  }
  pcVar1 = "manual";
  if (param_1 != 0) {
    pcVar1 = pcVar2;
  }
  return pcVar1;
}


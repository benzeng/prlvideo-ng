
char * FUN_10061bb40(int param_1)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar2 = "UNKNOWN EVENT (!)";
  if (param_1 == 0x80) {
    pcVar2 = "EVENT_RELEASE";
  }
  pcVar1 = "EVENT_PRESS";
  if (param_1 != 0) {
    pcVar1 = pcVar2;
  }
  return pcVar1;
}


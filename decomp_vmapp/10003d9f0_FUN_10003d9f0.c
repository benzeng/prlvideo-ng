
void FUN_10003d9f0(long param_1,char param_2)

{
  char *pcVar1;
  
  *(char *)(param_1 + 0xa9) = param_2;
  if (DAT_1011b55f8 < 2) {
    return;
  }
  pcVar1 = "off";
  if (param_2 != '\0') {
    pcVar1 = "on";
  }
  FUN_1008e3970("SHAH","vm",2,"Shared Host Apps [%s]",pcVar1);
  return;
}


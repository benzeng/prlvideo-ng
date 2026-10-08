
undefined8 FUN_100aba000(char *param_1,char *param_2,char *param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = _strrchr(param_1,0x2e);
  if (pcVar1 == (char *)0x0) {
    uVar2 = 0;
  }
  else if ((ulong)((long)pcVar1 - (long)param_1) < 0x15) {
    uVar2 = 0;
  }
  else {
    std::string::assign(param_2);
    std::string::assign(param_3,(ulong)(param_1 + 0x15));
    uVar2 = 1;
  }
  return uVar2;
}


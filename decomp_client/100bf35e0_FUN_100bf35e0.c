
char * FUN_100bf35e0(char *param_1,undefined8 param_2,undefined4 param_3)

{
  size_t sVar1;
  char *pcVar2;
  char *pcVar3;
  ulong uVar4;
  
  sVar1 = _strlen(param_1);
  uVar4 = sVar1 + 1;
  pcVar3 = (char *)0x0;
  if (0 < (int)uVar4) {
    if (DAT_102316040 == '\0') {
      DAT_102316040 = '\x01';
    }
    if (DAT_102316048 != (code *)0x0) {
      if (DAT_102316041 == '\0') {
        DAT_102316041 = '\x01';
      }
      (*DAT_102316048)(0,uVar4 & 0xffffffff,param_2,param_3,0);
    }
    pcVar2 = (char *)(*(code *)PTR_FUN_102305358)((long)(int)uVar4,param_2,param_3);
    if (DAT_102316048 != (code *)0x0) {
      (*DAT_102316048)(pcVar2,uVar4 & 0xffffffff,param_2,param_3,1);
    }
    pcVar3 = (char *)0x0;
    if (pcVar2 != (char *)0x0) {
      _strcpy(pcVar2,param_1);
      pcVar3 = pcVar2;
    }
  }
  return pcVar3;
}


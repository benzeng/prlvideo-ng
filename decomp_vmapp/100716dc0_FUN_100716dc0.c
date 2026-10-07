
void FUN_100716dc0(char *param_1,uint *param_2,int param_3,char *param_4)

{
  int iVar1;
  size_t sVar2;
  char *pcVar3;
  undefined8 uVar4;
  
  if (((param_1 == (char *)0x0) || (param_2 == (uint *)0x0)) || (param_2[1] != 1)) {
    uVar4 = 0xfffffffd;
    goto LAB_100716e9d;
  }
  if (*(long *)(param_2 + 0x12) != 0) {
    if (*(long *)(param_2 + 0x10) == 0) {
      sVar2 = _strlen(param_1);
      pcVar3 = (char *)FUN_10071b050(param_1,sVar2 & 0xffffffff,1);
      pcVar3 = _strdup(pcVar3);
      *(char **)(param_2 + 0x10) = pcVar3;
      if (pcVar3 == (char *)0x0) goto LAB_100716e98;
    }
    pcVar3 = _strdup(param_1);
    *(char **)(param_2 + 6) = pcVar3;
    if (pcVar3 != (char *)0x0) {
      *param_2 = param_3 != 0 | 2;
      if (param_4 == (char *)0x0) {
        param_2[8] = 0;
        param_2[9] = 0;
LAB_100716eb7:
        if (DAT_1011ccb40 == 0) {
          FUN_100715e50();
        }
        FUN_100716480(param_2);
        return;
      }
      iVar1 = FUN_100719680(param_4);
      if (iVar1 == 0) {
        FUN_10071e690(0xfffffffd,"Invalid HWID format for %s",param_4);
        return;
      }
      pcVar3 = _strdup(param_4);
      *(char **)(param_2 + 8) = pcVar3;
      if (pcVar3 != (char *)0x0) goto LAB_100716eb7;
      _free(*(void **)(param_2 + 6));
      param_2[6] = 0;
      param_2[7] = 0;
      uVar4 = 0xfffffffe;
      goto LAB_100716e9d;
    }
  }
LAB_100716e98:
  uVar4 = 0xfffffffe;
LAB_100716e9d:
  FUN_10071e690(uVar4,0);
  return;
}


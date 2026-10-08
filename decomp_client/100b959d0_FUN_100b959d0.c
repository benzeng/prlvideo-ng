
void FUN_100b959d0(long param_1,undefined4 *param_2,char *param_3)

{
  int iVar1;
  char *pcVar2;
  
  if (((param_1 == 0) || (param_2 == (undefined4 *)0x0)) || (param_2[1] != 1)) {
    iVar1 = -3;
  }
  else {
    if (*(long *)(param_2 + 0x12) != 0) {
      iVar1 = FUN_100b95ad0(param_2,param_1);
      if (iVar1 != 0) goto LAB_100b95a1d;
      pcVar2 = _strdup((char *)(param_1 + 0x184));
      *(char **)(param_2 + 6) = pcVar2;
      if (pcVar2 != (char *)0x0) {
        *(undefined8 *)(*(long *)(param_2 + 0x12) + 0x38) = 0;
        *param_2 = 1;
        if (param_3 == (char *)0x0) {
          *(undefined8 *)(param_2 + 8) = 0;
LAB_100b95a88:
          if (DAT_1023118c8 == 0) {
            FUN_100b94c30();
          }
          FUN_100b95260(param_2);
          return;
        }
        iVar1 = FUN_100b98460(param_3);
        if (iVar1 == 0) {
          FUN_100b9d470(0xfffffffd,"Invalid HWID format for %s",param_3);
          return;
        }
        pcVar2 = _strdup(param_3);
        *(char **)(param_2 + 8) = pcVar2;
        if (pcVar2 != (char *)0x0) goto LAB_100b95a88;
      }
    }
    iVar1 = -2;
  }
LAB_100b95a1d:
  FUN_100b9d470(iVar1,0);
  return;
}


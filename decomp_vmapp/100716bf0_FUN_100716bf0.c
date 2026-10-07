
void FUN_100716bf0(long param_1,undefined4 *param_2,char *param_3)

{
  int iVar1;
  char *pcVar2;
  
  if (((param_1 == 0) || (param_2 == (undefined4 *)0x0)) || (param_2[1] != 1)) {
    iVar1 = -3;
  }
  else {
    if (*(long *)(param_2 + 0x12) != 0) {
      iVar1 = FUN_100716cf0(param_2,param_1);
      if (iVar1 != 0) goto LAB_100716c3d;
      pcVar2 = _strdup((char *)(param_1 + 0x184));
      *(char **)(param_2 + 6) = pcVar2;
      if (pcVar2 != (char *)0x0) {
        *(undefined8 *)(*(long *)(param_2 + 0x12) + 0x38) = 0;
        *param_2 = 1;
        if (param_3 == (char *)0x0) {
          *(undefined8 *)(param_2 + 8) = 0;
LAB_100716ca8:
          if (DAT_1011ccb40 == 0) {
            FUN_100715e50();
          }
          FUN_100716480(param_2);
          return;
        }
        iVar1 = FUN_100719680(param_3);
        if (iVar1 == 0) {
          FUN_10071e690(0xfffffffd,"Invalid HWID format for %s",param_3);
          return;
        }
        pcVar2 = _strdup(param_3);
        *(char **)(param_2 + 8) = pcVar2;
        if (pcVar2 != (char *)0x0) goto LAB_100716ca8;
      }
    }
    iVar1 = -2;
  }
LAB_100716c3d:
  FUN_10071e690(iVar1,0);
  return;
}


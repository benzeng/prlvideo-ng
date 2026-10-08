
undefined8 FUN_100ca77d0(int *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int iVar5;
  
  iVar1 = FUN_100c60800(*param_2);
  if (0 < iVar1) {
    iVar1 = 0;
    iVar5 = 0;
    do {
      puVar3 = (undefined8 *)FUN_100c60820(*param_2,iVar5);
      if (*param_1 == *(int *)*puVar3) {
        if (puVar3[1] != 0) {
          return 0x31;
        }
        if (puVar3[2] != 0) {
          return 0x31;
        }
        if (iVar1 == 2) {
          iVar1 = 2;
        }
        else {
          iVar2 = iVar1;
          if (iVar1 == 0) {
            iVar2 = 1;
          }
          uVar4 = FUN_100ca7b10(param_1);
          iVar1 = 2;
          if (((int)uVar4 != 0) && (iVar1 = iVar2, (int)uVar4 != 0x2f)) {
            return uVar4;
          }
        }
      }
      iVar5 = iVar5 + 1;
      iVar2 = FUN_100c60800(*param_2);
    } while (iVar5 < iVar2);
    if (iVar1 == 1) {
      return 0x2f;
    }
  }
  iVar1 = FUN_100c60800(param_2[1]);
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      puVar3 = (undefined8 *)FUN_100c60820(param_2[1],iVar1);
      if (*param_1 == *(int *)*puVar3) {
        if (puVar3[1] != 0) {
          return 0x31;
        }
        if (puVar3[2] != 0) {
          return 0x31;
        }
        uVar4 = FUN_100ca7b10(param_1);
        if ((int)uVar4 == 0) {
          return 0x30;
        }
        if ((int)uVar4 != 0x2f) {
          return uVar4;
        }
      }
      iVar1 = iVar1 + 1;
      iVar5 = FUN_100c60800(param_2[1]);
    } while (iVar1 < iVar5);
  }
  return 0;
}


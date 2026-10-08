
undefined8 FUN_100ca76c0(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 local_40 [2];
  long local_38;
  
  lVar3 = FUN_100c92690();
  iVar1 = FUN_100c96dc0(lVar3);
  if (iVar1 < 1) {
LAB_100ca776b:
    iVar1 = FUN_100c60800(*(undefined8 *)(param_1 + 0x88));
    if (iVar1 < 1) {
      uVar4 = 0;
    }
    else {
      iVar1 = 0;
      do {
        uVar4 = FUN_100c60820(*(undefined8 *)(param_1 + 0x88),iVar1);
        uVar4 = FUN_100ca77d0(uVar4,param_2);
        if ((int)uVar4 != 0) {
          return uVar4;
        }
        iVar1 = iVar1 + 1;
        iVar2 = FUN_100c60800(*(undefined8 *)(param_1 + 0x88));
      } while (iVar1 < iVar2);
      uVar4 = 0;
    }
  }
  else {
    local_40[0] = 4;
    local_38 = lVar3;
    uVar4 = FUN_100ca77d0(local_40,param_2);
    if ((int)uVar4 == 0) {
      local_40[0] = 1;
      iVar1 = -1;
      do {
        iVar1 = FUN_100c96de0(lVar3,0x30,iVar1);
        if (iVar1 == -1) goto LAB_100ca776b;
        uVar4 = FUN_100c96d80(lVar3,iVar1);
        local_38 = FUN_100c96d60(uVar4);
        uVar4 = 0x35;
      } while ((*(int *)(local_38 + 4) == 0x16) &&
              (uVar4 = FUN_100ca77d0(local_40,param_2), (int)uVar4 == 0));
    }
  }
  return uVar4;
}



void FUN_100293ee0(long param_1,long param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(param_2 + 0x18);
  if (iVar1 == 8) {
    cVar2 = FUN_10026b7f0(param_1 + 0x1068,*(undefined1 *)(param_2 + 0x34),1);
    uVar3 = 0x80000434;
    if (cVar2 != '\0') {
      uVar3 = 0;
    }
  }
  else {
    if (iVar1 != 7) {
      if (iVar1 == 5) {
        FUN_10026ce80(param_1 + 0x1068);
        *(undefined4 *)(param_2 + 0x30) = 0;
        return;
      }
      FUN_1002910f0(param_1,param_2);
      return;
    }
    uVar3 = FUN_10026c890(param_1 + 0x1068);
  }
  *(undefined4 *)(param_2 + 0x30) = uVar3;
  return;
}


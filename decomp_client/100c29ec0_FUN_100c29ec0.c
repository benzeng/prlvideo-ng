
ulong FUN_100c29ec0(long param_1,undefined8 param_2,undefined4 param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  code *pcVar5;
  
  iVar1 = FUN_100c23170(0,param_1,param_2);
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x10) != 0) {
      if (*(int *)(param_4 + 0x10) == 0) {
        pcVar5 = FUN_100c22b40;
      }
      else {
        pcVar5 = FUN_100c23090;
      }
      iVar1 = (*pcVar5)(param_1,param_1,param_4);
      if (iVar1 == 0) {
        return 0;
      }
    }
    if (*(int *)(param_4 + 0x10) == 0) {
      uVar4 = FUN_100c29f80(param_1,param_1,param_3,param_4);
      return uVar4;
    }
    lVar3 = FUN_100c26a40(param_4);
    if (lVar3 != 0) {
      *(undefined4 *)(lVar3 + 0x10) = 0;
      uVar2 = FUN_100c29f80(param_1,param_1,param_3,lVar3);
      FUN_100c266b0(lVar3);
      return (ulong)uVar2;
    }
  }
  return 0;
}



ulong FUN_1008d27b0(long param_1,int param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  iVar1 = FUN_100821ab0(*(undefined8 *)(param_1 + 0x18));
  if (param_2 == 2) {
    if (iVar1 == 0x16) {
      uVar4 = 1;
      if (*(long *)(param_1 + 0x20) != 0) {
        uVar4 = (ulong)(*(long *)(*(long *)(*(long *)(param_1 + 0x20) + 0x28) + 0x20) == 0);
      }
      *(int *)(param_1 + 0x14) = (int)uVar4;
      return uVar4;
    }
    uVar2 = 0x68;
    uVar3 = 99;
  }
  else if (param_2 == 1) {
    if (iVar1 == 0x16) {
      *(int *)(param_1 + 0x14) = param_3;
      if (param_3 == 0) {
        return 0;
      }
      iVar1 = FUN_100821ab0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 0x28) + 0x18));
      if (iVar1 != 0x15) {
        return (long)param_3;
      }
      FUN_1008a83a0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 0x28) + 0x20));
      *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 0x28) + 0x20) = 0;
      return (long)param_3;
    }
    uVar2 = 0x68;
    uVar3 = 0x55;
  }
  else {
    uVar2 = 0x6e;
    uVar3 = 0x69;
  }
  FUN_100887ce0(0x21,0x68,uVar2,"pk7_lib.c",uVar3);
  return 0;
}


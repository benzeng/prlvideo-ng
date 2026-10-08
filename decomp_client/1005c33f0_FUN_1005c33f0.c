
ulong FUN_1005c33f0(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x18);
  iVar1 = *(int *)(lVar2 + 0x160);
  if (iVar1 == 0x15) {
    uVar3 = 0x15;
    if (*(int *)(lVar2 + 0x38) != 0xff) {
      uVar3 = FUN_1005c20a0();
      return uVar3;
    }
  }
  else {
    uVar3 = (ulong)((iVar1 == 8) + 7);
  }
  return uVar3;
}


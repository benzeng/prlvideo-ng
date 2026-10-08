
ulong FUN_1005c2060(long param_1)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = *(int *)(*(long *)(param_1 + 0x18) + 0x160);
  if (iVar1 == 0x15) {
    uVar2 = 0x15;
    if (*(int *)(*(long *)(param_1 + 0x18) + 0x38) != 0xff) {
      uVar2 = FUN_1005c20a0();
      return uVar2;
    }
  }
  else {
    uVar2 = (ulong)((iVar1 == 8) + 7);
  }
  return uVar2;
}


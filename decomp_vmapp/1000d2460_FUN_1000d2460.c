
undefined1 FUN_1000d2460(long param_1,int param_2)

{
  int iVar1;
  undefined1 uVar2;
  
  if (*(char *)(*(long *)(param_1 + 0x2b0) + 0x1ab8) == '\0') {
    uVar2 = 0;
  }
  else {
    if ((*(uint *)(param_1 + 0x1f0) & 0x4000000) == 0) {
      if ((*(uint *)(param_1 + 0x1f0) & 0x8000000) == 0) {
        return 1;
      }
      iVar1 = (uint)(param_2 * 0x50) / 100 + 10;
    }
    else {
      iVar1 = (uint)(param_2 * 0x50) / 100 + 0xf;
    }
    uVar2 = 1;
    if (*(int *)(param_1 + 0x204) != iVar1) {
      FUN_1000bea50(*(long *)(param_1 + 0x2b0),iVar1);
      *(int *)(param_1 + 0x204) = iVar1;
    }
  }
  return uVar2;
}


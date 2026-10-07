
undefined1 FUN_1000b4970(long *param_1)

{
  int iVar1;
  undefined1 uVar2;
  
  uVar2 = 2;
  if (*(char *)(*param_1 + 0x20) == '\0') {
    iVar1 = *(int *)(*param_1 + 0x28);
    uVar2 = iVar1 == 3;
    if (iVar1 == 2) {
      uVar2 = 2;
    }
  }
  return uVar2;
}



void FUN_1000d06b0(long param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_1000d5f90(param_1 + 0x208);
  iVar2 = *(int *)(param_1 + 500);
  if (cVar1 == '\0') {
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 500) = 0x80000053;
      iVar2 = -0x7fffffad;
    }
  }
  else if (iVar2 == 0) {
    return;
  }
  if ((*(byte *)(param_1 + 499) & 4) == 0) {
    if (iVar2 == -0x7ffdffe0) {
      *(undefined4 *)(param_1 + 500) = 0x80000503;
    }
    return;
  }
  FUN_1000d22a0(param_1);
  return;
}


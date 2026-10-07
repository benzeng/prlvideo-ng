
int FUN_1003050f0(long param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(param_1 + 0x25f4);
  if (iVar1 == 0) {
    piVar2 = (int *)(param_1 + 0x25f4);
    (*(code *)DAT_1011c4a88[0x69])(*DAT_1011c4a88,0x8824,piVar2);
    iVar1 = *piVar2;
    if (0x10 < iVar1) {
      *piVar2 = 0x10;
      iVar1 = 0x10;
    }
  }
  return iVar1;
}


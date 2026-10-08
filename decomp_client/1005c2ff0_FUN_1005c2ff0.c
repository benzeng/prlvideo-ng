
int FUN_1005c2ff0(long param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = -1;
  if (*(int *)(*(long *)(param_1 + 0x18) + 0x50) != 9) {
    cVar1 = FUN_1005bf2d0();
    iVar2 = (cVar1 == '\0') + 3;
  }
  return iVar2;
}


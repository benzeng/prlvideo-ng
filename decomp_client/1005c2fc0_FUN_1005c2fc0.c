
char FUN_1005c2fc0(long param_1)

{
  int iVar1;
  char cVar2;
  
  iVar1 = *(int *)(*(long *)(param_1 + 0x18) + 0x50);
  cVar2 = '\x12';
  if (iVar1 != 5) {
    cVar2 = (iVar1 == 10) * '\x04' + '\x05';
  }
  return cVar2;
}


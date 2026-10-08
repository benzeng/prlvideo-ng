
void FUN_100735a10(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 0x50);
  if (((lVar1 != 0) && (*(int *)(lVar1 + 4) != 0)) &&
     (*(long *)(*(long *)(param_1 + 0x30) + 0x58) != 0)) {
    FUN_1007350e0();
    return;
  }
  return;
}


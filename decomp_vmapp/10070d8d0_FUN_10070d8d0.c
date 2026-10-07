
bool FUN_10070d8d0(long param_1)

{
  long lVar1;
  bool bVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 == 0) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    if (*(int *)(lVar1 + 0x24) == 0) {
      bVar2 = *(int *)(lVar1 + 0x20) != 0;
    }
  }
  return bVar2;
}



bool FUN_10070c490(long param_1)

{
  long lVar1;
  bool bVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 == 0) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    if (*(int *)(lVar1 + 0xa4) == 0) {
      bVar2 = *(int *)(lVar1 + 0xa0) != 0;
    }
  }
  return bVar2;
}


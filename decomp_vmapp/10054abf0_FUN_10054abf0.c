
bool FUN_10054abf0(long param_1)

{
  long lVar1;
  bool bVar2;
  
  lVar1 = *(long *)(param_1 + 0x30);
  bVar2 = true;
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x10) == '\0')) {
    bVar2 = *(char *)(lVar1 + 0x20) != '\0';
  }
  return bVar2;
}


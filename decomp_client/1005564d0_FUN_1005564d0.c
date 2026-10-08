
void FUN_1005564d0(long param_1)

{
  byte bVar1;
  long lVar2;
  
  lVar2 = FUN_100552190(param_1 + 0x20);
  if (lVar2 != 0) {
    bVar1 = FUN_100714bb0(lVar2);
    if ((bVar1 & 8) == 0) {
      FUN_100556510(param_1);
      return;
    }
  }
  return;
}


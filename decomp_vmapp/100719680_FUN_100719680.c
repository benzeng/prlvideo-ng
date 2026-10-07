
bool FUN_100719680(long param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  
  bVar4 = false;
  if (param_1 != 0) {
    lVar3 = 0;
    do {
      if ((long)*(char *)(param_1 + lVar3) < 0) {
        return false;
      }
      if ((PTR___DefaultRuneLocale_100ba20c0[(long)*(char *)(param_1 + lVar3) * 4 + 0x3e] & 1) == 0)
      {
        return false;
      }
      lVar2 = (long)*(char *)(param_1 + 1 + lVar3);
      if (lVar2 < 0) {
        return false;
      }
      if ((PTR___DefaultRuneLocale_100ba20c0[lVar2 * 4 + 0x3e] & 1) == 0) {
        return false;
      }
      lVar2 = (long)*(char *)(param_1 + 2 + lVar3);
      if (lVar2 < 0) {
        return false;
      }
      if ((PTR___DefaultRuneLocale_100ba20c0[lVar2 * 4 + 0x3e] & 1) == 0) {
        return false;
      }
      lVar2 = (long)*(char *)(param_1 + 3 + lVar3);
      if (lVar2 < 0) {
        return false;
      }
      if ((PTR___DefaultRuneLocale_100ba20c0[lVar2 * 4 + 0x3e] & 1) == 0) {
        return false;
      }
      cVar1 = *(char *)(param_1 + 4 + lVar3);
      if (((int)lVar3 != 0x23) && (cVar1 != '.')) {
        return false;
      }
      lVar3 = lVar3 + 5;
    } while ((int)lVar3 != 0x28);
    bVar4 = cVar1 == '\0';
  }
  return bVar4;
}


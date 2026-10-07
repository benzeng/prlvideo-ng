
bool FUN_100710950(long *param_1,QString *param_2)

{
  QString *pQVar1;
  int iVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  
  lVar3 = *param_1;
  iVar2 = *(int *)(lVar3 + 8);
  if (iVar2 < *(int *)(lVar3 + 0xc)) {
    lVar6 = (long)(*(int *)(lVar3 + 0xc) - iVar2) << 3;
    do {
      if (lVar6 == 0) {
        return false;
      }
      pQVar1 = (QString *)(lVar3 + (long)iVar2 * 8 + 8 + lVar6);
      cVar4 = operator==(pQVar1,param_2);
      lVar6 = lVar6 + -8;
    } while (cVar4 == '\0');
    bVar5 = 1 < (int)((ulong)((long)pQVar1 - (lVar3 + 0x10 + (long)iVar2 * 8)) >> 3) + 1U;
  }
  else {
    bVar5 = false;
  }
  return bVar5;
}


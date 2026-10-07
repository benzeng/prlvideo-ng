
bool FUN_1004b5960(long param_1,QString *param_2)

{
  QString *pQVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  QString *pQVar5;
  QString *pQVar6;
  long lVar7;
  
  QMutex::lock();
  lVar7 = *(long *)(param_1 + 0x38);
  iVar2 = *(int *)(lVar7 + 8);
  pQVar6 = (QString *)(lVar7 + 0x10 + (long)iVar2 * 8);
  iVar3 = *(int *)(lVar7 + 0xc);
  pQVar1 = (QString *)(lVar7 + 0x10 + (long)iVar3 * 8);
  pQVar5 = pQVar6;
  if (iVar2 != iVar3) {
    lVar7 = (long)iVar3 * 8 + (long)iVar2 * -8;
    do {
      cVar4 = operator==(pQVar6,param_2);
      pQVar5 = pQVar6;
      if (cVar4 != '\0') break;
      pQVar6 = pQVar6 + 1;
      lVar7 = lVar7 + -8;
      pQVar5 = pQVar1;
    } while (lVar7 != 0);
  }
  QMutex::unlock();
  return pQVar5 != pQVar1;
}


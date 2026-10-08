
undefined1 FUN_100714df0(QString *param_1,QString *param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  QTypedArrayData<unsigned_short> *pQVar4;
  QTypedArrayData<unsigned_short> *pQVar5;
  undefined1 uVar6;
  long lVar7;
  
  cVar3 = operator==(param_1,param_2);
  if (cVar3 == '\0') {
    uVar6 = 0;
  }
  else {
    cVar3 = operator==(param_1 + 1,param_2 + 1);
    if (cVar3 == '\0') {
      uVar6 = 0;
    }
    else {
      pQVar5 = param_1[2].field0_0x0;
      pQVar4 = param_2[2].field0_0x0;
      uVar6 = 1;
      if (pQVar5 != pQVar4) {
        iVar1 = *(int *)(pQVar5 + 0xc);
        iVar2 = *(int *)(pQVar5 + 8);
        if (iVar1 - iVar2 == *(int *)(pQVar4 + 0xc) - *(int *)(pQVar4 + 8)) {
          if (iVar1 != iVar2) {
            pQVar5 = pQVar5 + (long)iVar2 * 8 + 0x10;
            pQVar4 = pQVar4 + (long)*(int *)(pQVar4 + 8) * 8 + 0x10;
            lVar7 = (long)iVar1 * 8 + (long)iVar2 * -8;
            do {
              cVar3 = FUN_100714bd0(*(undefined8 *)pQVar5,*(undefined8 *)pQVar4);
              if (cVar3 == '\0') {
                return 0;
              }
              pQVar5 = pQVar5 + 8;
              pQVar4 = pQVar4 + 8;
              lVar7 = lVar7 + -8;
            } while (lVar7 != 0);
          }
        }
        else {
          uVar6 = 0;
        }
      }
    }
  }
  return uVar6;
}



bool FUN_100154f20(long param_1,QString *param_2,char param_3)

{
  QString *pQVar1;
  int iVar2;
  QTypedArrayData<unsigned_short> *pQVar3;
  char cVar4;
  int iVar5;
  QString *pQVar6;
  QString *pQVar7;
  long lVar8;
  bool bVar9;
  bool bVar10;
  
  pQVar3 = param_2->field0_0x0;
  iVar5 = QString::compare_helper
                    (pQVar3 + *(long *)(pQVar3 + 0x10),*(undefined4 *)(pQVar3 + 4),"localhost",
                     0xffffffff,1);
  bVar9 = true;
  if (iVar5 != 0) {
    pQVar3 = param_2->field0_0x0;
    iVar5 = QString::compare_helper
                      (pQVar3 + *(long *)(pQVar3 + 0x10),*(undefined4 *)(pQVar3 + 4),"127.0.0.1",
                       0xffffffff,1);
    bVar9 = iVar5 == 0;
  }
  bVar10 = bVar9;
  if (((param_3 != '\0') && (bVar10 = true, bVar9 == false)) &&
     (cVar4 = operator==(param_2,(QString *)(param_1 + 0x18)), cVar4 == '\0')) {
    lVar8 = *(long *)(param_1 + 0x20);
    iVar5 = *(int *)(lVar8 + 8);
    pQVar7 = (QString *)(lVar8 + 0x10 + (long)iVar5 * 8);
    iVar2 = *(int *)(lVar8 + 0xc);
    pQVar1 = (QString *)(lVar8 + 0x10 + (long)iVar2 * 8);
    pQVar6 = pQVar7;
    if (iVar5 != iVar2) {
      lVar8 = (long)iVar2 * 8 + (long)iVar5 * -8;
      do {
        cVar4 = operator==(pQVar7,param_2);
        pQVar6 = pQVar7;
        if (cVar4 != '\0') break;
        pQVar7 = pQVar7 + 1;
        lVar8 = lVar8 + -8;
        pQVar6 = pQVar1;
      } while (lVar8 != 0);
    }
    bVar10 = pQVar6 != pQVar1;
  }
  return bVar10;
}


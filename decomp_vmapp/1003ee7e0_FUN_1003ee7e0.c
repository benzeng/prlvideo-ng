
void FUN_1003ee7e0(QFile *param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  QArrayData *pQVar6;
  long lVar7;
  
  iVar4 = *(int *)(param_1 + 0x1c);
  if (0 < iVar4) {
    lVar5 = *(long *)(param_1 + 0x1fe0);
    iVar3 = iVar4;
    do {
      lVar1 = *(long *)(lVar5 + 0x38);
      if (lVar5 != 0) {
        if (*(long *)(lVar5 + -8) != 0) {
          lVar7 = *(long *)(lVar5 + -8) << 6;
          do {
            pQVar6 = *(QArrayData **)(lVar5 + -0x20 + lVar7);
            if (*(int *)pQVar6 != -1) {
              if (*(int *)pQVar6 != 0) {
                LOCK();
                *(int *)pQVar6 = *(int *)pQVar6 + -1;
                UNLOCK();
                if (*(int *)pQVar6 != 0) goto LAB_1003ee87b;
                pQVar6 = *(QArrayData **)(lVar5 + -0x20 + lVar7);
              }
              QArrayData::deallocate(pQVar6,2,8);
            }
LAB_1003ee87b:
            lVar7 = lVar7 + -0x40;
          } while (lVar7 != 0);
        }
        operator_delete__((void *)(lVar5 + -8));
        iVar4 = *(int *)(param_1 + 0x1c);
      }
      *(long *)(param_1 + 0x1fe0) = lVar1;
      iVar4 = iVar4 + -1;
      *(int *)(param_1 + 0x1c) = iVar4;
      bVar2 = 1 < iVar3;
      lVar5 = lVar1;
      iVar3 = iVar3 + -1;
    } while (bVar2);
  }
  lVar5 = 0;
  do {
    FUN_1003ee5b0(param_1 + lVar5 + 0x18a0);
    lVar5 = lVar5 + -0x40;
  } while (lVar5 != -0x18c0);
  pQVar6 = *(QArrayData **)(param_1 + 0x10);
  if (*(int *)pQVar6 != -1) {
    if (*(int *)pQVar6 != 0) {
      LOCK();
      *(int *)pQVar6 = *(int *)pQVar6 + -1;
      UNLOCK();
      if (*(int *)pQVar6 != 0) goto LAB_1003ee917;
      pQVar6 = *(QArrayData **)(param_1 + 0x10);
    }
    QArrayData::deallocate(pQVar6,2,8);
  }
LAB_1003ee917:
  QFile::~QFile(param_1);
  return;
}


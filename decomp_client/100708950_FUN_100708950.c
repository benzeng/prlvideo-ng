
bool FUN_100708950(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  QKeySequence *pQVar4;
  QKeySequence *pQVar5;
  long lVar6;
  bool bVar7;
  Data *local_48;
  Data *local_40;
  undefined1 local_31;
  
  FUN_1005607f0(&local_40,param_1);
  FUN_1005607f0(&local_48,param_2);
  if (local_40 == local_48) {
LAB_1007089e1:
    bVar7 = *(int *)(param_1 + 8) == *(int *)(param_2 + 8);
  }
  else {
    iVar1 = *(int *)(local_40 + 0xc);
    iVar2 = *(int *)(local_40 + 8);
    if (iVar1 - iVar2 == *(int *)(local_48 + 0xc) - *(int *)(local_48 + 8)) {
      if (iVar1 != iVar2) {
        pQVar5 = (QKeySequence *)(local_40 + (long)iVar2 * 8 + 0x10);
        pQVar4 = (QKeySequence *)(local_48 + (long)*(int *)(local_48 + 8) * 8 + 0x10);
        lVar6 = (long)iVar1 * 8 + (long)iVar2 * -8;
        do {
          cVar3 = QKeySequence::operator==(pQVar5,pQVar4);
          if (cVar3 == '\0') {
            bVar7 = false;
            goto LAB_1007089f2;
          }
          pQVar5 = pQVar5 + 8;
          pQVar4 = pQVar4 + 8;
          lVar6 = lVar6 + -8;
        } while (lVar6 != 0);
      }
      goto LAB_1007089e1;
    }
    bVar7 = false;
  }
LAB_1007089f2:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100708a5a;
    }
    iVar1 = *(int *)(local_48 + 0xc);
    if (iVar1 != *(int *)(local_48 + 8)) {
      lVar6 = (long)*(int *)(local_48 + 8) * 8 + (long)iVar1 * -8;
      pQVar5 = (QKeySequence *)(local_48 + (long)iVar1 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(pQVar5);
        pQVar5 = pQVar5 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose(local_48);
  }
LAB_100708a5a:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return bVar7;
      }
      local_31 = 0;
    }
    iVar1 = *(int *)(local_40 + 0xc);
    if (iVar1 != *(int *)(local_40 + 8)) {
      lVar6 = (long)*(int *)(local_40 + 8) * 8 + (long)iVar1 * -8;
      pQVar5 = (QKeySequence *)(local_40 + (long)iVar1 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(pQVar5);
        pQVar5 = pQVar5 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose(local_40);
  }
  return bVar7;
}


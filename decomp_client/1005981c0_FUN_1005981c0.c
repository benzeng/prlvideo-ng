
long FUN_1005981c0(long param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  Data *pDVar3;
  char cVar4;
  uint uVar5;
  long lVar6;
  QKeySequence *pQVar7;
  Data *pDVar8;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  undefined4 local_40;
  undefined1 local_31;
  
  if (DAT_102274448 == 0) {
    DAT_102274448 = FUN_100597d90("CShortcutInfo",0xffffffffffffffff,1);
  }
  uVar2 = DAT_102274448;
  uVar5 = QVariant::userType();
  pDVar8 = (Data *)PTR_shared_null_1021e15e8;
  if (uVar2 == uVar5) {
    lVar6 = QVariant::constData();
    FUN_1005607f0(param_1,lVar6);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(lVar6 + 8);
    return param_1;
  }
  local_50 = (Data *)PTR_shared_null_1021e15e8;
  FUN_100708220(&local_48,&local_50,2);
  pDVar3 = local_50;
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005982d5;
    }
    iVar1 = *(int *)(local_50 + 0xc);
    if (iVar1 != *(int *)(local_50 + 8)) {
      lVar6 = (long)*(int *)(local_50 + 8) * 8 + (long)iVar1 * -8;
      pQVar7 = (QKeySequence *)(local_50 + (long)iVar1 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(pQVar7);
        pQVar7 = pQVar7 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose(pDVar3);
    pDVar8 = (Data *)PTR_shared_null_1021e15e8;
  }
LAB_1005982d5:
  cVar4 = QVariant::convert(param_2,(void *)(ulong)uVar2);
  if (cVar4 == '\0') {
    local_58 = pDVar8;
    FUN_100708220(param_1,&local_58,2);
    pDVar8 = local_58;
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10059837a;
      }
      iVar1 = *(int *)(local_58 + 0xc);
      if (iVar1 != *(int *)(local_58 + 8)) {
        lVar6 = (long)*(int *)(local_58 + 8) * 8 + (long)iVar1 * -8;
        pQVar7 = (QKeySequence *)(local_58 + (long)iVar1 * 8 + 8);
        do {
          QKeySequence::~QKeySequence(pQVar7);
          pQVar7 = pQVar7 + -8;
          lVar6 = lVar6 + 8;
        } while (lVar6 != 0);
      }
      QListData::dispose(pDVar8);
    }
  }
  else {
    FUN_1005607f0(param_1,&local_48);
    *(undefined4 *)(param_1 + 8) = local_40;
  }
LAB_10059837a:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    iVar1 = *(int *)(local_48 + 0xc);
    if (iVar1 != *(int *)(local_48 + 8)) {
      lVar6 = (long)*(int *)(local_48 + 8) * 8 + (long)iVar1 * -8;
      pQVar7 = (QKeySequence *)(local_48 + (long)iVar1 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(pQVar7);
        pQVar7 = pQVar7 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose(local_48);
  }
  return param_1;
}


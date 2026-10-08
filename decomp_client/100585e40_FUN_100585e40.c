
void FUN_100585e40(long param_1,long *param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  Data *pDVar4;
  QString *pQVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  QKeySequence *pQVar10;
  long lVar11;
  long lVar12;
  Data *this;
  QKeySequence local_68 [8];
  QArrayData *local_60;
  Data *local_58;
  QKeySequence local_50 [8];
  Data *local_48;
  Data *local_40;
  undefined1 local_31;
  
  *(undefined4 *)(param_1 + 0x20) = 1;
  puVar1 = (undefined8 *)(param_1 + 0x48);
  if (*(long *)(param_1 + 0x48) != *param_2) {
    FUN_1005607f0(&local_40,param_2);
    pDVar4 = (Data *)*puVar1;
    *puVar1 = local_40;
    local_40 = pDVar4;
    if (*(int *)pDVar4 != -1) {
      if (*(int *)pDVar4 != 0) {
        LOCK();
        *(int *)pDVar4 = *(int *)pDVar4 + -1;
        local_31 = *(int *)pDVar4 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100585f15;
      }
      iVar2 = *(int *)(pDVar4 + 0xc);
      if (iVar2 != *(int *)(pDVar4 + 8)) {
        lVar12 = (long)*(int *)(pDVar4 + 8) * 8 + (long)iVar2 * -8;
        this = pDVar4 + (long)iVar2 * 8 + 8;
        do {
          QKeySequence::~QKeySequence((QKeySequence *)this);
          this = this + -8;
          lVar12 = lVar12 + 8;
        } while (lVar12 != 0);
      }
      QListData::dispose(pDVar4);
    }
  }
LAB_100585f15:
  *(int *)(param_1 + 0x50) = (int)param_2[1];
  *(undefined4 *)(param_1 + 0x58) = param_3;
  FUN_100587720(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x10));
  lVar12 = param_1 + 0x70;
  puVar8 = (undefined4 *)FUN_100589550(lVar12,*(long *)(param_1 + 0x18) + 0x38);
  *puVar8 = 0x10000000;
  puVar8 = (undefined4 *)FUN_100589550(lVar12,*(long *)(param_1 + 0x18) + 0x40);
  *puVar8 = 0x8000000;
  puVar8 = (undefined4 *)FUN_100589550(lVar12,*(long *)(param_1 + 0x18) + 0x30);
  *puVar8 = 0x2000000;
  puVar8 = (undefined4 *)FUN_100589550(lVar12,*(long *)(param_1 + 0x18) + 0x48);
  *puVar8 = 0x4000000;
  FUN_1005841b0(param_1);
  FUN_100584d50(param_1);
  FUN_100708240(&local_48,puVar1);
  iVar2 = *(int *)(local_48 + 0xc);
  iVar3 = *(int *)(local_48 + 8);
  if (*(int *)local_48 != -1) {
    iVar9 = iVar3;
    iVar6 = iVar2;
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      local_40 = (Data *)CONCAT71(local_40._1_7_,*(int *)local_48 != 0);
      if (*(int *)local_48 != 0) goto LAB_100586031;
      iVar9 = *(int *)(local_48 + 8);
      iVar6 = *(int *)(local_48 + 0xc);
    }
    if (iVar6 != iVar9) {
      lVar11 = (long)iVar9 * 8 + (long)iVar6 * -8;
      pQVar10 = (QKeySequence *)(local_48 + (long)iVar6 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(pQVar10);
        pQVar10 = pQVar10 + -8;
        lVar11 = lVar11 + 8;
      } while (lVar11 != 0);
    }
    QListData::dispose(local_48);
  }
LAB_100586031:
  if (iVar2 <= iVar3) {
    return;
  }
  FUN_100708240(&local_58,puVar1);
  QKeySequence::QKeySequence
            (local_50,(QKeySequence *)(local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10));
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      local_40 = (Data *)CONCAT71(local_40._1_7_,*(int *)local_58 != 0);
      if (*(int *)local_58 != 0) goto LAB_1005860ca;
    }
    iVar2 = *(int *)(local_58 + 0xc);
    if (iVar2 != *(int *)(local_58 + 8)) {
      lVar11 = (long)*(int *)(local_58 + 8) * 8 + (long)iVar2 * -8;
      pQVar10 = (QKeySequence *)(local_58 + (long)iVar2 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(pQVar10);
        pQVar10 = pQVar10 + -8;
        lVar11 = lVar11 + 8;
      } while (lVar11 != 0);
    }
    QListData::dispose(local_58);
  }
LAB_1005860ca:
  FUN_100585370(lVar12,local_50);
  FUN_1005855a0(lVar12,1);
  uVar7 = QKeySequence::operator[]((uint)local_50);
  pQVar5 = *(QString **)(*(long *)(param_1 + 0x18) + 0x50);
  QKeySequence::QKeySequence(local_68,uVar7 & 0x1ffffff,0,0,0);
  FUN_1007170a0(&local_60,local_68,0);
  QLineEdit::setText(pQVar5);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      UNLOCK();
      local_40 = (Data *)CONCAT71(local_40._1_7_,*(int *)local_60 != 0);
      if (*(int *)local_60 != 0) goto LAB_100586158;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100586158:
  QKeySequence::~QKeySequence(local_68);
  FUN_100585870(param_1);
  FUN_100585c20(param_1);
  QKeySequence::~QKeySequence(local_50);
  return;
}


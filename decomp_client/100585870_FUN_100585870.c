
void FUN_100585870(long param_1)

{
  QString *pQVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QKeySequence local_48 [8];
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  iVar2 = *(int *)(param_1 + 0x20);
  if (iVar2 == 0) {
    pQVar1 = *(QString **)(*(long *)(param_1 + 0x18) + 0x28);
    QMetaObject::tr((char *)&local_38,"",0x1dcdc16);
    FUN_1005864f0(local_48,param_1);
    FUN_1007170a0(&local_40,local_48,0);
    QString::arg(&local_30,&local_38,&local_40,0,0x20);
    QLabel::setText(pQVar1);
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        local_21 = *(int *)local_30 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100585923;
      }
      QArrayData::deallocate(local_30,2,8);
    }
LAB_100585923:
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_21 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100585953;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_100585953:
    QKeySequence::~QKeySequence(local_48);
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_21 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10058598c;
      }
      QArrayData::deallocate(local_38,2,8);
    }
LAB_10058598c:
    iVar2 = *(int *)(param_1 + 0x20);
  }
  if (iVar2 != 1) goto LAB_100585a9e;
  uVar3 = FUN_1006b9420();
  lVar4 = FUN_1006b94a0(uVar3,*(undefined4 *)(param_1 + 0x58));
  if (lVar4 == 0) goto LAB_100585a9e;
  pQVar1 = *(QString **)(*(long *)(param_1 + 0x18) + 0x28);
  QMetaObject::tr((char *)&local_58,"",0x1e0284e);
  QAction::text();
  QString::arg(&local_50,&local_58,&local_60,0,0x20);
  QLabel::setText(pQVar1);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100585a3e;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100585a3e:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_21 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100585a6e;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100585a6e:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100585a9e;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100585a9e:
  FUN_100586430(param_1);
  return;
}



void FUN_1002e4430(long param_1,uint param_2)

{
  long lVar1;
  QMetaObject *pQVar2;
  int iVar3;
  QStringList *pQVar4;
  Data_conflict local_128;
  undefined4 local_120;
  QArrayData *local_118;
  QMetaObject *local_110 [3];
  bool local_f8;
  QVariant local_f0;
  undefined1 local_e0;
  Data_conflict local_d8;
  undefined4 local_d0;
  QArrayData *local_c8;
  QMetaObject *local_c0 [3];
  bool local_a8;
  QVariant local_a0;
  undefined1 local_90;
  CSlotInfo local_88;
  Data_conflict local_58;
  undefined4 local_50;
  undefined1 local_48;
  undefined1 local_31;
  
  local_88.field1_0x10.field0_0x0 = (QMetaObject *)0x0;
  local_88._24_8_ = 0;
  local_88.field3_0x28 = 0;
  local_88.field2_0x1c.field0_0x0._4_8_ = 0;
  local_50 = 0x80000000;
  local_58.field7 = 0;
  local_48 = 1;
  local_88.field0_0x0.field0_0x0.field1_0x8 = (QObject *)PTR_shared_null_1021e15e8;
  local_88.field0_0x0.field0_0x0.field0_0x0 = (ExternalRefCountData *)PTR_shared_null_1021e15e8;
  if (param_2 == 0x80015406) {
    local_c8 = (QArrayData *)
               QString::fromAscii_helper
                         ("1onUpgradeRequestRetryAnswered(PRL_RESULT, CMessageBox::MessageBoxResult)"
                          ,0x49);
    local_d0 = 0x80000000;
    local_d8.field7 = 0;
    FUN_100a1c600(local_c0,param_1,&local_c8,&local_d8);
    pQVar2 = local_c0[0];
    if (local_88.field1_0x10.field0_0x0 != local_c0[0]) {
      if (local_c0[0] != (QMetaObject *)0x0) {
        LOCK();
        *(int *)local_c0[0] = *(int *)local_c0[0] + 1;
        local_31 = *(int *)local_c0[0] != 0;
        UNLOCK();
      }
      if (local_88.field1_0x10.field0_0x0 != (QMetaObject *)0x0) {
        LOCK();
        *(int *)local_88.field1_0x10.field0_0x0 = *(int *)local_88.field1_0x10.field0_0x0 + -1;
        local_31 = *(int *)local_88.field1_0x10.field0_0x0 != 0;
        UNLOCK();
        if ((!(bool)local_31) && (local_88.field1_0x10.field0_0x0 != (QMetaObject *)0x0)) {
          operator_delete(local_88.field1_0x10.field0_0x0);
        }
      }
      local_88.field1_0x10.field0_0x0 = pQVar2;
      local_88._24_8_ = local_c0[1];
    }
    local_88.field3_0x28 = local_a8;
    local_88.field2_0x1c.field0_0x0._4_8_ = local_c0[2];
    QVariant::operator=((QVariant *)&local_58,&local_a0);
    local_48 = local_90;
    QVariant::~QVariant(&local_a0);
    if (local_c0[0] != (QMetaObject *)0x0) {
      LOCK();
      *(int *)local_c0[0] = *(int *)local_c0[0] + -1;
      local_31 = *(int *)local_c0[0] != 0;
      UNLOCK();
      if ((!(bool)local_31) && (local_c0[0] != (QMetaObject *)0x0)) {
        operator_delete(local_c0[0]);
      }
    }
    QVariant::~QVariant((QVariant *)&local_d8);
    if (*(int *)local_c8 != -1) {
      if (*(int *)local_c8 != 0) {
        LOCK();
        *(int *)local_c8 = *(int *)local_c8 + -1;
        local_31 = *(int *)local_c8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002e471e;
      }
      QArrayData::deallocate(local_c8,2,8);
    }
  }
  else {
    local_118 = (QArrayData *)
                QString::fromAscii_helper
                          ("1onUpgradeRequestErrorAnswered(PRL_RESULT, CMessageBox::MessageBoxResult)"
                           ,0x49);
    local_120 = 0x80000000;
    local_128.field7 = 0;
    FUN_100a1c600(local_110,param_1,&local_118,&local_128);
    pQVar2 = local_110[0];
    if (local_88.field1_0x10.field0_0x0 != local_110[0]) {
      if (local_110[0] != (QMetaObject *)0x0) {
        LOCK();
        *(int *)local_110[0] = *(int *)local_110[0] + 1;
        local_31 = *(int *)local_110[0] != 0;
        UNLOCK();
      }
      if (local_88.field1_0x10.field0_0x0 != (QMetaObject *)0x0) {
        LOCK();
        *(int *)local_88.field1_0x10.field0_0x0 = *(int *)local_88.field1_0x10.field0_0x0 + -1;
        local_31 = *(int *)local_88.field1_0x10.field0_0x0 != 0;
        UNLOCK();
        if ((!(bool)local_31) && (local_88.field1_0x10.field0_0x0 != (QMetaObject *)0x0)) {
          operator_delete(local_88.field1_0x10.field0_0x0);
        }
      }
      local_88.field1_0x10.field0_0x0 = pQVar2;
      local_88._24_8_ = local_110[1];
    }
    local_88.field3_0x28 = local_f8;
    local_88.field2_0x1c.field0_0x0._4_8_ = local_110[2];
    QVariant::operator=((QVariant *)&local_58,&local_f0);
    local_48 = local_e0;
    QVariant::~QVariant(&local_f0);
    if (local_110[0] != (QMetaObject *)0x0) {
      LOCK();
      *(int *)local_110[0] = *(int *)local_110[0] + -1;
      local_31 = *(int *)local_110[0] != 0;
      UNLOCK();
      if ((!(bool)local_31) && (local_110[0] != (QMetaObject *)0x0)) {
        operator_delete(local_110[0]);
      }
    }
    QVariant::~QVariant((QVariant *)&local_128);
    if (*(int *)local_118 != -1) {
      if (*(int *)local_118 != 0) {
        LOCK();
        *(int *)local_118 = *(int *)local_118 + -1;
        local_31 = *(int *)local_118 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002e471e;
      }
      QArrayData::deallocate(local_118,2,8);
    }
  }
LAB_1002e471e:
  iVar3 = CMessageManager::instance();
  lVar1 = *(long *)(*(long *)(param_1 + 0x18) + 0x50);
  pQVar4 = (QStringList *)0x0;
  if ((lVar1 != 0) && (pQVar4 = (QStringList *)0x0, *(int *)(lVar1 + 4) != 0)) {
    pQVar4 = *(QStringList **)(*(long *)(param_1 + 0x18) + 0x58);
  }
  CMessageManager::showMessageBox
            (iVar3,(QWidget *)(ulong)param_2,pQVar4,
             (QStringList *)&local_88.field0_0x0.field0_0x0.field1_0x8,&local_88,
             (bool)((char)&local_88 + '\x10'));
  FUN_100039a80(&local_88);
  FUN_100039a80(&local_88.field0_0x0.field0_0x0.field1_0x8);
  QVariant::~QVariant((QVariant *)&local_58);
  if (local_88.field1_0x10.field0_0x0 != (QMetaObject *)0x0) {
    LOCK();
    *(int *)local_88.field1_0x10.field0_0x0 = *(int *)local_88.field1_0x10.field0_0x0 + -1;
    local_31 = *(int *)local_88.field1_0x10.field0_0x0 != 0;
    UNLOCK();
    if ((!(bool)local_31) && (local_88.field1_0x10.field0_0x0 != (QMetaObject *)0x0)) {
      operator_delete(local_88.field1_0x10.field0_0x0);
    }
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x00010025fb06) */
/* WARNING: Removing unreachable block (ram,0x00010025fb14) */
/* WARNING: Removing unreachable block (ram,0x00010025fb20) */

void FUN_10025f970(long *param_1,int param_2)

{
  int iVar1;
  long lVar2;
  Data *pDVar3;
  Data *pDVar4;
  QArrayData *pQVar5;
  AnonymousUnion0 AVar6;
  uint in_stack_ffffffffffffff0c;
  Data_conflict local_b8;
  undefined4 local_b0;
  undefined1 local_a8;
  int *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_80;
  Data_conflict local_78;
  undefined4 local_70;
  undefined1 local_68;
  Data *local_58;
  AnonymousUnion0 local_50;
  AnonymousUnion0 local_48;
  AnonymousUnion0 local_40 [2];
  
  if (param_2 < 0) {
    if (param_2 == -0x7ffffd8b) goto LAB_10025fca1;
    iVar1 = CMessageManager::instance();
    local_48.field1 = (Data *)PTR_shared_null_1021e1288;
    local_50.field1 = (Data *)PTR_shared_null_1021e15e8;
    local_58 = (Data *)PTR_shared_null_1021e15e8;
    local_98 = (int *)0x0;
    uStack_90 = 0;
    local_80 = 0;
    local_88 = 0;
    local_70 = 0x80000000;
    local_78.field7 = 0;
    local_68 = 1;
    local_b0 = 0x80000000;
    local_b8.field7 = 0;
    local_a8 = 1;
    CMessageManager::showMessageBox
              (iVar1,(QString *)0x80015450,(QStringList *)&local_48.field0,
               (QStringList *)&local_50.field0,(CSlotInfo *)&local_58,SUB81(&local_98,0),
               (QWidget *)((ulong)in_stack_ffffffffffffff0c << 0x20),(CSlotInfo *)0x0);
    QVariant::~QVariant((QVariant *)&local_b8);
    QVariant::~QVariant((QVariant *)&local_78);
    if (local_98 != (int *)0x0) {
      LOCK();
      *local_98 = *local_98 + -1;
      local_40[1]._7_1_ = *local_98 != 0;
      UNLOCK();
      if ((!(bool)local_40[1]._7_1_) && (local_98 != (int *)0x0)) {
        operator_delete(local_98);
      }
    }
    pDVar4 = local_58;
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_40[1]._7_1_ = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_40[1]._7_1_) goto LAB_10025fbe1;
      }
      iVar1 = *(int *)(local_58 + 0xc);
      if (iVar1 != *(int *)(local_58 + 8)) {
        lVar2 = (long)*(int *)(local_58 + 8) * 8 + (long)iVar1 * -8;
        pDVar3 = local_58 + (long)iVar1 * 8 + 8;
        do {
          pQVar5 = *(QArrayData **)pDVar3;
          if (*(int *)pQVar5 == 0) {
LAB_10025fbc0:
            QArrayData::deallocate(pQVar5,2,8);
          }
          else if (*(int *)pQVar5 != -1) {
            LOCK();
            *(int *)pQVar5 = *(int *)pQVar5 + -1;
            local_40[1]._7_1_ = *(int *)pQVar5 != 0;
            UNLOCK();
            if (!(bool)local_40[1]._7_1_) {
              pQVar5 = *(QArrayData **)pDVar3;
              goto LAB_10025fbc0;
            }
          }
          pDVar3 = pDVar3 + -8;
          lVar2 = lVar2 + 8;
        } while (lVar2 != 0);
      }
      QListData::dispose(pDVar4);
    }
LAB_10025fbe1:
    AVar6 = local_50;
    if (*(int *)local_50.field1 != -1) {
      if (*(int *)local_50.field1 != 0) {
        LOCK();
        *(int *)local_50.field1 = *(int *)local_50.field1 + -1;
        local_40[1]._7_1_ = *(int *)local_50.field1 != 0;
        UNLOCK();
        if ((bool)local_40[1]._7_1_) goto LAB_10025fc71;
      }
      iVar1 = *(int *)(local_50.field1 + 0xc);
      if (iVar1 != *(int *)(local_50.field1 + 8)) {
        lVar2 = (long)*(int *)(local_50.field1 + 8) * 8 + (long)iVar1 * -8;
        pDVar4 = (Data *)(local_50.field1 + (long)iVar1 * 8 + 8);
        do {
          pQVar5 = *(QArrayData **)pDVar4;
          if (*(int *)pQVar5 == 0) {
LAB_10025fc50:
            QArrayData::deallocate(pQVar5,2,8);
          }
          else if (*(int *)pQVar5 != -1) {
            LOCK();
            *(int *)pQVar5 = *(int *)pQVar5 + -1;
            local_40[1]._7_1_ = *(int *)pQVar5 != 0;
            UNLOCK();
            if (!(bool)local_40[1]._7_1_) {
              pQVar5 = *(QArrayData **)pDVar4;
              goto LAB_10025fc50;
            }
          }
          pDVar4 = pDVar4 + -8;
          lVar2 = lVar2 + 8;
        } while (lVar2 != 0);
      }
      QListData::dispose((Data *)AVar6.field1);
    }
LAB_10025fc71:
    if (*(int *)local_48.field1 == -1) goto LAB_10025fca1;
    AVar6 = local_48;
    if (*(int *)local_48.field1 != 0) {
      LOCK();
      *(int *)local_48.field1 = *(int *)local_48.field1 + -1;
      iVar1 = *(int *)local_48.field1;
      UNLOCK();
      goto joined_r0x00010025fc8c;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x1a) = 0;
    param_1[0x1b] = 0;
    QObject::sender();
    lVar2 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_102208250);
    local_40[0] = (AnonymousUnion0)((AnonymousUnion0 *)(lVar2 + 0x20))->field1;
    if (1 < *(int *)local_40[0].field1 + 1U) {
      LOCK();
      *(int *)local_40[0].field1 = *(int *)local_40[0].field1 + 1;
      local_40[1]._7_1_ = *(int *)local_40[0].field1 != 0;
      UNLOCK();
    }
    QString::operator=((QString *)(param_1 + 0xf),(QString *)&local_40[0].field0);
    if (*(int *)local_40[0].field1 == -1) goto LAB_10025fca1;
    AVar6 = local_40[0];
    if (*(int *)local_40[0].field1 != 0) {
      LOCK();
      *(int *)local_40[0].field1 = *(int *)local_40[0].field1 + -1;
      iVar1 = *(int *)local_40[0].field1;
      UNLOCK();
joined_r0x00010025fc8c:
      local_40[1]._7_1_ = iVar1 != 0;
      if ((bool)local_40[1]._7_1_) goto LAB_10025fca1;
    }
  }
  QArrayData::deallocate((QArrayData *)AVar6.field1,2,8);
LAB_10025fca1:
  (**(code **)(*param_1 + 0xb0))(param_1,param_2);
  return;
}


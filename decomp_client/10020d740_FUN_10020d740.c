
undefined8 FUN_10020d740(long param_1)

{
  ExternalRefCountData *pEVar1;
  QObject *pQVar2;
  int iVar3;
  QStringList *pQVar4;
  undefined8 uVar5;
  Data *pDVar6;
  QArrayData *pQVar7;
  long lVar8;
  int *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_80;
  Data_conflict local_78;
  undefined4 local_70;
  undefined1 local_68;
  CSlotInfo local_60;
  undefined1 local_29;
  
  if (((*(long *)(param_1 + 0x48) != 0) && (*(int *)(*(long *)(param_1 + 0x48) + 4) != 0)) &&
     (*(long *)(param_1 + 0x50) != 0)) {
    QWidget::close();
  }
  uVar5 = 0;
  FUN_10098e0d0(&local_60.field1_0x10.field1_0x8,0);
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_10011cdf0(&local_60.field1_0x10,uVar5);
  FUN_10098e1e0(&local_60.field1_0x10.field1_0x8,&local_60.field1_0x10);
  iVar3 = CMessageManager::instance();
  pQVar4 = (QStringList *)0x0;
  if ((*(long *)(param_1 + 0x28) != 0) &&
     (pQVar4 = (QStringList *)0x0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) {
    pQVar4 = *(QStringList **)(param_1 + 0x30);
  }
  local_60.field0_0x0.field0_0x0.field1_0x8 = (QObject *)PTR_shared_null_1021e15e8;
  local_60.field0_0x0.field0_0x0.field0_0x0 = (ExternalRefCountData *)PTR_shared_null_1021e15e8;
  local_98 = (int *)0x0;
  uStack_90 = 0;
  local_80 = 0;
  local_88 = 0;
  local_70 = 0x80000000;
  local_78.field7 = 0;
  local_68 = 1;
  CMessageManager::showMessageBox
            (iVar3,(QWidget *)0x3bb3,pQVar4,
             (QStringList *)&local_60.field0_0x0.field0_0x0.field1_0x8,&local_60,SUB81(&local_98,0))
  ;
  QVariant::~QVariant((QVariant *)&local_78);
  if (local_98 != (int *)0x0) {
    LOCK();
    *local_98 = *local_98 + -1;
    local_29 = *local_98 != 0;
    UNLOCK();
    if ((!(bool)local_29) && (local_98 != (int *)0x0)) {
      operator_delete(local_98);
    }
  }
  pEVar1 = local_60.field0_0x0.field0_0x0.field0_0x0;
  if (*(int *)local_60.field0_0x0.field0_0x0.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0.field0_0x0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0.field0_0x0.field0_0x0 =
           *(int *)local_60.field0_0x0.field0_0x0.field0_0x0 + -1;
      local_29 = *(int *)local_60.field0_0x0.field0_0x0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10020d8f1;
    }
    iVar3 = *(int *)(local_60.field0_0x0.field0_0x0.field0_0x0 + 0xc);
    if (iVar3 != *(int *)(local_60.field0_0x0.field0_0x0.field0_0x0 + 8)) {
      lVar8 = (long)*(int *)(local_60.field0_0x0.field0_0x0.field0_0x0 + 8) * 8 + (long)iVar3 * -8;
      pDVar6 = (Data *)(local_60.field0_0x0.field0_0x0.field0_0x0 + (long)iVar3 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_10020d8d0:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_29 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_10020d8d0;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)pEVar1);
  }
LAB_10020d8f1:
  pQVar2 = local_60.field0_0x0.field0_0x0.field1_0x8;
  if (*(int *)local_60.field0_0x0.field0_0x0.field1_0x8 != -1) {
    if (*(int *)local_60.field0_0x0.field0_0x0.field1_0x8 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0.field0_0x0.field1_0x8 =
           *(int *)local_60.field0_0x0.field0_0x0.field1_0x8 + -1;
      local_29 = *(int *)local_60.field0_0x0.field0_0x0.field1_0x8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10020d981;
    }
    iVar3 = *(int *)(local_60.field0_0x0.field0_0x0.field1_0x8 + 0xc);
    if (iVar3 != *(int *)(local_60.field0_0x0.field0_0x0.field1_0x8 + 8)) {
      lVar8 = (long)*(int *)(local_60.field0_0x0.field0_0x0.field1_0x8 + 8) * 8 + (long)iVar3 * -8;
      pDVar6 = (Data *)(local_60.field0_0x0.field0_0x0.field1_0x8 + (long)iVar3 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_10020d960:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_29 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_10020d960;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)pQVar2);
  }
LAB_10020d981:
  if (*(int *)local_60.field1_0x10.field0_0x0 != -1) {
    if (*(int *)local_60.field1_0x10.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field1_0x10.field0_0x0 = *(int *)local_60.field1_0x10.field0_0x0 + -1;
      local_29 = *(int *)local_60.field1_0x10.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10020d9b1;
    }
    QArrayData::deallocate((QArrayData *)local_60.field1_0x10.field0_0x0,2,8);
  }
LAB_10020d9b1:
  FUN_10098e170(&local_60.field1_0x10.field1_0x8);
  return 0;
}


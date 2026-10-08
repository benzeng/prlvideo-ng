
undefined8 FUN_1001f3440(long param_1)

{
  bool bVar1;
  AnonymousUnion0 AVar2;
  int iVar3;
  QString *pQVar4;
  QObject *pQVar5;
  int *piVar6;
  QObject *pQVar7;
  Data *pDVar8;
  Data *pDVar9;
  int iVar10;
  QArrayData *pQVar11;
  long lVar12;
  undefined8 uVar13;
  int *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  Data_conflict local_68;
  undefined4 local_60;
  undefined1 local_58;
  Data *local_50;
  AnonymousUnion0 local_48;
  QArrayData *local_40 [2];
  
  iVar3 = FUN_1001f1630();
  if (iVar3 == -0x7ffffffc) {
    return 0x80000004;
  }
  if (((*(long *)(param_1 + 0x28) == 0) || (*(int *)(*(long *)(param_1 + 0x28) + 4) == 0)) ||
     (pQVar5 = *(QObject **)(param_1 + 0x30), pQVar5 == (QObject *)0x0)) {
    pQVar4 = (QString *)CSearchParentHelper::instance();
    uVar13 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar13 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar13 = *(undefined8 *)(param_1 + 0x20);
    }
    FUN_100188480(local_40,uVar13);
    pQVar5 = (QObject *)
             CSearchParentHelper::getParentForMessage(pQVar4,SUB81(local_40,0),(QWidget *)0x0);
    piVar6 = (int *)0x0;
    bVar1 = true;
    if (pQVar5 != (QObject *)0x0) goto LAB_1001f34d6;
LAB_1001f34e6:
    if (*(int *)local_40[0] != -1) {
      if (*(int *)local_40[0] != 0) {
        LOCK();
        *(int *)local_40[0] = *(int *)local_40[0] + -1;
        local_40[1]._7_1_ = *(int *)local_40[0] != 0;
        UNLOCK();
        if ((bool)local_40[1]._7_1_) goto LAB_1001f3516;
      }
      QArrayData::deallocate(local_40[0],2,8);
    }
  }
  else {
    bVar1 = false;
LAB_1001f34d6:
    piVar6 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar5);
    if (bVar1) goto LAB_1001f34e6;
  }
LAB_1001f3516:
  iVar10 = (int)param_1;
  if (iVar3 == -0x7fffffca) {
    uVar13 = 0;
    CAbstractTask::appendSubTask(iVar10);
    goto LAB_1001f3769;
  }
  if (iVar3 != -0x7ffeae6c) {
    if (iVar3 == -0x7ffd8fff) {
      lVar12 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_10220dfb0);
      uVar13 = 0x80027001;
      if (lVar12 != 0) {
        uVar13 = 0;
        CAbstractTask::appendSubTask(iVar10);
      }
    }
    else {
      uVar13 = 0;
      CAbstractTask::appendSubTask(iVar10);
    }
    goto LAB_1001f3769;
  }
  iVar3 = CMessageManager::instance();
  pQVar7 = (QObject *)0x0;
  if ((piVar6 != (int *)0x0) && (pQVar7 = (QObject *)0x0, piVar6[1] != 0)) {
    pQVar7 = pQVar5;
  }
  local_48.field1 = (Data *)PTR_shared_null_1021e15e8;
  local_50 = (Data *)PTR_shared_null_1021e15e8;
  local_88 = (int *)0x0;
  uStack_80 = 0;
  local_70 = 0;
  local_78 = 0;
  local_60 = 0x80000000;
  local_68.field7 = 0;
  local_58 = 1;
  CMessageManager::showMessageBox
            (iVar3,(QWidget *)0x80015194,(QStringList *)pQVar7,(QStringList *)&local_48.field0,
             (CSlotInfo *)&local_50,SUB81(&local_88,0));
  QVariant::~QVariant((QVariant *)&local_68);
  if (local_88 != (int *)0x0) {
    LOCK();
    *local_88 = *local_88 + -1;
    local_40[1]._7_1_ = *local_88 != 0;
    UNLOCK();
    if ((!(bool)local_40[1]._7_1_) && (local_88 != (int *)0x0)) {
      operator_delete(local_88);
    }
  }
  pDVar9 = local_50;
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_40[1]._7_1_ = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_40[1]._7_1_) goto LAB_1001f3661;
    }
    iVar3 = *(int *)(local_50 + 0xc);
    if (iVar3 != *(int *)(local_50 + 8)) {
      lVar12 = (long)*(int *)(local_50 + 8) * 8 + (long)iVar3 * -8;
      pDVar8 = local_50 + (long)iVar3 * 8 + 8;
      do {
        pQVar11 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar11 == 0) {
LAB_1001f3640:
          QArrayData::deallocate(pQVar11,2,8);
        }
        else if (*(int *)pQVar11 != -1) {
          LOCK();
          *(int *)pQVar11 = *(int *)pQVar11 + -1;
          local_40[1]._7_1_ = *(int *)pQVar11 != 0;
          UNLOCK();
          if (!(bool)local_40[1]._7_1_) {
            pQVar11 = *(QArrayData **)pDVar8;
            goto LAB_1001f3640;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar12 = lVar12 + 8;
      } while (lVar12 != 0);
    }
    QListData::dispose(pDVar9);
  }
LAB_1001f3661:
  AVar2 = local_48;
  uVar13 = 0x80015194;
  if (*(int *)local_48.field1 != -1) {
    if (*(int *)local_48.field1 != 0) {
      LOCK();
      *(int *)local_48.field1 = *(int *)local_48.field1 + -1;
      UNLOCK();
      if (*(int *)local_48.field1 != 0) goto LAB_1001f3769;
      local_40[1]._7_1_ = 0;
    }
    iVar3 = *(int *)(local_48.field1 + 0xc);
    if (iVar3 != *(int *)(local_48.field1 + 8)) {
      lVar12 = (long)*(int *)(local_48.field1 + 8) * 8 + (long)iVar3 * -8;
      pDVar9 = (Data *)(local_48.field1 + (long)iVar3 * 8 + 8);
      do {
        pQVar11 = *(QArrayData **)pDVar9;
        if (*(int *)pQVar11 == 0) {
LAB_1001f36e0:
          QArrayData::deallocate(pQVar11,2,8);
        }
        else if (*(int *)pQVar11 != -1) {
          LOCK();
          *(int *)pQVar11 = *(int *)pQVar11 + -1;
          local_40[1]._7_1_ = *(int *)pQVar11 != 0;
          UNLOCK();
          if (!(bool)local_40[1]._7_1_) {
            pQVar11 = *(QArrayData **)pDVar9;
            goto LAB_1001f36e0;
          }
        }
        pDVar9 = pDVar9 + -8;
        lVar12 = lVar12 + 8;
      } while (lVar12 != 0);
    }
    QListData::dispose((Data *)AVar2.field1);
  }
LAB_1001f3769:
  if (piVar6 != (int *)0x0) {
    LOCK();
    *piVar6 = *piVar6 + -1;
    local_40[1]._7_1_ = *piVar6 != 0;
    UNLOCK();
    if (!(bool)local_40[1]._7_1_) {
      operator_delete(piVar6);
    }
  }
  return uVar13;
}



undefined8 FUN_1002702d0(undefined8 param_1)

{
  AnonymousUnion0 AVar1;
  int iVar2;
  void *pvVar3;
  Data *pDVar4;
  Data *pDVar5;
  QArrayData *pQVar6;
  long lVar7;
  Data_conflict local_90;
  undefined4 local_88;
  QArrayData *local_80;
  int *local_78 [4];
  QVariant local_58 [2];
  Data *local_40;
  AnonymousUnion0 local_38;
  undefined1 local_29;
  
  if (DAT_102310930 == (void *)0x0) {
    pvVar3 = operator_new(0x18);
    FUN_1001e5440(pvVar3);
    DAT_102273630 = 1;
    DAT_102310930 = pvVar3;
  }
  iVar2 = FUN_1001e5550(DAT_102310930,2);
  if (-1 < iVar2) {
    return 0;
  }
  iVar2 = CMessageManager::instance();
  local_38.field1 = (Data *)PTR_shared_null_1021e15e8;
  local_40 = (Data *)PTR_shared_null_1021e15e8;
  local_80 = (QArrayData *)QString::fromAscii_helper("1subTaskCompleted(PRL_RESULT)",0x1d);
  local_88 = 0x80000000;
  local_90.field7 = 0;
  FUN_100a1c600(local_78,param_1,&local_80,&local_90);
  CMessageManager::showMessageBox
            (iVar2,(QWidget *)0x80015506,(QStringList *)0x0,(QStringList *)&local_38.field0,
             (CSlotInfo *)&local_40,SUB81(local_78,0));
  QVariant::~QVariant(local_58);
  if (local_78[0] != (int *)0x0) {
    LOCK();
    *local_78[0] = *local_78[0] + -1;
    local_29 = *local_78[0] != 0;
    UNLOCK();
    if ((!(bool)local_29) && (local_78[0] != (int *)0x0)) {
      operator_delete(local_78[0]);
    }
  }
  QVariant::~QVariant((QVariant *)&local_90);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_29 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100270406;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_100270406:
  pDVar5 = local_40;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100270491;
    }
    iVar2 = *(int *)(local_40 + 0xc);
    if (iVar2 != *(int *)(local_40 + 8)) {
      lVar7 = (long)*(int *)(local_40 + 8) * 8 + (long)iVar2 * -8;
      pDVar4 = local_40 + (long)iVar2 * 8 + 8;
      do {
        pQVar6 = *(QArrayData **)pDVar4;
        if (*(int *)pQVar6 == 0) {
LAB_100270470:
          QArrayData::deallocate(pQVar6,2,8);
        }
        else if (*(int *)pQVar6 != -1) {
          LOCK();
          *(int *)pQVar6 = *(int *)pQVar6 + -1;
          local_29 = *(int *)pQVar6 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar6 = *(QArrayData **)pDVar4;
            goto LAB_100270470;
          }
        }
        pDVar4 = pDVar4 + -8;
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0);
    }
    QListData::dispose(pDVar5);
  }
LAB_100270491:
  AVar1 = local_38;
  if (*(int *)local_38.field1 != -1) {
    if (*(int *)local_38.field1 != 0) {
      LOCK();
      *(int *)local_38.field1 = *(int *)local_38.field1 + -1;
      local_29 = *(int *)local_38.field1 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100270521;
    }
    iVar2 = *(int *)(local_38.field1 + 0xc);
    if (iVar2 != *(int *)(local_38.field1 + 8)) {
      lVar7 = (long)*(int *)(local_38.field1 + 8) * 8 + (long)iVar2 * -8;
      pDVar5 = (Data *)(local_38.field1 + (long)iVar2 * 8 + 8);
      do {
        pQVar6 = *(QArrayData **)pDVar5;
        if (*(int *)pQVar6 == 0) {
LAB_100270500:
          QArrayData::deallocate(pQVar6,2,8);
        }
        else if (*(int *)pQVar6 != -1) {
          LOCK();
          *(int *)pQVar6 = *(int *)pQVar6 + -1;
          local_29 = *(int *)pQVar6 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar6 = *(QArrayData **)pDVar5;
            goto LAB_100270500;
          }
        }
        pDVar5 = pDVar5 + -8;
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0);
    }
    QListData::dispose((Data *)AVar1.field1);
  }
LAB_100270521:
  CAbstractTask::setWaitForSubTaskCompletion();
  return 0;
}


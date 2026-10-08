
void FUN_1001f0dd0(long *param_1,int param_2,int param_3)

{
  ExternalRefCountData *pEVar1;
  int iVar2;
  QString *pQVar3;
  QStringList *pQVar4;
  QObject *pQVar5;
  int *piVar6;
  int *piVar7;
  undefined8 uVar8;
  Data *pDVar9;
  QArrayData *pQVar10;
  undefined4 uVar11;
  long lVar12;
  long local_e8;
  Data_conflict local_e0;
  undefined4 local_d8;
  QArrayData *local_d0;
  int *local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  Data_conflict local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  CSlotInfo local_88;
  uint uStack_5c;
  QArrayData *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_3c;
  undefined1 local_31;
  
  if (param_3 != 1) {
    uVar11 = 0x80000275;
    goto LAB_1001f135b;
  }
  if (param_2 != -0x7ffeab99) {
    if (param_2 != 0x36df) {
      uVar11 = 0;
      goto LAB_1001f135b;
    }
    lVar12 = 0;
    if ((param_1[3] != 0) && (lVar12 = 0, *(int *)(param_1[3] + 4) != 0)) {
      lVar12 = param_1[4];
    }
    uVar8 = FUN_10018c280(lVar12);
    local_50 = 3;
    local_48 = 0;
    local_4c = 0;
    local_44 = 0xffff;
    local_40 = 0;
    local_3c = 0;
    lVar12 = 0;
    FUN_10031bef0(uVar8,0,&local_50);
    uVar8 = FUN_100152280();
    if ((param_1[3] != 0) && (lVar12 = 0, *(int *)(param_1[3] + 4) != 0)) {
      lVar12 = param_1[4];
    }
    FUN_10018c2b0(lVar12);
    CVmConfiguration::getVmIdentification();
    CVmIdentification::getLinkedVmUuid();
    pQVar5 = (QObject *)FUN_1001548f0(uVar8,&local_58);
    piVar6 = (int *)0x0;
    if (pQVar5 != (QObject *)0x0) {
      piVar6 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar5);
    }
    piVar7 = (int *)param_1[3];
    if (piVar7 != piVar6) {
      if (piVar6 != (int *)0x0) {
        LOCK();
        *piVar6 = *piVar6 + 1;
        local_31 = *piVar6 != 0;
        UNLOCK();
        piVar7 = (int *)param_1[3];
      }
      if (piVar7 != (int *)0x0) {
        LOCK();
        *piVar7 = *piVar7 + -1;
        local_31 = *piVar7 != 0;
        UNLOCK();
        if ((!(bool)local_31) && ((void *)param_1[3] != (void *)0x0)) {
          operator_delete((void *)param_1[3]);
        }
      }
      param_1[3] = (long)piVar6;
      param_1[4] = (long)pQVar5;
    }
    if (piVar6 != (int *)0x0) {
      LOCK();
      *piVar6 = *piVar6 + -1;
      local_31 = *piVar6 != 0;
      UNLOCK();
      if (!(bool)local_31) {
        operator_delete(piVar6);
      }
    }
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001f11db;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_1001f11db:
    uVar11 = 0x80000009;
    if (((param_1[3] != 0) && (*(int *)(param_1[3] + 4) != 0)) && (param_1[4] != 0)) {
      uVar8 = FUN_10018c280();
      local_88.field1_0x10.field1_0x8 = 3;
      local_88.field2_0x1c.field0_0x0.field0_0x0.field7._4_4_ =
           local_88.field2_0x1c.field0_0x0.field0_0x0.field7._4_4_ & 0xffffff00;
      local_88.field2_0x1c.field0_0x0.field0_0x0.field5 = 0;
      local_88.field2_0x1c.field0_0x0.field1_0x8.bitField0_30 = 0xffff;
      local_88.field3_0x28 = 0;
      uStack_5c = uStack_5c & 0xffffff00;
      FUN_10031a440(uVar8,0);
      uVar11 = 0;
    }
    goto LAB_1001f135b;
  }
  iVar2 = FUN_1001f1630(param_1);
  if (iVar2 != -0x7ffeae6c) {
    if (iVar2 < 0) {
      uVar11 = 0;
      CAbstractTask::appendSubTask((int)param_1);
      goto LAB_1001f135b;
    }
    lVar12 = 0;
    if ((param_1[3] != 0) && (lVar12 = 0, *(int *)(param_1[3] + 4) != 0)) {
      lVar12 = param_1[4];
    }
    uVar8 = FUN_10018d490(lVar12);
    local_d0 = (QArrayData *)PTR_shared_null_1021e1288;
    local_d8 = 0x80000000;
    local_e0.field7 = 0;
    uVar8 = FUN_10015e230(uVar8,param_1 + 8,0,&local_d0,&local_e0);
    QVariant::~QVariant((QVariant *)&local_e0);
    if (*(int *)local_d0 != -1) {
      if (*(int *)local_d0 != 0) {
        LOCK();
        *(int *)local_d0 = *(int *)local_d0 + -1;
        local_31 = *(int *)local_d0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001f1302;
      }
      QArrayData::deallocate(local_d0,2,8);
    }
LAB_1001f1302:
    QObject::connect(&local_e8,uVar8,"2jobCompleted(PRL_RESULT)",param_1,
                     "1subTaskCompleted(PRL_RESULT)",0);
    if (local_e8 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_e8);
    return;
  }
  if (((param_1[5] == 0) || (*(int *)(param_1[5] + 4) == 0)) ||
     (pQVar4 = (QStringList *)param_1[6], pQVar4 == (QStringList *)0x0)) {
    pQVar3 = (QString *)CSearchParentHelper::instance();
    lVar12 = 0;
    if ((param_1[3] != 0) && (lVar12 = 0, *(int *)(param_1[3] + 4) != 0)) {
      lVar12 = param_1[4];
    }
    FUN_100188480(&local_88.field1_0x10,lVar12);
    pQVar4 = (QStringList *)
             CSearchParentHelper::getParentForMessage
                       (pQVar3,SUB81(&local_88.field1_0x10,0),(QWidget *)0x0);
    if (*(int *)local_88.field1_0x10.field0_0x0 != -1) {
      if (*(int *)local_88.field1_0x10.field0_0x0 != 0) {
        LOCK();
        *(int *)local_88.field1_0x10.field0_0x0 = *(int *)local_88.field1_0x10.field0_0x0 + -1;
        local_31 = *(int *)local_88.field1_0x10.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001f0e9e;
      }
      QArrayData::deallocate((QArrayData *)local_88.field1_0x10.field0_0x0,2,8);
    }
  }
LAB_1001f0e9e:
  iVar2 = CMessageManager::instance();
  local_88.field0_0x0.field0_0x0.field1_0x8 = (QObject *)PTR_shared_null_1021e15e8;
  local_88.field0_0x0.field0_0x0.field0_0x0 = (ExternalRefCountData *)PTR_shared_null_1021e15e8;
  local_c8 = (int *)0x0;
  uStack_c0 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_a0 = 0x80000000;
  local_a8.field7 = 0;
  local_98 = 1;
  CMessageManager::showMessageBox
            (iVar2,(QWidget *)0x80015194,pQVar4,
             (QStringList *)&local_88.field0_0x0.field0_0x0.field1_0x8,&local_88,SUB81(&local_c8,0))
  ;
  QVariant::~QVariant((QVariant *)&local_a8);
  if (local_c8 != (int *)0x0) {
    LOCK();
    *local_c8 = *local_c8 + -1;
    local_31 = *local_c8 != 0;
    UNLOCK();
    if ((!(bool)local_31) && (local_c8 != (int *)0x0)) {
      operator_delete(local_c8);
    }
  }
  pEVar1 = local_88.field0_0x0.field0_0x0.field0_0x0;
  if (*(int *)local_88.field0_0x0.field0_0x0.field0_0x0 != -1) {
    if (*(int *)local_88.field0_0x0.field0_0x0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_88.field0_0x0.field0_0x0.field0_0x0 =
           *(int *)local_88.field0_0x0.field0_0x0.field0_0x0 + -1;
      local_31 = *(int *)local_88.field0_0x0.field0_0x0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001f0fe1;
    }
    iVar2 = *(int *)(local_88.field0_0x0.field0_0x0.field0_0x0 + 0xc);
    if (iVar2 != *(int *)(local_88.field0_0x0.field0_0x0.field0_0x0 + 8)) {
      lVar12 = (long)*(int *)(local_88.field0_0x0.field0_0x0.field0_0x0 + 8) * 8 + (long)iVar2 * -8;
      pDVar9 = (Data *)(local_88.field0_0x0.field0_0x0.field0_0x0 + (long)iVar2 * 8 + 8);
      do {
        pQVar10 = *(QArrayData **)pDVar9;
        if (*(int *)pQVar10 == 0) {
LAB_1001f0fc0:
          QArrayData::deallocate(pQVar10,2,8);
        }
        else if (*(int *)pQVar10 != -1) {
          LOCK();
          *(int *)pQVar10 = *(int *)pQVar10 + -1;
          local_31 = *(int *)pQVar10 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar10 = *(QArrayData **)pDVar9;
            goto LAB_1001f0fc0;
          }
        }
        pDVar9 = pDVar9 + -8;
        lVar12 = lVar12 + 8;
      } while (lVar12 != 0);
    }
    QListData::dispose((Data *)pEVar1);
  }
LAB_1001f0fe1:
  pQVar5 = local_88.field0_0x0.field0_0x0.field1_0x8;
  uVar11 = 0x80015194;
  if (*(int *)local_88.field0_0x0.field0_0x0.field1_0x8 != -1) {
    if (*(int *)local_88.field0_0x0.field0_0x0.field1_0x8 != 0) {
      LOCK();
      *(int *)local_88.field0_0x0.field0_0x0.field1_0x8 =
           *(int *)local_88.field0_0x0.field0_0x0.field1_0x8 + -1;
      local_31 = *(int *)local_88.field0_0x0.field0_0x0.field1_0x8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001f135b;
    }
    iVar2 = *(int *)(local_88.field0_0x0.field0_0x0.field1_0x8 + 0xc);
    if (iVar2 != *(int *)(local_88.field0_0x0.field0_0x0.field1_0x8 + 8)) {
      lVar12 = (long)*(int *)(local_88.field0_0x0.field0_0x0.field1_0x8 + 8) * 8 + (long)iVar2 * -8;
      pDVar9 = (Data *)(local_88.field0_0x0.field0_0x0.field1_0x8 + (long)iVar2 * 8 + 8);
      do {
        pQVar10 = *(QArrayData **)pDVar9;
        if (*(int *)pQVar10 == 0) {
LAB_1001f1060:
          QArrayData::deallocate(pQVar10,2,8);
        }
        else if (*(int *)pQVar10 != -1) {
          LOCK();
          *(int *)pQVar10 = *(int *)pQVar10 + -1;
          local_31 = *(int *)pQVar10 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar10 = *(QArrayData **)pDVar9;
            goto LAB_1001f1060;
          }
        }
        pDVar9 = pDVar9 + -8;
        lVar12 = lVar12 + 8;
      } while (lVar12 != 0);
    }
    QListData::dispose((Data *)pQVar5);
  }
LAB_1001f135b:
  (**(code **)(*param_1 + 0xb0))(param_1,uVar11);
  return;
}


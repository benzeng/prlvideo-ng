
undefined8 FUN_100271a80(undefined8 param_1)

{
  AnonymousUnion0 AVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  Data *pDVar5;
  Data *pDVar6;
  QArrayData *pQVar7;
  long lVar8;
  Data_conflict local_98;
  undefined4 local_90;
  QArrayData *local_88;
  int *local_80 [4];
  QVariant local_60 [2];
  QArrayData *local_48;
  Data *local_40;
  AnonymousUnion0 local_38;
  undefined1 local_29;
  
  if (DAT_102310a00 == (void *)0x0) {
    pvVar4 = operator_new(0x30);
    FUN_1007c99f0(pvVar4);
    DAT_102271eab = 1;
    DAT_102310a00 = pvVar4;
  }
  cVar2 = FUN_1007c9d20(DAT_102310a00);
  if (cVar2 == '\0') {
    if (DAT_102310a00 == (void *)0x0) {
      pvVar4 = operator_new(0x30);
      FUN_1007c99f0(pvVar4);
      DAT_102271eab = 1;
      DAT_102310a00 = pvVar4;
    }
    cVar2 = FUN_1007ca1d0(DAT_102310a00);
    if (cVar2 != '\0') {
      if (DAT_102310a00 == (void *)0x0) {
        pvVar4 = operator_new(0x30);
        FUN_1007c99f0(pvVar4);
        DAT_102271eab = 1;
        DAT_102310a00 = pvVar4;
      }
      FUN_1007ca550(DAT_102310a00);
    }
    FUN_100272010(param_1);
    return 0x3bfa;
  }
  CAbstractTask::setWaitForSubTaskCompletion();
  iVar3 = CMessageManager::instance();
  local_38.field1 = (Data *)PTR_shared_null_1021e15e8;
  local_40 = (Data *)PTR_shared_null_1021e15e8;
  FUN_100116360(&local_48);
  FUN_1000341d0(&local_40,&local_48);
  local_88 = (QArrayData *)
             QString::fromAscii_helper
                       ("1onAskCepQuestionClosed(PRL_RESULT, Messaging::ButtonID)",0x38);
  local_90 = 0x80000000;
  local_98.field7 = 0;
  FUN_100a1c600(local_80,param_1,&local_88,&local_98);
  CMessageManager::showMessageBox
            (iVar3,(QWidget *)0x36dc,(QStringList *)0x0,(QStringList *)&local_38.field0,
             (CSlotInfo *)&local_40,SUB81(local_80,0));
  QVariant::~QVariant(local_60);
  if (local_80[0] != (int *)0x0) {
    LOCK();
    *local_80[0] = *local_80[0] + -1;
    local_29 = *local_80[0] != 0;
    UNLOCK();
    if ((!(bool)local_29) && (local_80[0] != (int *)0x0)) {
      operator_delete(local_80[0]);
    }
  }
  QVariant::~QVariant((QVariant *)&local_98);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_29 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100271bd5;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_100271bd5:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100271c05;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100271c05:
  pDVar6 = local_40;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100271c91;
    }
    iVar3 = *(int *)(local_40 + 0xc);
    if (iVar3 != *(int *)(local_40 + 8)) {
      lVar8 = (long)*(int *)(local_40 + 8) * 8 + (long)iVar3 * -8;
      pDVar5 = local_40 + (long)iVar3 * 8 + 8;
      do {
        pQVar7 = *(QArrayData **)pDVar5;
        if (*(int *)pQVar7 == 0) {
LAB_100271c70:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_29 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar7 = *(QArrayData **)pDVar5;
            goto LAB_100271c70;
          }
        }
        pDVar5 = pDVar5 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose(pDVar6);
  }
LAB_100271c91:
  AVar1 = local_38;
  if (*(int *)local_38.field1 != -1) {
    if (*(int *)local_38.field1 != 0) {
      LOCK();
      *(int *)local_38.field1 = *(int *)local_38.field1 + -1;
      UNLOCK();
      if (*(int *)local_38.field1 != 0) {
        return 0;
      }
      local_29 = 0;
    }
    iVar3 = *(int *)(local_38.field1 + 0xc);
    if (iVar3 != *(int *)(local_38.field1 + 8)) {
      lVar8 = (long)*(int *)(local_38.field1 + 8) * 8 + (long)iVar3 * -8;
      pDVar6 = (Data *)(local_38.field1 + (long)iVar3 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_100271d00:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_29 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_100271d00;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar1.field1);
  }
  return 0;
}


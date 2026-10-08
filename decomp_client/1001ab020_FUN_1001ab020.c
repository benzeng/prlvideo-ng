
/* WARNING: Removing unreachable block (ram,0x0001001ab311) */
/* WARNING: Removing unreachable block (ram,0x0001001ab31f) */
/* WARNING: Removing unreachable block (ram,0x0001001ab32b) */

undefined1 FUN_1001ab020(long param_1,QString *param_2,QStringList *param_3)

{
  QMapNodeBase *pQVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  QObject *pQVar6;
  int *piVar7;
  long *plVar8;
  undefined8 uVar9;
  QObject *pQVar10;
  undefined1 uVar11;
  uint in_stack_fffffffffffffebc;
  Data_conflict local_f8;
  undefined4 local_f0;
  undefined1 local_e8;
  QVariant local_e0;
  QArrayData *local_d0;
  int *local_c8 [4];
  QVariant local_a8 [2];
  undefined1 local_90 [56];
  QArrayData *local_58;
  QMapNodeBase *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  uVar9 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar9 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar9 = *(undefined8 *)(param_1 + 0x20);
  }
  lVar5 = FUN_10015cb20(uVar9,param_3);
  if (lVar5 == 0) {
    return 0;
  }
  iVar3 = FUN_10018a9d0(lVar5);
  if (iVar3 != 0x30000004) {
    return 0;
  }
  pQVar6 = (QObject *)FUN_10018f120(lVar5,0xf,0);
  if (pQVar6 == (QObject *)0x0) {
    return 0;
  }
  piVar7 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar6);
  if (piVar7 == (int *)0x0) {
    return 0;
  }
  if (piVar7[1] == 0) {
    uVar11 = 0;
    goto LAB_1001ab4d8;
  }
  plVar8 = (long *)FUN_1001a9960(param_1,param_2);
  if (plVar8 == (long *)0x0) {
    uVar11 = 0;
    goto LAB_1001ab4d8;
  }
  (**(code **)(*plVar8 + 0xb8))(&local_40,plVar8);
  (**(code **)(*plVar8 + 0xa8))(&local_48,plVar8);
  cVar2 = FUN_1001b4060(plVar8);
  if (cVar2 == '\0') {
    uVar9 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar9 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar9 = *(undefined8 *)(param_1 + 0x20);
    }
    cVar2 = FUN_1001b4140(uVar9,&local_40);
    if (cVar2 != '\0') goto LAB_1001ab133;
    iVar3 = piVar7[1];
    uVar4 = CHwUsbDevice::getUsbType();
    pQVar10 = (QObject *)0x0;
    if (iVar3 != 0) {
      pQVar10 = pQVar6;
    }
    uVar11 = 1;
    FUN_100147a20(pQVar10,&local_40,&local_48,0,0,0,uVar4);
  }
  else {
LAB_1001ab133:
    local_50 = (QMapNodeBase *)PTR_shared_null_1021e12f0;
    local_58 = (QArrayData *)QString::fromAscii_helper("usbDeviceId",0xb);
    QVariant::QVariant((QVariant *)(local_90 + 0x28),param_2);
    FUN_10008d1b0(&local_50,&local_58,local_90 + 0x28);
    QVariant::~QVariant((QVariant *)(local_90 + 0x28));
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001ab1b0;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_1001ab1b0:
    local_90._32_8_ = QString::fromAscii_helper("vmId",4);
    QVariant::QVariant((QVariant *)(local_90 + 0x10),(QString *)param_3);
    FUN_10008d1b0(&local_50,local_90 + 0x20,local_90 + 0x10);
    QVariant::~QVariant((QVariant *)(local_90 + 0x10));
    if (*(int *)local_90._32_8_ != -1) {
      if (*(int *)local_90._32_8_ != 0) {
        LOCK();
        *(int *)local_90._32_8_ = *(int *)local_90._32_8_ + -1;
        local_31 = *(int *)local_90._32_8_ != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001ab21b;
      }
      QArrayData::deallocate((QArrayData *)local_90._32_8_,2,8);
    }
LAB_1001ab21b:
    iVar3 = CMessageManager::instance();
    local_90._8_8_ = PTR_shared_null_1021e15e8;
    local_90._0_8_ = PTR_shared_null_1021e15e8;
    local_d0 = (QArrayData *)
               QString::fromAscii_helper
                         ("1onKeyboardOrMouseDialogDone(PRL_RESULT,Messaging::ButtonID,QVariant)",
                          0x45);
    QVariant::QVariant(&local_e0,(QMap *)&local_50);
    FUN_100a1c600(local_c8,param_1,&local_d0,&local_e0);
    local_f0 = 0x80000000;
    local_f8.field7 = 0;
    local_e8 = 1;
    CMessageManager::showMessageBox
              (iVar3,(QString *)0x3ade,param_3,(QStringList *)(local_90 + 8),(CSlotInfo *)local_90,
               SUB81(local_c8,0),(QWidget *)((ulong)in_stack_fffffffffffffebc << 0x20),
               (CSlotInfo *)0x0);
    QVariant::~QVariant((QVariant *)&local_f8);
    QVariant::~QVariant(local_a8);
    if (local_c8[0] != (int *)0x0) {
      LOCK();
      *local_c8[0] = *local_c8[0] + -1;
      local_31 = *local_c8[0] != 0;
      UNLOCK();
      if ((!(bool)local_31) && (local_c8[0] != (int *)0x0)) {
        operator_delete(local_c8[0]);
      }
    }
    QVariant::~QVariant(&local_e0);
    if (*(int *)local_d0 != -1) {
      if (*(int *)local_d0 != 0) {
        LOCK();
        *(int *)local_d0 = *(int *)local_d0 + -1;
        local_31 = *(int *)local_d0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001ab3a9;
      }
      QArrayData::deallocate(local_d0,2,8);
    }
LAB_1001ab3a9:
    FUN_100039a80(local_90);
    FUN_100039a80(local_90 + 8);
    pQVar1 = local_50;
    if (*(int *)local_50 == -1) {
      uVar11 = 0;
    }
    else {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) {
          uVar11 = 0;
          goto LAB_1001ab478;
        }
      }
      if (*(long *)(local_50 + 0x10) != 0) {
        FUN_100037d60();
        QMapDataBase::freeTree(pQVar1,(int)*(undefined8 *)(pQVar1 + 0x10));
      }
      QMapDataBase::freeData((QMapDataBase *)pQVar1);
      uVar11 = 0;
    }
  }
LAB_1001ab478:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001ab4a8;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1001ab4a8:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) goto LAB_1001ab4d8;
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1001ab4d8:
  LOCK();
  *piVar7 = *piVar7 + -1;
  local_31 = *piVar7 != 0;
  UNLOCK();
  if (!(bool)local_31) {
    operator_delete(piVar7);
  }
  return uVar11;
}



void FUN_100246da0(long param_1,ulong param_2)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  QArrayData *local_e8;
  long local_e0;
  QArrayData *local_d8;
  int *local_d0 [4];
  QVariant local_b0 [2];
  Data_conflict local_98;
  undefined4 local_90;
  ulong local_88;
  long local_80;
  QArrayData *local_78;
  long local_70;
  long local_68;
  long local_60;
  QString local_58;
  QArrayData *local_50;
  long local_48;
  long local_40;
  undefined1 local_31;
  
  *(int *)(param_1 + 0x130) = (int)(param_2 >> 0x20);
  local_88 = param_2;
  plVar5 = (long *)FUN_100248980(param_1 + 0x138,&local_88);
  lVar1 = *plVar5;
  if (lVar1 != 0) {
    _PrlHandle_AddRef(lVar1);
  }
  if ((int)param_2 == -0x7ffd889f) {
    local_70 = lVar1;
    if (lVar1 != 0) {
      _PrlHandle_AddRef(lVar1);
    }
    local_78 = (QArrayData *)QString::fromAscii_helper("dev_generic_pci_type",0x14);
    SdkUtils::getParamByName(&local_68,&local_70,&local_78);
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100246e63;
      }
      QArrayData::deallocate(local_78,2,8);
    }
LAB_100246e63:
    if (local_70 != 0) {
      _PrlHandle_Free();
    }
    local_80 = local_68;
    if (local_68 != 0) {
      _PrlHandle_AddRef();
    }
    iVar3 = SdkUtils::getParamIntValue(&local_80,0);
    if (local_80 != 0) {
      _PrlHandle_Free();
    }
    QVariant::QVariant((QVariant *)&local_98,iVar3);
    if (local_68 != 0) {
      _PrlHandle_Free();
    }
  }
  else if ((int)param_2 == -0x7ffd8eae) {
    local_48 = lVar1;
    if (lVar1 != 0) {
      _PrlHandle_AddRef(lVar1);
    }
    local_50 = (QArrayData *)QString::fromAscii_helper("vm_message_param_0",0x12);
    SdkUtils::getParamByName(&local_40,&local_48,&local_50);
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100246f37;
      }
      QArrayData::deallocate(local_50,2,8);
    }
LAB_100246f37:
    if (local_48 != 0) {
      _PrlHandle_Free();
    }
    local_60 = local_40;
    if (local_40 != 0) {
      _PrlHandle_AddRef();
    }
    SdkUtils::getParamStringValue(&local_58,&local_60,0);
    if (local_60 != 0) {
      _PrlHandle_Free();
    }
    QVariant::QVariant((QVariant *)&local_98,&local_58);
    if (*(int *)local_58.field0_0x0 != -1) {
      if (*(int *)local_58.field0_0x0 != 0) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
        local_31 = *(int *)local_58.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100246fb4;
      }
      QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
    }
LAB_100246fb4:
    if (local_40 != 0) {
      _PrlHandle_Free();
    }
  }
  else {
    local_90 = 0x80000000;
    local_98.field7 = 0;
  }
  if (lVar1 != 0) {
    _PrlHandle_Free(lVar1);
  }
  if (((*(long *)(param_1 + 0x120) != 0) && (*(int *)(*(long *)(param_1 + 0x120) + 4) != 0)) &&
     (*(long *)(param_1 + 0x128) != 0)) {
    cVar2 = QWidget::isMinimized();
    if (cVar2 != '\0') {
      QWidget::showNormal();
    }
    if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x128) + 0x28) + 10) & 1) != 0) {
      QWidget::show();
    }
  }
  local_d8 = (QArrayData *)
             QString::fromAscii_helper
                       ("1onErrorMessageClosed( PRL_RESULT, Messaging::ButtonID, const QVariant& )",
                        0x49);
  FUN_100a1c600(local_d0,param_1,&local_d8,&local_98);
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_31 = *(int *)local_d8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002470d1;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_1002470d1:
  uVar6 = CMessageManager::instance();
  plVar5 = (long *)FUN_100248980(param_1 + 0x138,&local_88);
  local_e0 = *plVar5;
  if (local_e0 != 0) {
    _PrlHandle_AddRef();
  }
  uVar7 = 0;
  if ((*(long *)(param_1 + 0x110) != 0) &&
     (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x110) + 4) != 0)) {
    uVar7 = *(undefined8 *)(param_1 + 0x118);
  }
  FUN_100188480(&local_e8,uVar7);
  uVar7 = 0;
  if ((*(long *)(param_1 + 0x120) != 0) &&
     (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x120) + 4) != 0)) {
    uVar7 = *(undefined8 *)(param_1 + 0x128);
  }
  CMessageManager::showMessageBox(uVar6,&local_e0,&local_e8,uVar7,local_d0);
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_31 = *(int *)local_e8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100247192;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_100247192:
  if (local_e0 != 0) {
    _PrlHandle_Free();
  }
  uVar4 = FUN_1002474e0(param_2 & 0xffffffff,param_1 + 0x18,&local_98);
  FUN_100816420(param_1,param_2 & 0xffffffff,uVar4,*(undefined4 *)(param_1 + 0x130));
  QVariant::~QVariant(local_b0);
  if (local_d0[0] != (int *)0x0) {
    LOCK();
    *local_d0[0] = *local_d0[0] + -1;
    local_31 = *local_d0[0] != 0;
    UNLOCK();
    if ((!(bool)local_31) && (local_d0[0] != (int *)0x0)) {
      operator_delete(local_d0[0]);
    }
  }
  QVariant::~QVariant((QVariant *)&local_98);
  return;
}


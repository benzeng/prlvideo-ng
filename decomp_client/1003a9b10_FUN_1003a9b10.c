
void FUN_1003a9b10(long param_1,int param_2)

{
  code *pcVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  QVariant local_a8;
  QVariant local_98;
  QArrayData *local_88;
  QVariant local_80;
  _func_void_Node_ptr *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  long *local_58;
  QVariant local_50 [2];
  undefined1 local_31;
  
  QObject::sender();
  lVar8 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1022007d0);
  if (lVar8 == 0) {
    return;
  }
  QObject::property((char *)local_50);
  iVar4 = QVariant::userType();
  uVar9 = QMetaType::typeFlags(iVar4);
  if ((uVar9 & 8) == 0) {
    if (DAT_102273e28 == 0) {
      DAT_102273e28 = FUN_1003aef80("CVmHardDisk*",0xffffffffffffffff,1);
    }
    uVar2 = DAT_102273e28;
    uVar5 = QVariant::userType();
    if (uVar2 == uVar5) {
      QVariant::constData();
    }
    else {
      QVariant::convert((int)local_50,(void *)(ulong)uVar2);
    }
  }
  plVar10 = (long *)QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e12a8);
  QVariant::~QVariant(local_50);
  if (plVar10 == (long *)0x0) {
    return;
  }
  (**(code **)(*plVar10 + 0x20))(plVar10);
  if (param_2 < 0) {
    return;
  }
  plVar10 = (long *)FUN_1002095d0(lVar8);
  if (plVar10 == (long *)0x0) {
    return;
  }
  uVar11 = *(undefined8 *)(param_1 + 0x18);
  local_58 = plVar10;
  uVar6 = (**(code **)(*plVar10 + 0x68))(plVar10);
  uVar7 = CVmDevice::getEmulatedType();
  CVmDevice::getSystemName();
  CVmDevice::getUserFriendlyName();
  cVar3 = FUN_1003a9fb0(uVar11,uVar6,uVar7,&local_60,&local_68);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003a9ca4;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1003a9ca4:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003a9cd4;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1003a9cd4:
  if (cVar3 == '\0') {
    (**(code **)(*plVar10 + 0x20))(plVar10);
    return;
  }
  FUN_1003b0a90(*(undefined8 *)(param_1 + 0x18));
  lVar8 = CVmConfiguration::getVmHardwareList();
  FUN_10019ac70(lVar8 + 0x1b0,&local_58);
  QObject::property((char *)&local_80);
  FUN_1003af220(&local_70,&local_80);
  uVar11 = FUN_1003b0a90(*(undefined8 *)(param_1 + 0x18));
  FUN_1003a9840(&local_70,uVar11);
  if (*(int *)(local_70 + 0x10) != -1) {
    if (*(int *)(local_70 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_70 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003a9d67;
    }
    QHashData::free_helper(local_70);
  }
LAB_1003a9d67:
  QVariant::~QVariant(&local_80);
  CVmDevice::setEnabled((uint)plVar10);
  cVar3 = CVmHardDisk::isEncrypted();
  if ((cVar3 != '\0') && (lVar8 = FUN_1003a5510(param_1), lVar8 != 0)) {
    uVar11 = FUN_1003a5510(param_1);
    CVmDevice::getSystemName();
    FUN_1001b67d0(uVar11,&local_88);
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_31 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1003a9deb;
      }
      QArrayData::deallocate(local_88,2,8);
    }
  }
LAB_1003a9deb:
  uVar11 = *(undefined8 *)(param_1 + 0x10);
  QObject::property((char *)&local_98);
  uVar6 = QVariant::toLongLong((bool *)&local_98);
  QObject::property((char *)&local_a8);
  uVar7 = QVariant::toInt((bool *)&local_a8);
  FUN_1008368b0(uVar11,uVar6,uVar7);
  QVariant::~QVariant(&local_a8);
  QVariant::~QVariant(&local_98);
  return;
}



void FUN_1003aa1e0(long param_1,int param_2)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  QString QVar10;
  undefined8 uVar11;
  QVariant local_c0;
  _func_void_Node_ptr *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QVariant local_98;
  QArrayData *local_88;
  QVariant local_80;
  QArrayData *local_70;
  QVariant local_68;
  QVariant local_58;
  QTypedArrayData<unsigned_short> *local_48 [2];
  undefined1 local_31;
  
  lVar8 = QObject::sender();
  if (lVar8 == 0) {
    return;
  }
  lVar8 = ___dynamic_cast(lVar8,PTR_typeinfo_1021e1720,PTR_typeinfo_1021e1630,0);
  if (param_2 != 1) {
    return;
  }
  if (lVar8 == 0) {
    return;
  }
  QObject::property((char *)&local_58);
  iVar3 = QVariant::userType();
  uVar9 = QMetaType::typeFlags(iVar3);
  if ((uVar9 & 8) == 0) {
    if (DAT_102273e2c == 0) {
      DAT_102273e2c = FUN_1003af0d0("CVmDevice*",0xffffffffffffffff,1);
    }
    uVar7 = DAT_102273e2c;
    uVar4 = QVariant::userType();
    if (uVar7 == uVar4) {
      QVariant::constData();
    }
    else {
      QVariant::convert((int)&local_58,(void *)(ulong)uVar7);
    }
  }
  QVar10.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)
       QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e15b0);
  QVariant::~QVariant(&local_58);
  if (QVar10.field0_0x0 == (QTypedArrayData<unsigned_short> *)0x0) {
    return;
  }
  local_48[0] = QVar10.field0_0x0;
  QObject::property((char *)&local_68);
  QVariant::toUInt((bool *)&local_68);
  CVmDevice::setEmulatedType((uint)QVar10.field0_0x0);
  QVariant::~QVariant(&local_68);
  QObject::property((char *)&local_80);
  QVariant::toString();
  CVmDevice::setSystemName(QVar10);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003aa376;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1003aa376:
  QVariant::~QVariant(&local_80);
  QObject::property((char *)&local_98);
  QVariant::toString();
  CVmDevice::setUserFriendlyName(QVar10);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003aa3e7;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1003aa3e7:
  QVariant::~QVariant(&local_98);
  uVar11 = *(undefined8 *)(param_1 + 0x18);
  uVar5 = (**(code **)(*(long *)QVar10.field0_0x0 + 0x68))(QVar10.field0_0x0);
  uVar6 = CVmDevice::getEmulatedType();
  CVmDevice::getSystemName();
  CVmDevice::getUserFriendlyName();
  cVar2 = FUN_1003a9fb0(uVar11,uVar5,uVar6,&local_a0,&local_a8);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003aa488;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_1003aa488:
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_31 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003aa4be;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_1003aa4be:
  if (cVar2 == '\0') {
    if (QVar10.field0_0x0 == (QTypedArrayData<unsigned_short> *)0x0) {
      return;
    }
    (**(code **)(*(long *)QVar10.field0_0x0 + 0x20))(QVar10.field0_0x0);
    return;
  }
  uVar7 = (**(code **)(*(long *)QVar10.field0_0x0 + 0x68))(QVar10.field0_0x0);
  FUN_1003b0a90(*(undefined8 *)(param_1 + 0x18));
  lVar8 = CVmConfiguration::getVmHardwareList();
  FUN_1001296d0(*(undefined8 *)(lVar8 + 0xa8 + (ulong)uVar7 * 8),local_48);
  QObject::property((char *)&local_c0);
  FUN_1003af220(&local_b0,&local_c0);
  uVar11 = FUN_1003b0a90(*(undefined8 *)(param_1 + 0x18));
  FUN_1003a9840(&local_b0,uVar11);
  if (*(int *)(local_b0 + 0x10) != -1) {
    if (*(int *)(local_b0 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_b0 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003aa56d;
    }
    QHashData::free_helper(local_b0);
  }
LAB_1003aa56d:
  QVariant::~QVariant(&local_c0);
  uVar11 = *(undefined8 *)(param_1 + 0x10);
  uVar5 = (**(code **)(*(long *)QVar10.field0_0x0 + 0x68))(QVar10.field0_0x0);
  FUN_1008368b0(uVar11,uVar5,*(undefined4 *)(QVar10.field0_0x0 + 0x68));
  return;
}


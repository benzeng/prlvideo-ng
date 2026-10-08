
void FUN_1003cf080(long param_1,undefined8 param_2,QString *param_3)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  bool bVar6;
  QVariant local_b0;
  QArrayData *local_a0;
  QArrayData *local_98;
  QString local_90;
  QVariant local_88;
  QArrayData *local_78;
  QString local_70;
  QVariant local_68;
  QArrayData *local_58;
  QString local_50;
  QVariant local_48;
  undefined1 local_31;
  
  lVar3 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e1350);
  if (lVar3 == 0) {
    return;
  }
  lVar4 = FUN_1003b0a30(*(undefined8 *)(param_1 + 0x18));
  if (lVar4 == 0) {
    return;
  }
  local_50.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("EnableHiResDrawing",0x12);
  puVar1 = PTR_shared_null_1021e1288;
  local_58 = (QArrayData *)PTR_shared_null_1021e1288;
  MappingHelpers::getValueByName((QHash *)&local_48,param_3,&local_50);
  QVariant::toBool();
  QVariant::~QVariant(&local_48);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003cf13d;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1003cf13d:
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_31 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003cf16d;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_1003cf16d:
  local_70.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("UseHiResInGuest",0xf);
  local_78 = (QArrayData *)puVar1;
  MappingHelpers::getValueByName((QHash *)&local_68,param_3,&local_70);
  QVariant::toBool();
  QVariant::~QVariant(&local_68);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003cf1e2;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1003cf1e2:
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_31 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003cf212;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_1003cf212:
  local_90.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("NativeScalingInGuest",0x14);
  local_98 = (QArrayData *)puVar1;
  MappingHelpers::getValueByName((QHash *)&local_88,param_3,&local_90);
  QVariant::toBool();
  QVariant::~QVariant(&local_88);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003cf295;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_1003cf295:
  if (*(int *)local_90.field0_0x0 != -1) {
    if (*(int *)local_90.field0_0x0 != 0) {
      LOCK();
      *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
      local_31 = *(int *)local_90.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003cf2d1;
    }
    QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
  }
LAB_1003cf2d1:
  QObject::property((char *)&local_b0);
  QVariant::toString();
  QVariant::~QVariant(&local_b0);
  uVar5 = FUN_1003b0b10(*(undefined8 *)(param_1 + 0x18));
  FUN_1003bf680(uVar5);
  uVar5 = FUN_1003b0a30(*(undefined8 *)(param_1 + 0x18));
  FUN_1001222e0(uVar5);
  iVar2 = QString::compare_helper
                    (local_a0 + *(long *)(local_a0 + 0x10),*(undefined4 *)(local_a0 + 4),"Scaled",
                     0xffffffff,1);
  bVar6 = SUB81(lVar3,0);
  if (iVar2 == 0) {
    QAbstractButton::setChecked(bVar6);
  }
  else {
    iVar2 = QString::compare_helper
                      (local_a0 + *(long *)(local_a0 + 0x10),*(undefined4 *)(local_a0 + 4),
                       "RetinaBest",0xffffffff,1);
    if (iVar2 == 0) {
      QAbstractButton::setChecked(bVar6);
    }
    else {
      iVar2 = QString::compare_helper
                        (local_a0 + *(long *)(local_a0 + 0x10),*(undefined4 *)(local_a0 + 4),
                         "MoreSpace",0xffffffff,1);
      if (iVar2 == 0) {
        QAbstractButton::setChecked(bVar6);
      }
      else {
        iVar2 = QString::compare_helper
                          (local_a0 + *(long *)(local_a0 + 0x10),*(undefined4 *)(local_a0 + 4),
                           "RetinaNative",0xffffffff,1);
        if (iVar2 == 0) {
          QAbstractButton::setChecked(bVar6);
        }
      }
    }
  }
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      UNLOCK();
      if (*(int *)local_a0 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
  return;
}


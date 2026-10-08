
undefined8 FUN_1003f5600(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  QString QVar3;
  QString local_68;
  QArrayData *local_60;
  QString local_58;
  QVariant local_50;
  QString local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  MappingHelpers::getParentObjectPath(&local_40);
  uVar2 = FUN_1003b0af0(*(undefined8 *)(param_1 + 0x18));
  local_58.field0_0x0 = local_40.field0_0x0;
  if (1 < *(int *)local_40.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + 1;
    local_29 = *(int *)local_40.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_38,0x1df1f84);
  QString::append(&local_58);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003f569b;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1003f569b:
  FUN_1003e1800(&local_50,uVar2,&local_58,0);
  iVar1 = QVariant::toUInt((bool *)&local_50);
  QVariant::~QVariant(&local_50);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_29 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003f56f3;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_1003f56f3:
  if (iVar1 == 1) {
    uVar2 = FUN_1003b0a90(*(undefined8 *)(param_1 + 0x18));
    QVar3.field0_0x0 = (QTypedArrayData<unsigned_short> *)FUN_1003b71e0(uVar2,&local_40);
    if (QVar3.field0_0x0 != (QTypedArrayData<unsigned_short> *)0x0) {
      QVariant::toString();
      CVmDevice::setSystemName(QVar3);
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_29 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1003f5764;
        }
        QArrayData::deallocate(local_60,2,8);
      }
LAB_1003f5764:
      uVar2 = FUN_1003b0b00(*(undefined8 *)(param_1 + 0x18));
      FUN_1003ad980(uVar2,&local_40,QVar3.field0_0x0,0);
    }
  }
  uVar2 = FUN_1003b0b00(*(undefined8 *)(param_1 + 0x18));
  MappingHelpers::getParentObjectPath(&local_68);
  FUN_1003ad9b0(uVar2,&local_68);
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_29 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003f57d4;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_1003f57d4:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return 0;
      }
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return 0;
}


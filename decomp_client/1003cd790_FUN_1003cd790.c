
void FUN_1003cd790(undefined8 param_1,undefined8 param_2,QString *param_3)

{
  undefined *puVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  QString local_68;
  QVariant local_60;
  QArrayData *local_50;
  QString local_48;
  QVariant local_40;
  undefined1 local_29;
  
  uVar4 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021f9da0);
  local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("OsNumber",8);
  puVar1 = PTR_shared_null_1021e1288;
  local_50 = (QArrayData *)PTR_shared_null_1021e1288;
  MappingHelpers::getValueByName((QHash *)&local_40,param_3,&local_48);
  uVar3 = QVariant::toUInt((bool *)&local_40);
  local_68.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("Enabled",7);
  MappingHelpers::getValueByName((QHash *)&local_60,param_3,&local_68);
  uVar2 = QVariant::toBool();
  FUN_100136480(uVar4,uVar3,uVar2);
  QVariant::~QVariant(&local_60);
  if (*(int *)puVar1 != -1) {
    if (*(int *)puVar1 != 0) {
      LOCK();
      *(int *)puVar1 = *(int *)puVar1 + -1;
      local_29 = *(int *)puVar1 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003cd870;
    }
    QArrayData::deallocate((QArrayData *)puVar1,2,8);
  }
LAB_1003cd870:
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_29 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003cd8a0;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_1003cd8a0:
  QVariant::~QVariant(&local_40);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003cd8d9;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1003cd8d9:
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_48.field0_0x0 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
  return;
}


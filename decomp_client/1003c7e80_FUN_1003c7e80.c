
void FUN_1003c7e80(undefined8 param_1,undefined8 param_2,QString *param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  QString local_60;
  QVariant local_58;
  QArrayData *local_48;
  QString local_40;
  QVariant local_38;
  undefined1 local_21;
  
  uVar4 = QMetaObject::cast((QObject *)&PTR_PTR_1021f9b10);
  local_40.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("InterfaceType",0xd);
  puVar1 = PTR_shared_null_1021e1288;
  local_48 = (QArrayData *)PTR_shared_null_1021e1288;
  MappingHelpers::getValueByName((QHash *)&local_38,param_3,&local_40);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003c7f03;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1003c7f03:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_21 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003c7f33;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1003c7f33:
  local_60.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("StackIndex",10);
  MappingHelpers::getValueByName((QHash *)&local_58,param_3,&local_60);
  if (*(int *)puVar1 != -1) {
    if (*(int *)puVar1 != 0) {
      LOCK();
      *(int *)puVar1 = *(int *)puVar1 + -1;
      local_21 = *(int *)puVar1 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003c7f90;
    }
    QArrayData::deallocate((QArrayData *)puVar1,2,8);
  }
LAB_1003c7f90:
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_21 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003c7fc0;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_1003c7fc0:
  uVar2 = QVariant::toUInt((bool *)&local_58);
  uVar3 = QVariant::toLongLong((bool *)&local_38);
  FUN_1001335e0(uVar4,uVar2,uVar3,1);
  QVariant::~QVariant(&local_58);
  QVariant::~QVariant(&local_38);
  return;
}


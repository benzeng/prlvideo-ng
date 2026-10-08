
void FUN_1003d05c0(long param_1,undefined8 param_2,QString *param_3)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  QString local_70;
  QVariant local_68;
  QArrayData *local_58;
  QString local_50;
  QVariant local_48;
  undefined1 local_31;
  
  iVar3 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e15a0);
  lVar4 = FUN_1003b0a60(*(undefined8 *)(param_1 + 0x18));
  if (lVar4 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: Server instance is null.");
    return;
  }
  local_50.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("Hardware.Cpu.CpuLimit",0x15);
  puVar1 = PTR_shared_null_1021e1288;
  local_58 = (QArrayData *)PTR_shared_null_1021e1288;
  MappingHelpers::getValueByName((QHash *)&local_48,param_3,&local_50);
  QVariant::toUInt((bool *)&local_48);
  QVariant::~QVariant(&local_48);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003d0673;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1003d0673:
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_31 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003d06a3;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_1003d06a3:
  uVar5 = FUN_1003b0a60(*(undefined8 *)(param_1 + 0x18));
  cVar2 = FUN_1001754c0(uVar5,8);
  if (cVar2 == '\0') goto LAB_1003d0765;
  local_70.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)
       QString::fromAscii_helper("Hardware.Cpu.CpuLimitValue",0x1a);
  MappingHelpers::getValueByName((QHash *)&local_68,param_3,&local_70);
  QVariant::toUInt((bool *)&local_68);
  QVariant::~QVariant(&local_68);
  if (*(int *)puVar1 != -1) {
    if (*(int *)puVar1 != 0) {
      LOCK();
      *(int *)puVar1 = *(int *)puVar1 + -1;
      local_31 = *(int *)puVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003d0735;
    }
    QArrayData::deallocate((QArrayData *)puVar1,2,8);
  }
LAB_1003d0735:
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_31 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003d0765;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_1003d0765:
  QSpinBox::setValue(iVar3);
  return;
}


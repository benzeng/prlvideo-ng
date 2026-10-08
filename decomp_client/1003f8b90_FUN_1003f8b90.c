
void FUN_1003f8b90(long param_1,int param_2)

{
  code *pcVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  size_t sVar6;
  undefined8 uVar7;
  QArrayData *local_78;
  QVariant local_70;
  QVariant local_60;
  QString local_50;
  QArrayData *local_48;
  QString local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  if (param_2 != 1) goto LAB_1003f8d95;
  MappingHelpers::getParentObjectPath(&local_40);
  plVar5 = (long *)FUN_1003b0af0(*(undefined8 *)(param_1 + 0x18));
  puVar2 = PTR_s_VmConfig_1021f1e00;
  pcVar1 = *(code **)(*plVar5 + 0x70);
  iVar4 = -1;
  if (PTR_s_VmConfig_1021f1e00 != (undefined *)0x0) {
    sVar6 = _strlen(PTR_s_VmConfig_1021f1e00);
    iVar4 = (int)sVar6;
  }
  local_48 = (QArrayData *)QString::fromAscii_helper(puVar2,iVar4);
  local_50.field0_0x0 = local_40.field0_0x0;
  if (1 < *(int *)local_40.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + 1;
    local_29 = *(int *)local_40.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_38,0x1df32a1);
  QString::append(&local_50);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003f8c61;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1003f8c61:
  uVar7 = FUN_1003b0af0(*(undefined8 *)(param_1 + 0x18));
  local_78 = (QArrayData *)QString::fromAscii_helper("Settings.General.OsNumber",0x19);
  FUN_1003e1800(&local_70,uVar7,&local_78,0);
  uVar3 = QVariant::toUInt((bool *)&local_70);
  iVar4 = CXmlModelHelper::getDefaultScsiSubTypeByOsVersion(uVar3);
  QVariant::QVariant(&local_60,iVar4);
  (*pcVar1)(plVar5,&local_48,&local_50,&local_60);
  QVariant::~QVariant(&local_60);
  QVariant::~QVariant(&local_70);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_29 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003f8d05;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1003f8d05:
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_29 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003f8d35;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_1003f8d35:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003f8d65;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1003f8d65:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_29 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003f8d95;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1003f8d95:
  FUN_1003f94a0(param_1);
  return;
}


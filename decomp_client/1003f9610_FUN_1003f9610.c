
void FUN_1003f9610(long param_1,int param_2,int param_3)

{
  code *pcVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  size_t sVar7;
  QVariant local_80;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QVariant local_58;
  QArrayData *local_48;
  QArrayData *local_40;
  QVariant local_38;
  undefined1 local_21;
  
  if (param_2 != 6) {
    return;
  }
  uVar5 = FUN_1003b0af0(*(undefined8 *)(param_1 + 0x18));
  local_48 = (QArrayData *)QString::fromAscii_helper("Hardware.Hdd[%1].EmulatedType",0x1d);
  QString::arg(&local_40,&local_48,(long)param_3,0,10,0x20);
  FUN_1003e1800(&local_38,uVar5,&local_40,0);
  iVar3 = QVariant::toInt((bool *)&local_38);
  QVariant::~QVariant(&local_38);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003f96c3;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1003f96c3:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003f96f3;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1003f96f3:
  uVar5 = FUN_1003b0af0(*(undefined8 *)(param_1 + 0x18));
  local_60 = (QArrayData *)QString::fromAscii_helper("Settings.Shutdown.OnVmWindowClose",0x21);
  FUN_1003e1800(&local_58,uVar5,&local_60,0);
  iVar4 = QVariant::toInt((bool *)&local_58);
  QVariant::~QVariant(&local_58);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_21 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003f976c;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1003f976c:
  if (iVar3 != 0) {
    return;
  }
  if (iVar4 != 1) {
    return;
  }
  plVar6 = (long *)FUN_1003b0af0(*(undefined8 *)(param_1 + 0x18));
  puVar2 = PTR_s_VmConfig_1021f1e00;
  pcVar1 = *(code **)(*plVar6 + 0x70);
  iVar3 = -1;
  if (PTR_s_VmConfig_1021f1e00 != (undefined *)0x0) {
    sVar7 = _strlen(PTR_s_VmConfig_1021f1e00);
    iVar3 = (int)sVar7;
  }
  local_68 = (QArrayData *)QString::fromAscii_helper(puVar2,iVar3);
  local_70 = (QArrayData *)QString::fromAscii_helper("Settings.Shutdown.OnVmWindowClose",0x21);
  QVariant::QVariant(&local_80,2);
  (*pcVar1)(plVar6,&local_68,&local_70,&local_80);
  QVariant::~QVariant(&local_80);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_21 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003f982a;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1003f982a:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      UNLOCK();
      if (*(int *)local_68 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_68,2,8);
  }
  return;
}


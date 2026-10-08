
void FUN_1003f7e20(long param_1,long *param_2)

{
  code *pcVar1;
  undefined *puVar2;
  long *plVar3;
  size_t sVar4;
  undefined8 uVar5;
  int iVar6;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QVariant local_50;
  QArrayData *local_40;
  undefined1 local_31;
  
  plVar3 = (long *)FUN_1003b0ad0(*(undefined8 *)(param_1 + 0x18));
  puVar2 = PTR_s_VmConfig_1021f1e00;
  pcVar1 = *(code **)(*plVar3 + 0x60);
  iVar6 = -1;
  if (PTR_s_VmConfig_1021f1e00 != (undefined *)0x0) {
    sVar4 = _strlen(PTR_s_VmConfig_1021f1e00);
    iVar6 = (int)sVar4;
  }
  local_58 = (QArrayData *)QString::fromAscii_helper(puVar2,iVar6);
  local_60 = (QArrayData *)
             QString::fromAscii_helper("Settings.Startup.ExternalDeviceSystemName",0x29);
  (*pcVar1)(&local_50,plVar3,&local_58,&local_60);
  QVariant::toString();
  QVariant::~QVariant(&local_50);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003f7ee3;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1003f7ee3:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003f7f13;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1003f7f13:
  uVar5 = FUN_1003b0a60(*(undefined8 *)(param_1 + 0x18));
  plVar3 = (long *)FUN_1003f8370(&local_40,uVar5);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0xb8))(&local_68,plVar3);
    (**(code **)(*plVar3 + 0xa8))(&local_70,plVar3);
    uVar5 = FUN_1003b0a30(*(undefined8 *)(param_1 + 0x18));
    FUN_100188480(&local_78,uVar5);
    FUN_1001af310(&local_68,&local_70,&local_78);
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1003f7fb0;
      }
      QArrayData::deallocate(local_78,2,8);
    }
LAB_1003f7fb0:
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_31 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1003f7fe0;
      }
      QArrayData::deallocate(local_70,2,8);
    }
LAB_1003f7fe0:
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1003f8010;
      }
      QArrayData::deallocate(local_68,2,8);
    }
  }
LAB_1003f8010:
  if (param_2 == (long *)0x0) goto LAB_1003f8106;
  (**(code **)(*param_2 + 0xb8))(&local_80,param_2);
  (**(code **)(*param_2 + 0xa8))(&local_88,param_2);
  uVar5 = FUN_1003b0a30(*(undefined8 *)(param_1 + 0x18));
  FUN_100188480(&local_90,uVar5);
  FUN_1001b10f0(&local_80,&local_88,2,&local_90);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003f80a6;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_1003f80a6:
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003f80d6;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1003f80d6:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003f8106;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1003f8106:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return;
}


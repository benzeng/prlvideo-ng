
void FUN_1007c2cb0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  code *pcVar4;
  int iVar5;
  undefined8 *puVar6;
  CHwGenericDevice *pCVar7;
  QArrayData *local_68;
  QArrayData *local_60;
  QString local_58;
  CHwGenericDevice *local_50;
  QArrayData *local_48;
  QString local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  lVar1 = **(long **)(param_1 + 0x148);
  if (*(int *)(lVar1 + 0xc) == *(int *)(lVar1 + 8)) {
    return;
  }
  puVar6 = (undefined8 *)FUN_1004196a0(*(long **)(param_1 + 0x148),0);
  (**(code **)(*(long *)*puVar6 + 0xa8))(&local_38);
  iVar5 = QString::compare_helper
                    (local_38 + *(long *)(local_38 + 0x10),*(undefined4 *)(local_38 + 4),
                     "Default CD/DVD-ROM",0xffffffff,1);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007c2d47;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1007c2d47:
  uVar2 = *(undefined8 *)(param_1 + 0x148);
  if (iVar5 == 0) {
    puVar6 = (undefined8 *)FUN_1004196a0(uVar2,0);
    plVar3 = (long *)*puVar6;
    pcVar4 = *(code **)(*plVar3 + 0xa0);
    local_48 = (QArrayData *)QString::fromAscii_helper("Default CD/DVD-ROM",0x12);
    EnumUtils::getLocalizedDeviceName(&local_40);
    (*pcVar4)(plVar3,&local_40);
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_29 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1007c2ef6;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
LAB_1007c2ef6:
    if (*(int *)local_48 == -1) {
      return;
    }
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_48,2,8);
    return;
  }
  pCVar7 = operator_new(0xb8);
  local_60 = (QArrayData *)QString::fromAscii_helper("Default CD/DVD-ROM",0x12);
  EnumUtils::getLocalizedDeviceName(&local_58);
  puVar6 = (undefined8 *)FUN_1004196a0(*(undefined8 *)(param_1 + 0x148),0);
  (**(code **)(*(long *)*puVar6 + 0xb8))(&local_68);
  CHwGenericDevice::CHwGenericDevice(pCVar7,5,&local_58,&local_68);
  local_50 = pCVar7;
  FUN_1007c59d0(uVar2,&local_50);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_29 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007c2e0b;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1007c2e0b:
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_29 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007c2e3e;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_1007c2e3e:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      UNLOCK();
      if (*(int *)local_60 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_60,2,8);
  }
  return;
}


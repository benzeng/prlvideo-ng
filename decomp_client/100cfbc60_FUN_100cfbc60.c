
undefined8 FUN_100cfbc60(long param_1,long *param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined4 uVar3;
  QArrayData *local_80;
  QString local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QString local_60;
  QString local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QString local_40;
  QString local_38;
  undefined1 local_29;
  
  local_48 = (QArrayData *)QString::fromAscii_helper("vmname",6);
  pcVar1 = *(code **)(*param_2 + 8);
  if (1 < *(int *)local_48 + 1U) {
    LOCK();
    *(int *)local_48 = *(int *)local_48 + 1;
    local_29 = *(int *)local_48 != 0;
    UNLOCK();
  }
  puVar2 = PTR_shared_null_1021e1288;
  local_50 = (QArrayData *)PTR_shared_null_1021e1288;
  local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_48;
  (*pcVar1)(&local_40,param_2,&local_48,&local_50);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100cfbcf3;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100cfbcf3:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100cfbd23;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100cfbd23:
  if (*(int *)(local_40.field0_0x0 + 4) != 0) {
    QString::operator=((QString *)(param_1 + 0xd8),&local_40);
  }
  local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("guestos",7);
  QString::operator=(&local_38,&local_58);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_29 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100cfbd8f;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_100cfbd8f:
  pcVar1 = *(code **)(*param_2 + 8);
  local_68 = (QArrayData *)local_38.field0_0x0;
  if (1 < *(int *)local_38.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + 1;
    local_29 = *(int *)local_38.field0_0x0 != 0;
    UNLOCK();
  }
  local_70 = (QArrayData *)puVar2;
  (*pcVar1)(&local_60,param_2,&local_68,&local_70);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_29 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100cfbdf5;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100cfbdf5:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_29 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100cfbe25;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100cfbe25:
  if (*(int *)(local_60.field0_0x0 + 4) != 0) {
    QString::operator=((QString *)(param_1 + 0x50),&local_60);
  }
  local_78.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("memsize",7);
  QString::operator=(&local_38,&local_78);
  if (*(int *)local_78.field0_0x0 != -1) {
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      local_29 = *(int *)local_78.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100cfbe8e;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
  }
LAB_100cfbe8e:
  pcVar1 = *(code **)(*param_2 + 0x18);
  local_80 = (QArrayData *)local_38.field0_0x0;
  if (1 < *(int *)local_38.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + 1;
    local_29 = *(int *)local_38.field0_0x0 != 0;
    UNLOCK();
  }
  uVar3 = (*pcVar1)(param_2,&local_80,10,0x40);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_29 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100cfbef4;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_100cfbef4:
  *(undefined4 *)(param_1 + 0xe8) = uVar3;
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_29 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100cfbf2b;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_100cfbf2b:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_29 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100cfbf5b;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_100cfbf5b:
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_38.field0_0x0 != 0) {
        return 0x8000000;
      }
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
  return 0x8000000;
}



undefined8 FUN_100ce5580(long param_1,long *param_2)

{
  code *pcVar1;
  undefined *puVar2;
  bool bVar3;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QString local_60;
  QString local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QString local_40;
  QString local_38;
  undefined1 local_29;
  
  local_48 = (QArrayData *)QString::fromAscii_helper("displayName",0xb);
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
      if ((bool)local_29) goto LAB_100ce5616;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100ce5616:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100ce5646;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100ce5646:
  if (*(int *)(local_40.field0_0x0 + 4) != 0) {
    QString::operator=((QString *)(param_1 + 0xd8),&local_40);
  }
  local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("guestOS",7);
  QString::operator=(&local_38,&local_58);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_29 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100ce56b2;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_100ce56b2:
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
      if ((bool)local_29) goto LAB_100ce5718;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100ce5718:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_29 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100ce5748;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100ce5748:
  QString::operator=((QString *)(param_1 + 0x50),&local_60);
  pcVar1 = *(code **)*param_2;
  local_80 = (QArrayData *)QString::fromAscii_helper("encryption",10);
  local_88 = (QArrayData *)QString::fromAscii_helper("keySafe",7);
  local_90 = (QArrayData *)puVar2;
  (*pcVar1)(&local_78,param_2,&local_80,&local_88,&local_90);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_29 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100ce57db;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_100ce57db:
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_29 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100ce580b;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_100ce580b:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_29 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100ce583b;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_100ce583b:
  pcVar1 = *(code **)*param_2;
  local_a0 = (QArrayData *)QString::fromAscii_helper("encryption",10);
  local_a8 = (QArrayData *)QString::fromAscii_helper("data",4);
  local_b0 = (QArrayData *)puVar2;
  (*pcVar1)(&local_98,param_2,&local_a0,&local_a8,&local_b0);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_29 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100ce58d0;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_100ce58d0:
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_29 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100ce5906;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_100ce5906:
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_29 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100ce593c;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_100ce593c:
  bVar3 = true;
  if (*(int *)(local_78 + 4) == 0) {
    bVar3 = *(int *)(local_98 + 4) != 0;
  }
  *(bool *)(param_1 + 0xe0) = bVar3;
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_29 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100ce598c;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_100ce598c:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_29 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100ce59bc;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_100ce59bc:
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_29 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100ce59ec;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_100ce59ec:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_29 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100ce5a1c;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_100ce5a1c:
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



undefined8 FUN_10026bd40(undefined8 param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  CVmDevice::getSystemName();
  iVar2 = CVmDevice::getEmulatedType();
  if (iVar2 == 0) {
    local_60 = (QArrayData *)QString::fromAscii_helper("http://",7);
    iVar2 = QString::indexOf(&local_58,&local_60,0,0);
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_29 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10026bf7f;
      }
      QArrayData::deallocate(local_60,2,8);
    }
LAB_10026bf7f:
    uVar4 = 0x15;
    if (iVar2 == -1) {
      uVar4 = 0xa0;
    }
    goto LAB_10026bf8f;
  }
  QString::right((int)&local_68);
  QString::toLower();
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10026bdc0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10026bdc0:
  local_40 = (QArrayData *)QString::fromAscii_helper(".cue",4);
  iVar2 = QString::compare(&local_68,&local_40,1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10026be1a;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10026be1a:
  uVar4 = 0x53;
  if (iVar2 != 0) {
    local_48 = (QArrayData *)QString::fromAscii_helper(".ccd",4);
    iVar2 = QString::compare(&local_68,&local_48,1);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_29 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10026be82;
      }
      QArrayData::deallocate(local_48,2,8);
    }
LAB_10026be82:
    uVar4 = 0x52;
    if (iVar2 != 0) {
      local_50 = (QArrayData *)QString::fromAscii_helper(".dmg",4);
      iVar2 = QString::compare(&local_68,&local_50,1);
      if (*(int *)local_50 != -1) {
        if (*(int *)local_50 != 0) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + -1;
          local_29 = *(int *)local_50 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_10026bee5;
        }
        QArrayData::deallocate(local_50,2,8);
      }
LAB_10026bee5:
      uVar4 = (uint)(iVar2 == 0) * 3 + 0x11;
    }
  }
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_29 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10026bf8f;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10026bf8f:
  iVar2 = CVmClusteredDevice::getInterfaceType();
  uVar1 = uVar4 | 0x100;
  if (iVar2 == 0) {
    uVar1 = uVar4;
  }
  uVar3 = FUN_1003e3500(uVar1,param_2);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) {
        return uVar3;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_58,2,8);
  }
  return uVar3;
}


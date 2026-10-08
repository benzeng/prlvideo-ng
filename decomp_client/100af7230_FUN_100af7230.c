
undefined8 FUN_100af7230(void)

{
  char cVar1;
  undefined8 uVar2;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  CHwHardDisk::getDeviceId();
  cVar1 = FUN_100da4860(&local_30);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100af7289;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100af7289:
  if (cVar1 != '\0') {
    return 0;
  }
  CHwHardDisk::getDeviceId();
  cVar1 = FUN_100da2810(&local_38);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100af72dd;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100af72dd:
  if (cVar1 != '\0') {
    CDispUsbPreferences::getUsbVirtualDisks();
    uVar2 = CDispUsbVirtualDisks::isUsb();
    return uVar2;
  }
  CHwHardDisk::getDeviceId();
  cVar1 = FUN_100da2a00(&local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100af7343;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100af7343:
  if (cVar1 != '\0') {
    CDispUsbPreferences::getUsbVirtualDisks();
    uVar2 = CDispUsbVirtualDisks::isFireWire();
    return uVar2;
  }
  CHwHardDisk::getDeviceId();
  cVar1 = FUN_100da4850(&local_48);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100af73a9;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100af73a9:
  if (cVar1 == '\0') {
    cVar1 = CHwHardDisk::isRemovable();
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      CDispUsbPreferences::getUsbVirtualDisks();
      uVar2 = CDispUsbVirtualDisks::isRemovable();
    }
  }
  else {
    CDispUsbPreferences::getUsbVirtualDisks();
    uVar2 = CDispUsbVirtualDisks::isThunderbolt();
  }
  return uVar2;
}


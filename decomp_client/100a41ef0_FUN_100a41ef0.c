
void FUN_100a41ef0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  QArrayData *local_28;
  QArrayData *local_20;
  undefined1 local_11;
  
  *param_1 = &PTR_FUN_102237fa0;
  uVar1 = _CFBundleGetMainBundle();
  lVar2 = _CFBundleGetIdentifier(uVar1);
  if (lVar2 == 0) {
    uVar1 = _CFStringCreateWithBytes
                      (*(undefined8 *)PTR__kCFAllocatorDefault_1021e18d0,
                       "com.parallels.desktop.console",0x1e,0x8000100,0);
  }
  else {
    uVar1 = _CFStringCreateCopy(*(undefined8 *)PTR__kCFAllocatorDefault_1021e18d0,lVar2);
  }
  param_1[1] = uVar1;
  local_20 = (QArrayData *)QString::fromAscii_helper("mailto",6);
  FUN_100a42470(param_1,&local_20);
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      local_11 = *(int *)local_20 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100a41f9a;
    }
    QArrayData::deallocate(local_20,2,8);
  }
LAB_100a41f9a:
  local_28 = (QArrayData *)QString::fromAscii_helper("https",5);
  FUN_100a42470(param_1,&local_28);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_11 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100a41feb;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_100a41feb:
  local_30 = (QArrayData *)QString::fromAscii_helper("http",4);
  FUN_100a42470(param_1,&local_30);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_11 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100a4203c;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100a4203c:
  local_38 = (QArrayData *)QString::fromAscii_helper("ftp",3);
  FUN_100a42470(param_1,&local_38);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_11 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100a4208d;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100a4208d:
  local_40 = (QArrayData *)QString::fromAscii_helper("ssh",3);
  FUN_100a42470(param_1,&local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_11 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100a420de;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100a420de:
  local_48 = (QArrayData *)QString::fromAscii_helper("telnet",6);
  FUN_100a42470(param_1,&local_48);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_11 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100a4212f;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100a4212f:
  local_50 = (QArrayData *)QString::fromAscii_helper("feed",4);
  FUN_100a42470(param_1,&local_50);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_11 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100a42180;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100a42180:
  local_58 = (QArrayData *)QString::fromAscii_helper("feeds",5);
  FUN_100a42470(param_1,&local_58);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_11 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100a421d1;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100a421d1:
  local_60 = (QArrayData *)QString::fromAscii_helper("news",4);
  FUN_100a42470(param_1,&local_60);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      UNLOCK();
      if (*(int *)local_60 != 0) {
        return;
      }
      local_11 = 0;
    }
    QArrayData::deallocate(local_60,2,8);
  }
  return;
}


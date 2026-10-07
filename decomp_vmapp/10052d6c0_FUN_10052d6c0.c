
void FUN_10052d6c0(uint param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *local_30;
  undefined1 local_22;
  
  puVar1 = PTR_shared_null_100ba20d0;
  if ((int)param_1 < 1) {
    return;
  }
  local_30 = PTR_shared_null_100ba20d0;
  uVar2 = FUN_10052d240(&local_30);
  if (*(int *)puVar1 != -1) {
    if (*(int *)puVar1 != 0) {
      LOCK();
      *(int *)puVar1 = *(int *)puVar1 + -1;
      local_22 = *(int *)puVar1 != 0;
      UNLOCK();
      if ((bool)local_22) goto LAB_10052d71f;
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_100ba20d0,2,8);
  }
LAB_10052d71f:
  if ((uVar2 < 0xffff) && (uVar2 != param_1)) {
    iVar3 = FUN_10052cb90(param_1);
    lVar4 = _CFStringCreateWithFormat(0,0,&cf__i,iVar3 + -1);
    if (lVar4 != 0) {
      uVar5 = _CFNotificationCenterGetDistributedCenter();
      _CFNotificationCenterPostNotification(uVar5,&cf_com_apple_switchSpaces,lVar4,0,1);
      _CFRelease(lVar4);
    }
  }
  return;
}


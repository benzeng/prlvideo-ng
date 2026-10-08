
void FUN_100a07b80(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  QArrayData *local_70;
  QString local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  undefined1 local_49;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar1;
  local_60 = (QArrayData *)QString::fromAscii_helper("/Applications",0xd);
  local_48 = FUN_100deef90(&local_60);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_49 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_100a07bf8;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100a07bf8:
  QDir::homePath();
  local_68.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_70;
  if (1 < *(int *)local_70 + 1U) {
    LOCK();
    *(int *)local_70 = *(int *)local_70 + 1;
    local_49 = *(int *)local_70 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_58,0x1db66b6);
  QString::append(&local_68);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_49 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_100a07c6c;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100a07c6c:
  local_40 = FUN_100deef90(&local_68);
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_49 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_100a07ca9;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_100a07ca9:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_49 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_100a07cd9;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100a07cd9:
  uVar2 = _CFArrayCreate(0,&local_48,1,PTR__kCFTypeArrayCallBacks_1021e1958);
  if (param_2 != 0) {
    uVar3 = _CFNotificationCenterGetLocalCenter();
    _CFNotificationCenterAddObserver(uVar3,param_2,FUN_100a06520,0,param_1,4);
  }
  _MDQuerySetSearchScope(param_1,uVar2,0);
  _MDQueryExecute(param_1,(param_2 != 0) * '\x03' + '\x01');
  _CFRelease(local_40);
  _CFRelease(local_48);
  _CFRelease(uVar2);
  if (lVar1 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}


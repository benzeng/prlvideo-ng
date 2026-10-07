
uint FUN_100786ad0(undefined8 *param_1,uint *param_2,uint param_3)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  QArrayData *local_c0;
  void *local_b8;
  void *local_b0;
  undefined4 local_a0 [2];
  void *local_98;
  void *local_90;
  code *local_80;
  uint *local_78;
  long local_70;
  undefined8 local_68;
  cfstringStruct *local_60;
  undefined8 *local_58;
  undefined8 *puStack_50;
  undefined8 *local_48;
  
  local_c0 = (QArrayData *)*param_1;
  if (1 < *(int *)local_c0 + 1U) {
    LOCK();
    *(int *)local_c0 = *(int *)local_c0 + 1;
    UNLOCK();
  }
  local_58 = (undefined8 *)0x0;
  puStack_50 = (undefined8 *)0x0;
  local_48 = (undefined8 *)0x0;
  if ((*param_2 & 0x20) != 0) {
    local_60 = &cf_nobrowse;
    FUN_100787a40(&local_58,&local_60);
    local_68 = 0;
    if (puStack_50 != local_48) {
      *puStack_50 = 0;
      puStack_50 = puStack_50 + 1;
      goto LAB_100786b70;
    }
  }
  local_68 = 0;
  FUN_100787a40(&local_58,&local_68);
LAB_100786b70:
  FUN_100787b70(&local_b8,&local_58);
  local_a0[0] = 0;
  FUN_100787b70(&local_98,&local_b8);
  local_80 = FUN_100787780;
  local_78 = param_2;
  if (local_b8 != (void *)0x0) {
    if (local_b0 != local_b8) {
      local_b0 = (void *)((~((long)local_b0 + (-8 - (long)local_b8)) & 0xfffffffffffffff8U) +
                         (long)local_b0);
    }
    operator_delete(local_b8);
  }
  uVar6 = *(undefined8 *)PTR__kCFAllocatorDefault_100ba23b0;
  lVar3 = _DASessionCreate(uVar6);
  uVar7 = 0;
  if (lVar3 != 0) {
    uVar4 = _CFRunLoopGetCurrent();
    uVar1 = *(undefined8 *)PTR__kCFRunLoopDefaultMode_100ba23e8;
    _DASessionScheduleWithRunLoop(lVar3,uVar4,uVar1);
    lVar5 = FUN_100787980(&local_c0,uVar6,lVar3);
    if (lVar5 != 0) {
      local_70 = lVar5;
      _DADiskMountWithArguments(lVar5,0,local_a0[0],local_80,local_a0,local_98);
      iVar2 = _CFRunLoopRunInMode(SUB84((double)param_3,0),uVar1,0);
      if (iVar2 == 3) {
        FUN_1008e3970("","HostUtils",0,"DiskMount/Unmount operation timed out");
      }
      _CFRelease(lVar5);
    }
    uVar6 = _CFRunLoopGetCurrent();
    _DASessionUnscheduleFromRunLoop(lVar3,uVar6,uVar1);
    _CFRelease(lVar3);
    uVar7 = *local_78 & 1;
  }
  if (local_98 != (void *)0x0) {
    if (local_90 != local_98) {
      local_90 = (void *)((~((long)local_90 + (-8 - (long)local_98)) & 0xfffffffffffffff8U) +
                         (long)local_90);
    }
    operator_delete(local_98);
  }
  if (local_58 != (undefined8 *)0x0) {
    if (puStack_50 != local_58) {
      puStack_50 = (undefined8 *)
                   ((~((long)puStack_50 + (-8 - (long)local_58)) & 0xfffffffffffffff8U) +
                   (long)puStack_50);
    }
    operator_delete(local_58);
  }
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      UNLOCK();
      local_a0[0] = CONCAT31(local_a0[0]._1_3_,*(int *)local_c0 != 0);
      if (*(int *)local_c0 != 0) {
        return uVar7;
      }
    }
    QArrayData::deallocate(local_c0,2,8);
  }
  return uVar7;
}


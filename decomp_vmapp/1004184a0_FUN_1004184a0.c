
undefined1 FUN_1004184a0(long param_1)

{
  undefined *puVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 local_a8 [34];
  
  _memset_pattern16(local_a8,&DAT_100b41d70,0x80);
  uVar3 = (**(code **)(**(long **)(param_1 + 0x10) + 0x30))();
  local_a8[uVar3] = 2;
  QMutex::lock();
  uVar2 = 0;
  iVar4 = (**(code **)(**(long **)(param_1 + 0x10) + 0x78))(*(long **)(param_1 + 0x10),0,local_a8);
  if (iVar4 != 0) {
    FUN_100416cc0(param_1);
    uVar2 = QWaitCondition::wait((QMutex *)(param_1 + 0x650),param_1 + 0x648);
  }
  QMutex::unlock();
  puVar1 = PTR_shared_null_100ba20d0;
  if (*(int *)PTR_shared_null_100ba20d0 != -1) {
    if (*(int *)PTR_shared_null_100ba20d0 != 0) {
      LOCK();
      *(int *)PTR_shared_null_100ba20d0 = *(int *)PTR_shared_null_100ba20d0 + -1;
      local_a8[0]._0_1_ = *(int *)puVar1 != 0;
      UNLOCK();
      if ((bool)(undefined1)local_a8[0]) {
        return uVar2;
      }
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_100ba20d0,1,8);
  }
  return uVar2;
}


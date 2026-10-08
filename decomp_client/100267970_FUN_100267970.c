
undefined8 FUN_100267970(long param_1)

{
  undefined8 uVar1;
  QArrayData *local_20;
  undefined1 local_11;
  
  uVar1 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar1 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
  }
  local_20 = (QArrayData *)PTR_shared_null_1021e1288;
  uVar1 = FUN_1001990a0(uVar1,0x3f3,&local_20,param_1 + 0x48,param_1 + 0x50);
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      UNLOCK();
      if (*(int *)local_20 != 0) {
        return uVar1;
      }
      local_11 = 0;
    }
    QArrayData::deallocate(local_20,2,8);
  }
  return uVar1;
}


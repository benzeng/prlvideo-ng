
undefined4 FUN_10032fe90(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined4 uVar2;
  QArrayData *local_20;
  undefined1 local_13;
  undefined1 local_12;
  
  lVar1 = *(long *)(param_1 + 0x50);
  uVar2 = 0x80000007;
  if (lVar1 != 0) {
    local_20 = (QArrayData *)*param_2;
    if (1 < *(int *)local_20 + 1U) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + 1;
      local_13 = *(int *)local_20 != 0;
      UNLOCK();
    }
    uVar2 = FUN_100a4c190(lVar1,&local_20);
    if (*(int *)local_20 != -1) {
      if (*(int *)local_20 != 0) {
        LOCK();
        *(int *)local_20 = *(int *)local_20 + -1;
        UNLOCK();
        if (*(int *)local_20 != 0) {
          return uVar2;
        }
        local_12 = 0;
      }
      QArrayData::deallocate(local_20,2,8);
    }
  }
  return uVar2;
}


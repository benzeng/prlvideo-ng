
undefined1 FUN_1006efe70(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined1 uVar2;
  QArrayData *local_20;
  undefined1 local_13;
  undefined1 local_12;
  
  local_20 = (QArrayData *)*param_1;
  if (1 < *(int *)local_20 + 1U) {
    LOCK();
    *(int *)local_20 = *(int *)local_20 + 1;
    local_13 = *(int *)local_20 != 0;
    UNLOCK();
  }
  uVar2 = 0;
  if ((param_2 != 0) && (uVar2 = 0, *(int *)(local_20 + 4) != 0)) {
    uVar1 = FUN_1006eec80(param_2,&local_20);
    uVar2 = (undefined1)((uVar1 & 4) >> 2);
  }
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
  return uVar2;
}


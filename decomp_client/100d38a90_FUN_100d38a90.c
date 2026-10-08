
undefined8 FUN_100d38a90(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  QArrayData *local_20;
  undefined1 local_13;
  undefined1 local_12;
  
  lVar1 = param_1;
  do {
    lVar3 = lVar1;
    lVar1 = *(long *)(lVar3 + 0x48);
  } while (lVar1 != 0);
  local_20 = (QArrayData *)*param_2;
  if (1 < *(int *)local_20 + 1U) {
    LOCK();
    *(int *)local_20 = *(int *)local_20 + 1;
    local_13 = *(int *)local_20 != 0;
    UNLOCK();
  }
  uVar2 = FUN_100d38b50(param_1,lVar3,&local_20);
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


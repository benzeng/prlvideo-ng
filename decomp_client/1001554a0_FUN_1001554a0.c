
undefined8 FUN_1001554a0(undefined8 param_1)

{
  undefined8 uVar1;
  QArrayData *local_28;
  undefined1 local_1a;
  
  FUN_100155380(&local_28);
  uVar1 = FUN_100152740(param_1,&local_28);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return uVar1;
      }
      local_1a = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return uVar1;
}


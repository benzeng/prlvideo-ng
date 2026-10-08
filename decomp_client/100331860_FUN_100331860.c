
void FUN_100331860(long param_1)

{
  long lVar1;
  QArrayData *local_20;
  undefined1 local_11;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0x10) + 4) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x18) == 0) {
    return;
  }
  FUN_1003193e0(&local_20);
  lVar1 = FUN_1000a9690(&local_20);
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      local_11 = *(int *)local_20 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1003318c8;
    }
    QArrayData::deallocate(local_20,2,8);
  }
LAB_1003318c8:
  if (lVar1 != 0) {
    FUN_1000b6b70(lVar1);
  }
  return;
}


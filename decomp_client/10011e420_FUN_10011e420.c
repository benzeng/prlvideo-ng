
bool FUN_10011e420(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  Data *local_28;
  undefined1 local_19;
  
  FUN_10011e480(&local_28,param_1);
  iVar1 = *(int *)(local_28 + 0xc);
  iVar2 = *(int *)(local_28 + 8);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) goto LAB_10011e467;
      local_19 = 0;
    }
    QListData::dispose(local_28);
  }
LAB_10011e467:
  return iVar1 != iVar2;
}


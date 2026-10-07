
bool FUN_1006d8240(void)

{
  int iVar1;
  QArrayData *local_20;
  undefined1 local_11;
  
  FUN_1006d8290(&local_20);
  iVar1 = *(int *)(local_20 + 4);
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      local_11 = *(int *)local_20 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1006d8281;
    }
    QArrayData::deallocate(local_20,2,8);
  }
LAB_1006d8281:
  return iVar1 != 0;
}


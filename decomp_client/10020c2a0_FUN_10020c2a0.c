
void FUN_10020c2a0(long *param_1,undefined4 param_2)

{
  long lVar1;
  QArrayData *local_48;
  undefined1 local_40 [31];
  undefined1 local_21;
  
  lVar1 = 0;
  FUN_10098e0d0(local_40,0);
  if ((param_1[3] != 0) && (lVar1 = 0, *(int *)(param_1[3] + 4) != 0)) {
    lVar1 = param_1[4];
  }
  FUN_10011cdf0(&local_48,lVar1);
  FUN_10098e1e0(local_40,&local_48);
  (**(code **)(*param_1 + 0xb0))(param_1,param_2);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10020c330;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10020c330:
  FUN_10098e170(local_40);
  return;
}


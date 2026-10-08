
void FUN_1001efe60(long *param_1)

{
  long lVar1;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_38 [31];
  undefined1 local_19;
  
  if (((param_1[3] != 0) && (*(int *)(param_1[3] + 4) != 0)) && (param_1[4] != 0)) {
    FUN_1001902d0(param_1[4],1);
  }
  if ((char)param_1[0xc] == '\0') goto LAB_1001eff67;
  lVar1 = 0;
  FUN_10098e0d0(local_38,0);
  if ((param_1[3] != 0) && (lVar1 = 0, *(int *)(param_1[3] + 4) != 0)) {
    lVar1 = param_1[4];
  }
  FUN_10011cdf0(&local_40,lVar1);
  QMetaObject::tr((char *)&local_48,(char *)&PTR_staticMetaObject_1021ffdb0,0x1dda9c0);
  FUN_10098e1d0(local_38,&local_40,param_1 + 0xb,&local_48);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_19 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1001eff2e;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1001eff2e:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1001eff5e;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1001eff5e:
  FUN_10098e170(local_38);
LAB_1001eff67:
  (**(code **)(*param_1 + 0xb0))(param_1,0);
  if (((param_1[3] != 0) && (*(int *)(param_1[3] + 4) != 0)) && (param_1[4] != 0)) {
    FUN_1001923f0(param_1[4],0);
  }
  return;
}


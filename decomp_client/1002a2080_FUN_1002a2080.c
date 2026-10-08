
void FUN_1002a2080(long *param_1,int param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *local_48;
  QArrayData *local_40;
  undefined *local_38;
  undefined1 local_29;
  
  puVar1 = PTR_shared_null_1021e15e8;
  if (param_2 != 0) {
    if (param_2 == 2) {
                    /* WARNING: Could not recover jumptable at 0x0001002a20b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xb0))(param_1,0);
      return;
    }
    if (param_2 != 3) {
      return;
    }
  }
  uVar2 = 0x80015255;
  if (*(int *)((long)param_1 + 0x3c) != 0) {
    uVar2 = 0x80015254;
  }
  local_38 = PTR_shared_null_1021e15e8;
  FUN_1002a0af0(&local_40,param_1);
  FUN_1000341d0(&local_38,&local_40);
  local_48 = puVar1;
  FUN_1002a17d0(param_1,uVar2,&local_38,&local_48);
  FUN_100039a80(&local_48);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002a214a;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1002a214a:
  FUN_100039a80(&local_38);
  return;
}


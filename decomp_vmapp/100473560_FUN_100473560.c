
void FUN_100473560(long *param_1,long *param_2)

{
  void *pvVar1;
  undefined **local_48;
  undefined1 local_40 [32];
  
  if ((char)param_1[3] == '\0') {
    FUN_10047a290(&local_48);
    (**(code **)(*param_2 + 0x10))(param_2,&local_48);
    (**(code **)(*param_1 + 0x88))(param_1,&local_48);
    local_48 = &PTR_FUN_10111c580;
    FUN_10047a180(local_40);
  }
  else {
    pvVar1 = (void *)param_1[4];
    if (pvVar1 == (void *)0x0) {
      pvVar1 = operator_new(0x28);
      FUN_10047a290(pvVar1);
      param_1[4] = (long)pvVar1;
    }
    (**(code **)(*param_2 + 0x10))(param_2,pvVar1);
  }
  return;
}


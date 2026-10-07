
void FUN_10046bf60(long param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  long *plVar2;
  int *local_70;
  undefined **local_68;
  undefined1 local_60 [32];
  undefined8 *local_40;
  undefined1 local_31;
  
  local_40 = operator_new(0x10);
  *local_40 = param_2;
  piVar1 = (int *)*param_3;
  local_40[1] = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_31 = *piVar1 != 0;
    UNLOCK();
  }
  FUN_10046c950(param_1 + 0x28,&local_40);
  FUN_10047a290(&local_68);
  FUN_10047a2a0(&local_68);
  plVar2 = (long *)FUN_100473400(param_1);
  (**(code **)(*plVar2 + 0x78))(&local_70,plVar2);
  FUN_10047a860(&local_68,&local_70);
  if (*local_70 != -1) {
    if (*local_70 != 0) {
      LOCK();
      *local_70 = *local_70 + -1;
      local_31 = *local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10046c014;
    }
    FUN_100472110(&local_70,local_70);
  }
LAB_10046c014:
  FUN_10046c480(param_2,param_3,&local_68);
  local_68 = &PTR_FUN_10111c580;
  FUN_10047a180(local_60);
  return;
}


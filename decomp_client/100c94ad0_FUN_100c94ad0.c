
void FUN_100c94ad0(long param_1,undefined4 param_2,undefined8 param_3,time_t *param_4)

{
  time_t in_RAX;
  time_t local_28;
  
  if (param_4 == (time_t *)0x0) {
    local_28 = in_RAX;
    _time(&local_28);
  }
  else {
    local_28 = *param_4;
  }
  if ((param_1 != 0) && ((*(byte *)(param_1 + 0x10) & 0x40) == 0)) {
    if (*(int *)(param_1 + 4) == 0x18) {
      FUN_100c75b70(param_1,local_28,param_2,param_3);
      return;
    }
    if (*(int *)(param_1 + 4) == 0x17) {
      FUN_100c755f0(param_1,local_28,param_2,param_3);
      return;
    }
  }
  FUN_100c75da0(param_1,local_28,param_2,param_3);
  return;
}


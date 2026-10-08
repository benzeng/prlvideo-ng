
void FUN_100c949d0(long param_1,undefined8 param_2,time_t *param_3)

{
  time_t local_20;
  
  if (param_3 == (time_t *)0x0) {
    _time(&local_20);
  }
  else {
    local_20 = *param_3;
  }
  if ((param_1 != 0) && ((*(byte *)(param_1 + 0x10) & 0x40) == 0)) {
    if (*(int *)(param_1 + 4) == 0x18) {
      FUN_100c75b70(param_1,local_20,0,param_2);
      return;
    }
    if (*(int *)(param_1 + 4) == 0x17) {
      FUN_100c755f0(param_1,local_20,0,param_2);
      return;
    }
  }
  FUN_100c75da0(param_1,local_20,0,param_2);
  return;
}


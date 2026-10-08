
undefined1 FUN_100ab4830(pthread_mutex_t *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined1 local_38 [24];
  
  _pthread_mutex_lock(param_1);
  *(long *)(param_1[1].__opaque + 0x28) = *(long *)(param_1[1].__opaque + 0x28) + 1;
  FUN_100ab0180(local_38,param_2);
  uVar1 = FUN_100ab4770(param_1,param_3);
  FUN_100ab02e0(local_38);
  return uVar1;
}


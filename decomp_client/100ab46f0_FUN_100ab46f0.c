
undefined1 FUN_100ab46f0(pthread_mutex_t *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  
  _pthread_mutex_lock(param_1);
  *(long *)(param_1[1].__opaque + 0x28) = *(long *)(param_1[1].__opaque + 0x28) + 1;
  FUN_100ab03b0(param_2);
  uVar1 = FUN_100ab4770(param_1,param_3);
  FUN_100ab03a0(param_2);
  return uVar1;
}


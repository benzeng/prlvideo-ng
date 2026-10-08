
undefined8 * FUN_1009dfae0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long local_48 [2];
  void *local_38;
  
  FUN_1009df1b0(local_48);
  FUN_1009df5f0(local_48,param_3);
  *param_1 = PTR_shared_null_1021e1288;
  if (local_38 != (void *)0x0) {
    _free(local_38);
  }
  if (local_48[0] != 0) {
    _CFRelease();
  }
  return param_1;
}



undefined8 FUN_1009dfb70(undefined8 param_1)

{
  long local_40 [2];
  void *local_30;
  
  FUN_1009df1b0(local_40);
  FUN_1009df890(param_1,local_40);
  if (local_30 != (void *)0x0) {
    _free(local_30);
  }
  if (local_40[0] != 0) {
    _CFRelease();
  }
  return param_1;
}


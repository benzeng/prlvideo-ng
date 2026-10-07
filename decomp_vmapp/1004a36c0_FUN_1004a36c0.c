
void FUN_1004a36c0(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10111c960;
  pvVar1 = (void *)param_1[2];
  if (pvVar1 != (void *)0x0) {
    if ((void *)param_1[3] != pvVar1) {
      param_1[3] = pvVar1;
    }
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}



void FUN_100a71be0(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_1022814f0;
  pvVar1 = (void *)param_1[2];
  if (pvVar1 != (void *)0x0) {
    FUN_100a6f6f0(pvVar1);
    operator_delete(pvVar1);
    return;
  }
  return;
}


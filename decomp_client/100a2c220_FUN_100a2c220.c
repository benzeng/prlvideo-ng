
void FUN_100a2c220(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_102280fa8;
  pvVar1 = (void *)param_1[2];
  if (pvVar1 != (void *)0x0) {
    FUN_100a2c1a0(pvVar1);
    operator_delete(pvVar1);
    return;
  }
  return;
}



void FUN_100d3d790(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100d38810(*(undefined8 *)(param_1 + 0x10));
  *(undefined8 *)(param_1 + 0x10) = 0;
  FUN_100d3e130(param_1,pvVar1);
  if (pvVar1 != (void *)0x0) {
    FUN_100d38800(pvVar1);
    operator_delete(pvVar1);
    return;
  }
  return;
}



void FUN_1003aaf40(undefined8 *param_1)

{
  long lVar1;
  void *pvVar2;
  
  lVar1 = param_1[4];
  *(undefined8 *)(lVar1 + 8) = param_1[3];
  *(long *)(param_1[3] + 0x10) = lVar1;
  param_1[3] = param_1 + 2;
  param_1[4] = param_1 + 2;
  pvVar2 = (void *)*param_1;
  if (pvVar2 != (void *)0x0) {
    FUN_1003aaf40(pvVar2);
    operator_delete(pvVar2);
    return;
  }
  return;
}


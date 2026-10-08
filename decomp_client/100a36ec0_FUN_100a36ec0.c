
void FUN_100a36ec0(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_1022810d0;
  pvVar1 = (void *)param_1[10];
  if (pvVar1 != (void *)0x0) {
    if ((void *)param_1[0xb] != pvVar1) {
      param_1[0xb] = pvVar1;
    }
    operator_delete(pvVar1);
  }
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    operator_delete((void *)param_1[7]);
  }
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[4]);
  return;
}


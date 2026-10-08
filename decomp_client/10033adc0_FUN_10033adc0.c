
void FUN_10033adc0(long param_1)

{
  long in_RAX;
  void *pvVar1;
  undefined8 uVar2;
  long local_28;
  
  local_28 = in_RAX;
  pvVar1 = operator_new(0x50);
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
  }
  FUN_1003193b0(&local_28,uVar2);
  FUN_100a5dca0(pvVar1,uVar2,local_28);
  *(void **)(param_1 + 0x20) = pvVar1;
  if (local_28 != 0) {
    _PrlHandle_Free();
  }
  return;
}



void FUN_100535290(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_100bc5120;
  param_1[5] = &PTR_FUN_100bc51a8;
  FUN_100540de0(&DAT_1011cc998,0);
  *(undefined1 *)(param_1 + 9) = 1;
  FUN_1005353d0(param_1[7]);
  FUN_100040d30(param_1[6]);
  FUN_1005355f0(param_1[8] + 0x30,1);
  pvVar1 = (void *)param_1[8];
  if (pvVar1 != (void *)0x0) {
    FUN_10053f5a0(pvVar1);
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[7];
  if (pvVar1 != (void *)0x0) {
    FUN_100539cc0(pvVar1);
    operator_delete(pvVar1);
  }
  if ((long *)param_1[6] != (long *)0x0) {
    (**(code **)(*(long *)param_1[6] + 8))();
  }
  FUN_1004c0680(param_1);
  return;
}


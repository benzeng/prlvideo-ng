
void FUN_1004c0380(long param_1)

{
  void *pvVar1;
  
  FUN_1004c0870(&DAT_1011cc7f8,0);
  FUN_1004c03e0(param_1);
  pvVar1 = *(void **)(param_1 + 0x110);
  if (pvVar1 != (void *)0x0) {
    FUN_1004c0c40(pvVar1);
    operator_delete(pvVar1);
  }
  *(undefined8 *)(param_1 + 0x110) = 0;
  return;
}


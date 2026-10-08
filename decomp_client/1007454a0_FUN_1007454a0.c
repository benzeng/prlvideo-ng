
void FUN_1007454a0(undefined8 param_1,long param_2,long param_3)

{
  void *pvVar1;
  
  for (; param_3 != param_2; param_3 = param_3 + -8) {
    pvVar1 = *(void **)(param_3 + -8);
    if (pvVar1 != (void *)0x0) {
      FUN_100252c80((long)pvVar1 + 0x58);
      FUN_100252e70(pvVar1);
      operator_delete(pvVar1);
    }
  }
  return;
}


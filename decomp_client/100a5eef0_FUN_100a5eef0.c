
void * FUN_100a5eef0(undefined8 param_1)

{
  void *pvVar1;
  
  if (DAT_1023139d8 == (void *)0x0) {
    pvVar1 = operator_new(0x18);
    FUN_100a5ed50(pvVar1);
    DAT_1023139d8 = pvVar1;
  }
  FUN_100a5ef50(DAT_1023139d8,param_1);
  return DAT_1023139d8;
}


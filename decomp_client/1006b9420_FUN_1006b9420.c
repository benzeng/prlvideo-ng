
undefined8 * FUN_1006b9420(void)

{
  undefined8 *puVar1;
  void *pvVar2;
  
  if (DAT_102310980 == (undefined8 *)0x0) {
    puVar1 = operator_new(8);
    pvVar2 = operator_new(0x40);
    FUN_1006b5cd0(pvVar2,puVar1);
    *puVar1 = pvVar2;
    DAT_102310980 = puVar1;
  }
  return DAT_102310980;
}


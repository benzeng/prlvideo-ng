
undefined8 FUN_10035d620(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  void *pvVar2;
  
  uVar1 = FUN_100cd2260(param_2);
  if (DAT_102310a08 == (void *)0x0) {
    pvVar2 = operator_new(0x220);
    FUN_1007cc3f0(pvVar2);
    DAT_102273890 = 1;
    DAT_102310a08 = pvVar2;
  }
  FUN_1007d2920(DAT_102310a08,uVar1);
  return uVar1;
}


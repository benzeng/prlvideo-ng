
void FUN_100545f50(undefined8 param_1,char param_2)

{
  void *pvVar1;
  
  if (DAT_102310850 == (void *)0x0) {
    pvVar1 = operator_new(0x18);
    FUN_10005df70(pvVar1);
    DAT_102271eae = 1;
    DAT_102310850 = pvVar1;
  }
  if (param_2 != '\0') {
    FUN_10005e090();
    return;
  }
  FUN_10005e0b0(DAT_102310850);
  return;
}


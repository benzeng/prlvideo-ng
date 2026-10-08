
void FUN_100a0c3a0(undefined8 param_1)

{
  void *pvVar1;
  
  if (DAT_102311290 == (void *)0x0) {
    pvVar1 = operator_new(0x20);
    FUN_100a0cb00(pvVar1);
    DAT_102280a60 = 1;
    DAT_102311290 = pvVar1;
  }
  FUN_100a0cbe0(DAT_102311290,param_1);
  return;
}


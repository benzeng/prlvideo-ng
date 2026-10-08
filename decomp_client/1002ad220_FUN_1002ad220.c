
void * FUN_1002ad220(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  void *pvVar2;
  
  FUN_100060bb0();
  iVar1 = FUN_100060e10(param_1);
  pvVar2 = (void *)0x0;
  if (iVar1 == 1) {
    pvVar2 = operator_new(0x30);
    FUN_10027d7b0(pvVar2,param_2);
  }
  else if (iVar1 == 2) {
    pvVar2 = operator_new(0x30);
    FUN_1002ae040(pvVar2,param_1,param_2);
  }
  else if (iVar1 == 3) {
    pvVar2 = operator_new(0x30);
    FUN_1002ad5b0(pvVar2,param_1,param_2);
  }
  return pvVar2;
}


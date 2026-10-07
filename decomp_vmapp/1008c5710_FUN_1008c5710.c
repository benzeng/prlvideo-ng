
long FUN_1008c5710(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_100885600(param_2);
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      FUN_100885620(param_2,iVar1);
      param_3 = FUN_1008c5b00();
      iVar1 = iVar1 + 1;
      iVar2 = FUN_100885600(param_2);
    } while (iVar1 < iVar2);
  }
  if (param_3 == 0) {
    param_3 = FUN_100884e10();
  }
  return param_3;
}


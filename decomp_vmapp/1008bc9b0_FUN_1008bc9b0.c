
undefined8 FUN_1008bc9b0(long param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (param_1 != 0) {
    iVar1 = FUN_100885600(param_1);
    uVar2 = 0;
    if ((-1 < param_2) && (param_2 < iVar1)) {
      uVar2 = FUN_100885620(param_1,param_2);
    }
  }
  return uVar2;
}


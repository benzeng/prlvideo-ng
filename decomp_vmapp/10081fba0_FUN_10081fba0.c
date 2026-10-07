
undefined8 FUN_10081fba0(long *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*param_1 != 0) {
    iVar1 = FUN_100885600();
    if (param_2 < iVar1) {
      uVar2 = FUN_100885620(*param_1,param_2);
      return uVar2;
    }
  }
  return 0;
}


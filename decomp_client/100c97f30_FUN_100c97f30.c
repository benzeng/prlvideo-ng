
undefined8 FUN_100c97f30(long param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (param_1 != 0) {
    iVar1 = FUN_100c60800(param_1);
    uVar2 = 0;
    if ((-1 < param_2) && (param_2 < iVar1)) {
      uVar2 = FUN_100c60820(param_1,param_2);
    }
  }
  return uVar2;
}


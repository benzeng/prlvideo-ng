
undefined8 FUN_100c96d80(undefined8 *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (param_1 != (undefined8 *)0x0) {
    iVar1 = FUN_100c60800(*param_1);
    uVar2 = 0;
    if ((-1 < param_2) && (param_2 < iVar1)) {
      uVar2 = FUN_100c60820(*param_1,param_2);
    }
  }
  return uVar2;
}


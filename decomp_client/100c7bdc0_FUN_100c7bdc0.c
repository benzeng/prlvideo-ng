
undefined8
FUN_100c7bdc0(long *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,long param_6)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*param_1 == 0) {
    lVar1 = FUN_100c26720();
    *param_1 = lVar1;
    if (lVar1 == 0) {
      return 0;
    }
  }
  lVar1 = FUN_100c26e20(param_2,param_3);
  uVar2 = 1;
  if ((lVar1 == 0) && (uVar2 = 0, *param_1 != 0)) {
    if ((*(byte *)(param_6 + 0x28) & 1) == 0) {
      FUN_100c266b0();
    }
    else {
      FUN_100c26640();
    }
    *param_1 = 0;
  }
  return uVar2;
}



undefined4
FUN_100d09d50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5)

{
  undefined4 uVar1;
  ulong in_RAX;
  long lVar2;
  undefined8 uStack_28;
  
  uStack_28 = in_RAX;
  lVar2 = FUN_100d09a60();
  if (lVar2 != 0) {
    lVar2 = FUN_100d13320(lVar2,param_3);
    if (lVar2 != 0) {
      uStack_28 = uStack_28 & 0xffffffffffffff;
      uVar1 = QString::toLongLong((bool *)(lVar2 + 8),(int)&uStack_28 + 7);
      if (uStack_28._7_1_ != '\0') {
        param_5 = uVar1;
      }
    }
  }
  return param_5;
}


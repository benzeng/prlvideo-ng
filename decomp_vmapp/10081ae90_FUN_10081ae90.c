
undefined8 FUN_10081ae90(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_10087e1f0(param_1,0x207);
  lVar2 = FUN_10087e1f0(param_2,0x207);
  uVar3 = 0;
  if ((lVar1 != 0) && (lVar2 != 0)) {
    if (**(long **)(lVar1 + 0x30) != 0) {
      uVar3 = 0;
      if (**(long **)(lVar2 + 0x30) != 0) {
        FUN_10080e8e0();
        uVar3 = 1;
      }
    }
  }
  return uVar3;
}


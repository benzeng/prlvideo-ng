
undefined8 FUN_1008749c0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_100874a00();
  uVar2 = 0;
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + 8) != 0) {
      FUN_10087a5e0();
      *(undefined8 *)(lVar1 + 8) = 0;
    }
    *(undefined8 *)(lVar1 + 0x18) = param_2;
    uVar2 = 1;
  }
  return uVar2;
}



undefined8 FUN_100cb0e60(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_100cb0ef0(param_1,0x33);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 8);
  }
  return uVar2;
}



undefined8 FUN_100c4fbc0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_100c4fc00();
  uVar2 = 0;
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + 8) != 0) {
      FUN_100c557e0();
      *(undefined8 *)(lVar1 + 8) = 0;
    }
    *(undefined8 *)(lVar1 + 0x18) = param_2;
    uVar2 = 1;
  }
  return uVar2;
}


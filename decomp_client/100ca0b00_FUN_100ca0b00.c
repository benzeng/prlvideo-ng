
undefined8 FUN_100ca0b00(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0xffffffff;
  if ((param_1 != (undefined8 *)0x0) && (param_2 != (undefined8 *)0x0)) {
    uVar1 = FUN_100bf8810(*param_1,*param_2);
    if ((int)uVar1 == 0) {
      uVar1 = FUN_100c76f80(param_1[1],param_2[1]);
      return uVar1;
    }
  }
  return uVar1;
}


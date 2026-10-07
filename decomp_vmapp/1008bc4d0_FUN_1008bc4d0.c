
undefined8 FUN_1008bc4d0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((param_1 != (undefined8 *)0x0) && (param_2 != 0)) {
    FUN_100899890(*param_1);
    uVar1 = FUN_100822ed0(param_2);
    *param_1 = uVar1;
    uVar1 = 1;
  }
  return uVar1;
}


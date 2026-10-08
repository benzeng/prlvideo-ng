
undefined8 FUN_100c98800(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((param_1 != (undefined8 *)0x0) && (param_2 != 0)) {
    FUN_100c74e10(*param_1);
    uVar1 = FUN_100bf8640(param_2);
    *param_1 = uVar1;
    uVar1 = 1;
  }
  return uVar1;
}



undefined8 FUN_100090a50(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(long *)(param_2 + 0x1108) != 0) {
    uVar1 = *(undefined8 *)(*(long *)(param_2 + 0x1108) + 0x10);
  }
  FUN_1000d73b0(param_1,uVar1);
  return param_1;
}


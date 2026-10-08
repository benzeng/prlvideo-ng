
undefined8 FUN_100cb6420(uint *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((param_1 != (uint *)0x0) && (uVar1 = 0, (*param_1 | 2) == 3)) {
    uVar1 = *(undefined8 *)(param_1 + 8);
  }
  return uVar1;
}


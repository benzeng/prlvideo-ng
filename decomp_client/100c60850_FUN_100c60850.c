
undefined8 FUN_100c60850(int *param_1,int param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (((param_1 != (int *)0x0) && (-1 < param_2)) && (uVar1 = 0, param_2 < *param_1)) {
    *(undefined8 *)(*(long *)(param_1 + 2) + (long)param_2 * 8) = param_3;
    uVar1 = param_3;
  }
  return uVar1;
}


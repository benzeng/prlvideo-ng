
undefined8 * FUN_100323d50(undefined8 *param_1,long param_2)

{
  if (((*(long *)(param_2 + 0x10) == 0) || (*(int *)(*(long *)(param_2 + 0x10) + 4) == 0)) ||
     (*(long *)(param_2 + 0x18) == 0)) {
    *param_1 = 0;
  }
  else {
    FUN_1003193b0(param_1);
  }
  return param_1;
}


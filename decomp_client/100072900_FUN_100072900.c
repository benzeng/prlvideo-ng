
undefined8 * FUN_100072900(undefined8 *param_1,long param_2)

{
  if (((*(long *)(param_2 + 0x18) == 0) || (*(int *)(*(long *)(param_2 + 0x18) + 4) == 0)) ||
     (*(long *)(param_2 + 0x20) == 0)) {
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = 0;
  }
  else {
    CSystemStatusBarItem::geometry();
  }
  return param_1;
}


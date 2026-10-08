
undefined8 * FUN_100319410(undefined8 *param_1,long param_2)

{
  if (((*(long *)(param_2 + 0x10) == 0) || (*(int *)(*(long *)(param_2 + 0x10) + 4) == 0)) ||
     (*(long *)(param_2 + 0x18) == 0)) {
    *param_1 = PTR_shared_null_1021e1288;
  }
  else {
    FUN_10018d830(param_1);
  }
  return param_1;
}


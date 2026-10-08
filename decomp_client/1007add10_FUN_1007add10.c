
undefined8 * FUN_1007add10(undefined8 *param_1,long param_2)

{
  if (((*(long *)(param_2 + 0x118) == 0) || (*(int *)(*(long *)(param_2 + 0x118) + 4) == 0)) ||
     (*(long *)(param_2 + 0x120) == 0)) {
    *param_1 = PTR_shared_null_1021e1288;
  }
  else {
    FUN_1001884b0(param_1);
  }
  return param_1;
}


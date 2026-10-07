
undefined8 * FUN_100702640(undefined8 *param_1,long *param_2)

{
  if ((*param_2 == 0) || (*(long *)(*param_2 + 0x10) == 0)) {
    *param_1 = PTR_shared_null_100ba20d0;
  }
  else {
    FUN_100701f80(param_1);
  }
  return param_1;
}


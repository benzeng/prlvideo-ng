
void FUN_100cdf5d0(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_100cdf5d0(param_1,*param_2);
    FUN_100cdf5d0(param_1,param_2[1]);
    operator_delete(param_2);
    return;
  }
  return;
}


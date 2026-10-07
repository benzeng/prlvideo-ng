
void FUN_100373790(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_100373790(param_1,*param_2);
    FUN_100373790(param_1,param_2[1]);
    FUN_100373b80(param_2 + 4);
    operator_delete(param_2);
    return;
  }
  return;
}


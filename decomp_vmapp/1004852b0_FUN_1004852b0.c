
void FUN_1004852b0(undefined8 param_1,undefined8 *param_2,int param_3)

{
  if (param_3 == 0) {
    FUN_100485490(*param_2,param_1,param_2);
    return;
  }
  if (param_2 != (undefined8 *)0x0) {
    FUN_100485310(param_2);
    operator_delete(param_2);
    return;
  }
  return;
}


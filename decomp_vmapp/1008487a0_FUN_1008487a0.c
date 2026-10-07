
void FUN_1008487a0(undefined8 param_1,undefined8 *param_2,long param_3,undefined8 *param_4)

{
  if ((*(int *)(param_4 + 1) < 1) || ((*(byte *)*param_4 & 1) == 0)) {
    FUN_1008491f0();
    return;
  }
  if ((*(int *)(param_2 + 1) == 1) &&
     ((*(int *)(param_2 + 2) == 0 && ((*(byte *)(param_3 + 0x14) & 4) == 0)))) {
    FUN_1008487f0(param_1,*(undefined8 *)*param_2);
    return;
  }
  FUN_100848c40();
  return;
}


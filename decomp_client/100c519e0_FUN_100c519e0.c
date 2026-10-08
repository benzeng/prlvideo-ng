
void FUN_100c519e0(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  if ((*(int *)(param_3 + 1) == 1) && ((*(byte *)(param_1 + 0x30) & 2) != 0)) {
    FUN_100c239f0(param_2,*(undefined8 *)*param_3,param_4,param_5,param_6,param_7);
    return;
  }
  FUN_100c23e40(param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}


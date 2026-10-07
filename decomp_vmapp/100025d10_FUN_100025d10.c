
void FUN_100025d10(undefined8 param_1,int param_2,int param_3,long param_4)

{
  if (param_2 == 0) {
    if (param_3 == 1) {
      FUN_100025f10(param_1,*(undefined8 *)(param_4 + 8),*(undefined8 *)(param_4 + 0x10));
      return;
    }
    if (param_3 == 0) {
      FUN_100025e60(param_1,*(undefined8 *)(param_4 + 8),*(undefined8 *)(param_4 + 0x10));
      return;
    }
  }
  return;
}


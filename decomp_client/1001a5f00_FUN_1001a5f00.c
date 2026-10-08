
void FUN_1001a5f00(int param_1,long param_2,undefined8 param_3,long param_4)

{
  if (param_1 == 0x4b4) {
    if (param_4 != 0) {
      FUN_1008082d0(param_4);
      return;
    }
  }
  else if ((param_1 == 0x2db) && (param_4 != 0)) {
    FUN_100808280(param_4,*(int *)(param_2 + 0x6c) == 0x4000);
    return;
  }
  return;
}


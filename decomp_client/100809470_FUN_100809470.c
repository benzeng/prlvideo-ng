
void FUN_100809470(undefined8 param_1,int param_2,int param_3,long param_4)

{
  if (param_2 == 0) {
    if (param_3 == 2) {
      FUN_1001c43a0(param_1,**(undefined4 **)(param_4 + 8));
      return;
    }
    if (param_3 == 1) {
      FUN_1001c43e0(param_1,*(undefined8 *)(param_4 + 8),*(undefined8 *)(param_4 + 0x10));
      return;
    }
    if (param_3 == 0) {
      FUN_1001c3e30(param_1,*(undefined8 *)(param_4 + 8),**(undefined4 **)(param_4 + 0x10),
                    **(undefined4 **)(param_4 + 0x18));
      return;
    }
  }
  return;
}


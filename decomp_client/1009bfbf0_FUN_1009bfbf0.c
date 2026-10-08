
void FUN_1009bfbf0(undefined8 param_1,int param_2,int param_3,long param_4)

{
  if (param_2 == 0) {
    if (param_3 == 2) {
      FUN_10099a080(param_1,**(undefined1 **)(param_4 + 8));
      return;
    }
    if (param_3 == 1) {
      FUN_100999f90(param_1,**(undefined1 **)(param_4 + 8));
      return;
    }
    if (param_3 == 0) {
      FUN_100999d20(param_1,**(undefined8 **)(param_4 + 8),*(undefined8 *)(param_4 + 0x10),
                    **(undefined8 **)(param_4 + 0x18),**(undefined1 **)(param_4 + 0x20));
      return;
    }
  }
  return;
}


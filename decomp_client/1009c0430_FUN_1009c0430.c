
void FUN_1009c0430(undefined8 param_1,int param_2,int param_3,long param_4)

{
  if (param_2 == 0) {
    if (param_3 == 1) {
      FUN_1009a8340(param_1,**(undefined4 **)(param_4 + 8),**(undefined4 **)(param_4 + 0x10),
                    **(undefined4 **)(param_4 + 0x18));
      return;
    }
    if (param_3 == 0) {
      FUN_1009a82f0(param_1,**(undefined4 **)(param_4 + 8));
      return;
    }
  }
  return;
}


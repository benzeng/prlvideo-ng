
void FUN_1007c7b30(long param_1,uint param_2)

{
  if ((param_2 & 0xfffffff7) == 0x30000001) {
    if (*(int *)(param_1 + 0x28) == 1) {
      FUN_1007c7250(param_1,2);
    }
    if (*(int *)(param_1 + 0x2c) == 1) {
      FUN_1007c74b0(param_1,2);
      return;
    }
  }
  return;
}


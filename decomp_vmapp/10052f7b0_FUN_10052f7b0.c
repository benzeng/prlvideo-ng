
void FUN_10052f7b0(long param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 2) {
    FUN_10051b1b0(param_1 + 0x40);
    if (*(int *)(*(long *)(param_1 + 0x40) + 0xc) == *(int *)(*(long *)(param_1 + 0x40) + 8)) {
      FUN_10052f540(param_1,2);
      return;
    }
  }
  return;
}


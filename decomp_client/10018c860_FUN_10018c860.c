
void FUN_10018c860(long param_1,int param_2)

{
  if (*(int *)(param_1 + 0x58) == param_2) {
    return;
  }
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x58);
  *(int *)(param_1 + 0x58) = param_2;
  FUN_100804c00();
  return;
}


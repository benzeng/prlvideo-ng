
void FUN_100350b50(long param_1,int param_2)

{
  if (param_2 == 1) {
    *(undefined4 *)(param_1 + 0x70) = 1;
    return;
  }
  if (param_2 == 2) {
    *(undefined4 *)(param_1 + 0x70) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x70) = 2;
  return;
}


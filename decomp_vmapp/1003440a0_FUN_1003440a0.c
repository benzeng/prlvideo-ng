
void FUN_1003440a0(byte *param_1,int param_2)

{
  if (*(int *)(param_1 + 0x30) != param_2) {
    *(int *)(param_1 + 0x30) = param_2;
    *param_1 = *param_1 | 1;
  }
  return;
}


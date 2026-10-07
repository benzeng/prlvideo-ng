
void FUN_1003440e0(byte *param_1,int param_2)

{
  if (*(int *)(param_1 + 0x40) != param_2) {
    *(int *)(param_1 + 0x40) = param_2;
    *param_1 = *param_1 | 2;
  }
  return;
}


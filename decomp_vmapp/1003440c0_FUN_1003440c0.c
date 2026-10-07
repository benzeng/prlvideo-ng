
void FUN_1003440c0(byte *param_1,long param_2)

{
  if (*(long *)(param_1 + 0x38) != param_2) {
    *(long *)(param_1 + 0x38) = param_2;
    *param_1 = *param_1 | 2;
  }
  return;
}


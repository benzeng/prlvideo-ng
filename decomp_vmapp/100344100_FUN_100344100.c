
void FUN_100344100(byte *param_1,long param_2)

{
  if (*(long *)(param_1 + 0x48) != param_2) {
    *(long *)(param_1 + 0x48) = param_2;
    *param_1 = *param_1 | 4;
  }
  return;
}


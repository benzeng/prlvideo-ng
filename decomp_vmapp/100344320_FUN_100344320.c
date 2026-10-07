
void FUN_100344320(byte *param_1,long param_2)

{
  if (*(long *)(param_1 + 0x620) != param_2) {
    *(long *)(param_1 + 0x620) = param_2;
    *param_1 = *param_1 | 0x80;
  }
  return;
}


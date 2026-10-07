
void FUN_100344030(byte *param_1,long param_2)

{
  if (*(long *)(param_1 + 0x18) != param_2) {
    *(long *)(param_1 + 0x18) = param_2;
    *param_1 = *param_1 | 1;
  }
  return;
}


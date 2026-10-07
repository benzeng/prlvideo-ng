
void FUN_100344190(byte *param_1,long param_2)

{
  if (*(long *)(param_1 + 0x50) != param_2) {
    *(long *)(param_1 + 0x50) = param_2;
    *param_1 = *param_1 | 0x10;
  }
  return;
}


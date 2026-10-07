
void FUN_1003443a0(byte *param_1,long param_2)

{
  if (*(long *)(param_1 + 0x640) != param_2) {
    *(long *)(param_1 + 0x640) = param_2;
    *param_1 = *param_1 | 0x40;
  }
  return;
}


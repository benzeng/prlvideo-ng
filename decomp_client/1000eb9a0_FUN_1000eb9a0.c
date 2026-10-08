
void FUN_1000eb9a0(long param_1,long param_2)

{
  if ((*(byte *)(param_2 + 0x24) & 1) == 0) {
    return;
  }
  FUN_1000cc7f0(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_2 + 0x14),
                *(undefined8 *)(param_2 + 0x1c),*(undefined4 *)(param_2 + 0x28));
  return;
}


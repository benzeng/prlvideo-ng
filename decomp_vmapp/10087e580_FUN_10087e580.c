
void FUN_10087e580(long param_1)

{
  *(uint *)(param_1 + 0x20) =
       *(uint *)(param_1 + 0x20) | *(uint *)(*(long *)(param_1 + 0x38) + 0x20) & 0xf;
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(*(long *)(param_1 + 0x38) + 0x24);
  return;
}



void FUN_1009d9d30(long param_1)

{
  *(uint *)(param_1 + 4) =
       (*(int *)(param_1 + 0x20 + (long)*(int *)(param_1 + 0x18) * 0xc) + 0x27U & 0xfffffffc) +
       *(int *)(param_1 + 0x18) * 0xc;
  return;
}


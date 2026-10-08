
void FUN_10035dda0(long param_1,uint param_2,char param_3)

{
  if (param_3 != '\0') {
    *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) | param_2;
    return;
  }
  *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) & ~param_2;
  return;
}


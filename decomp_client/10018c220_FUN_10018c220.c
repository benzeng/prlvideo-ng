
void FUN_10018c220(long param_1,uint param_2,char param_3)

{
  if (param_3 != '\0') {
    *(uint *)(param_1 + 0xdc) = *(uint *)(param_1 + 0xdc) | param_2;
    FUN_1008049b0();
    return;
  }
  *(uint *)(param_1 + 0xdc) = *(uint *)(param_1 + 0xdc) & ~param_2;
  FUN_1008049b0();
  return;
}


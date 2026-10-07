
void FUN_10029c8f0(long param_1,uint param_2,undefined4 param_3)

{
  if (7 < (int)param_2) {
    return;
  }
  *(undefined4 *)(param_1 + 0x28 + (ulong)param_2 * 4) = param_3;
  FUN_10029c780();
  return;
}


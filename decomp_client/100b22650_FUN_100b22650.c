
void FUN_100b22650(long param_1,uint param_2,undefined4 param_3)

{
  *(undefined4 *)((ulong)*(uint *)(param_1 + 0x20) + *(long *)(param_1 + 8) + (ulong)param_2 * 4) =
       param_3;
  *(undefined1 *)(param_1 + 0x40) = 1;
  return;
}



void FUN_100585020(long param_1,ulong param_2,ulong param_3,uint param_4,undefined4 param_5)

{
  if ((param_2 <= param_3) && (param_4 != 0)) {
    *(ulong *)(param_1 + 8) = param_2;
    *(ulong *)(param_1 + 0x10) = param_3;
    *(uint *)(param_1 + 0x18) = param_4;
    *(int *)(param_1 + 0x1c) = (int)(param_2 % (ulong)param_4);
    *(undefined4 *)(param_1 + 0x78) = param_5;
  }
  return;
}


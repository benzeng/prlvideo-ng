
void FUN_1003317a0(long param_1,undefined4 *param_2)

{
  if (param_2[2] == 1) {
    if (((uint)param_2[1] < *(uint *)(*(long *)(param_1 + 0x10) + 0x928)) && (param_2[3] == 4)) {
      *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x920) + (ulong)(uint)param_2[1]) =
           *param_2;
    }
  }
  return;
}


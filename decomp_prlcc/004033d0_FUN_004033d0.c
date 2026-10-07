
bool FUN_004033d0(uint param_1)

{
  if (1 < param_1) {
    return false;
  }
  return *(long *)(g_PrlXLibAPI + (ulong)param_1 * 0x30 + 0x20) != 0;
}


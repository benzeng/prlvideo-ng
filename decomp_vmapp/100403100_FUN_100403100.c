
void FUN_100403100(long param_1)

{
  if ((*(long *)(param_1 + 0x160) != 0) &&
     (*(long *)(*(long *)(param_1 + 0xa8) + 0xf0) <= (long)(ulong)*(uint *)(param_1 + 0x168))) {
    FUN_100405940();
    FUN_100402c70(param_1,0);
    return;
  }
  return;
}


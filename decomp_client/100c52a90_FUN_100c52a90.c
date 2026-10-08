
bool FUN_100c52a90(long param_1)

{
  if (*(long *)(*(long *)(param_1 + 0x20) + 8) != 0) {
    return *(long *)(*(long *)(param_1 + 0x20) + 0x10) == 0;
  }
  return true;
}


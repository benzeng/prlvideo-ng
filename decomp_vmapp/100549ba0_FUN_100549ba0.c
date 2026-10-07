
bool FUN_100549ba0(long param_1)

{
  if (*(long *)(param_1 + 0xc0) != 0) {
    return true;
  }
  return *(long *)(param_1 + 200) != 0;
}


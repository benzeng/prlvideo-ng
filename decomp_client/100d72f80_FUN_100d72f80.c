
void FUN_100d72f80(long param_1,long param_2)

{
  if (*(long *)(param_1 + 8) != 0) {
    _CFRelease();
  }
  *(long *)(param_1 + 8) = param_2;
  if (param_2 != 0) {
    _CFRetain(param_2);
    return;
  }
  return;
}


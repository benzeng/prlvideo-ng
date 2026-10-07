
bool FUN_1000b1ce0(long param_1)

{
  bool bVar1;
  
  if (*(char *)(param_1 + 0x10e8) == '\0') {
    bVar1 = false;
  }
  else {
    bVar1 = *(char *)(param_1 + 0x10e9) == '\0';
  }
  *(undefined1 *)(param_1 + 0x10e9) = 1;
  return bVar1;
}


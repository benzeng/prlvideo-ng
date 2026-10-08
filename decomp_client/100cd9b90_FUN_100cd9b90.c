
bool FUN_100cd9b90(long param_1)

{
  bool bVar1;
  
  if (*(char *)(param_1 + 0x480) == '\0') {
    bVar1 = false;
  }
  else {
    bVar1 = (*(byte *)(param_1 + 0x448) & 4) == 0;
  }
  return bVar1;
}


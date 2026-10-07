
void FUN_100790eb0(uint param_1)

{
  size_t sVar1;
  
  sVar1 = 0x90;
  if (1 < param_1) {
    sVar1 = (ulong)param_1 * 0x10 + 0x80;
  }
  _malloc(sVar1);
  return;
}


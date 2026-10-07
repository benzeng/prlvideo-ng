
bool FUN_10041f890(char param_1)

{
  bool bVar1;
  
  bVar1 = true;
  if ((9 < (byte)(param_1 - 0x30U)) && (5 < (byte)(param_1 + 0x9fU))) {
    bVar1 = (byte)(param_1 + 0xbfU) < 6;
  }
  return bVar1;
}


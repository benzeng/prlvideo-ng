
bool FUN_1009881b0(int param_1)

{
  bool bVar1;
  
  bVar1 = true;
  if ((((param_1 != 0x9ff) && (0x14 < param_1 - 0x901U)) && (3 < param_1 - 0xfffU)) &&
     ((param_1 != 0xf01 && (param_1 != 0x10ff)))) {
    bVar1 = param_1 - 0x80aU < 7;
  }
  return bVar1;
}


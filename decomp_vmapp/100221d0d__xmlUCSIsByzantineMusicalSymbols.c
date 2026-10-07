
undefined4 _xmlUCSIsByzantineMusicalSymbols(int param_1)

{
  undefined4 local_10;
  
  if ((param_1 < 0x1d000) || (0x1d0ff < param_1)) {
    local_10 = 0;
  }
  else {
    local_10 = 1;
  }
  return local_10;
}


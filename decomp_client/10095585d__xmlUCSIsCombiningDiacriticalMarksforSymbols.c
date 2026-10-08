
undefined4 _xmlUCSIsCombiningDiacriticalMarksforSymbols(int param_1)

{
  undefined4 local_10;
  
  if ((param_1 < 0x20d0) || (0x20ff < param_1)) {
    local_10 = 0;
  }
  else {
    local_10 = 1;
  }
  return local_10;
}


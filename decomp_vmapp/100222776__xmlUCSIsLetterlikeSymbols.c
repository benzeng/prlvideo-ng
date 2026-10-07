
undefined4 _xmlUCSIsLetterlikeSymbols(int param_1)

{
  undefined4 local_10;
  
  if ((param_1 < 0x2100) || (0x214f < param_1)) {
    local_10 = 0;
  }
  else {
    local_10 = 1;
  }
  return local_10;
}


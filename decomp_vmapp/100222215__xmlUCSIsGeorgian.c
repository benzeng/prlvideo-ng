
undefined4 _xmlUCSIsGeorgian(int param_1)

{
  undefined4 local_10;
  
  if ((param_1 < 0x10a0) || (0x10ff < param_1)) {
    local_10 = 0;
  }
  else {
    local_10 = 1;
  }
  return local_10;
}


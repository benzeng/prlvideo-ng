
undefined4 _xmlUCSIsArrows(int param_1)

{
  undefined4 local_10;
  
  if ((param_1 < 0x2190) || (0x21ff < param_1)) {
    local_10 = 0;
  }
  else {
    local_10 = 1;
  }
  return local_10;
}


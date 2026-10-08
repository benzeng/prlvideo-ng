
undefined4 _xmlUCSIsVariationSelectors(int param_1)

{
  undefined4 local_10;
  
  if ((param_1 < 0xfe00) || (0xfe0f < param_1)) {
    local_10 = 0;
  }
  else {
    local_10 = 1;
  }
  return local_10;
}



undefined4 _xmlUCSIsCJKCompatibility(int param_1)

{
  undefined4 local_10;
  
  if ((param_1 < 0x3300) || (0x33ff < param_1)) {
    local_10 = 0;
  }
  else {
    local_10 = 1;
  }
  return local_10;
}


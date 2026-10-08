
undefined4 _xmlUCSIsTibetan(int param_1)

{
  undefined4 local_10;
  
  if ((param_1 < 0xf00) || (0xfff < param_1)) {
    local_10 = 0;
  }
  else {
    local_10 = 1;
  }
  return local_10;
}


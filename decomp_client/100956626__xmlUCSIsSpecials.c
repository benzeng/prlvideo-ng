
undefined4 _xmlUCSIsSpecials(int param_1)

{
  undefined4 local_10;
  
  if ((param_1 < 0xfff0) || (0xffff < param_1)) {
    local_10 = 0;
  }
  else {
    local_10 = 1;
  }
  return local_10;
}


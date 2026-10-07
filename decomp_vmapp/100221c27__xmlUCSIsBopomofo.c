
undefined4 _xmlUCSIsBopomofo(int param_1)

{
  undefined4 local_10;
  
  if ((param_1 < 0x3100) || (0x312f < param_1)) {
    local_10 = 0;
  }
  else {
    local_10 = 1;
  }
  return local_10;
}


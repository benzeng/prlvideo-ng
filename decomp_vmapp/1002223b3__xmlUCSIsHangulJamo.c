
undefined4 _xmlUCSIsHangulJamo(int param_1)

{
  undefined4 local_10;
  
  if ((param_1 < 0x1100) || (0x11ff < param_1)) {
    local_10 = 0;
  }
  else {
    local_10 = 1;
  }
  return local_10;
}


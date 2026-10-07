
undefined4 _xmlUCSIsCombiningHalfMarks(int param_1)

{
  undefined4 local_10;
  
  if ((param_1 < 0xfe20) || (0xfe2f < param_1)) {
    local_10 = 0;
  }
  else {
    local_10 = 1;
  }
  return local_10;
}


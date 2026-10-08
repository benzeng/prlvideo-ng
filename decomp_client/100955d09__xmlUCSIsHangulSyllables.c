
undefined4 _xmlUCSIsHangulSyllables(int param_1)

{
  undefined4 local_10;
  
  if ((param_1 < 0xac00) || (0xd7af < param_1)) {
    local_10 = 0;
  }
  else {
    local_10 = 1;
  }
  return local_10;
}


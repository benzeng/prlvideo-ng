
undefined4 _xmlUCSIsTags(int param_1)

{
  undefined4 local_10;
  
  if ((param_1 < 0xe0000) || (0xe007f < param_1)) {
    local_10 = 0;
  }
  else {
    local_10 = 1;
  }
  return local_10;
}


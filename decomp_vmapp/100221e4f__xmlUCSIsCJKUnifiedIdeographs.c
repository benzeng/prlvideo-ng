
undefined4 _xmlUCSIsCJKUnifiedIdeographs(int param_1)

{
  undefined4 local_10;
  
  if ((param_1 < 0x4e00) || (0x9fff < param_1)) {
    local_10 = 0;
  }
  else {
    local_10 = 1;
  }
  return local_10;
}


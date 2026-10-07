
undefined4 _xmlUCSIsCatMe(int param_1)

{
  undefined4 local_10;
  
  if ((((param_1 < 0x488) || (0x489 < param_1)) && (param_1 != 0x6de)) &&
     (((param_1 < 0x20dd || (0x20e0 < param_1)) && ((param_1 < 0x20e2 || (0x20e4 < param_1)))))) {
    local_10 = 0;
  }
  else {
    local_10 = 1;
  }
  return local_10;
}



undefined4 _xmlUCSIsLatinExtendedA(int param_1)

{
  undefined4 local_10;
  
  if ((param_1 < 0x100) || (0x17f < param_1)) {
    local_10 = 0;
  }
  else {
    local_10 = 1;
  }
  return local_10;
}


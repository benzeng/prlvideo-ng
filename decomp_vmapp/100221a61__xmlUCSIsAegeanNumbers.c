
undefined4 _xmlUCSIsAegeanNumbers(int param_1)

{
  undefined4 local_10;
  
  if ((param_1 < 0x10100) || (0x1013f < param_1)) {
    local_10 = 0;
  }
  else {
    local_10 = 1;
  }
  return local_10;
}


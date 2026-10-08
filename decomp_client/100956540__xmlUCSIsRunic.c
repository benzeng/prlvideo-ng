
undefined4 _xmlUCSIsRunic(int param_1)

{
  undefined4 local_10;
  
  if ((param_1 < 0x16a0) || (0x16ff < param_1)) {
    local_10 = 0;
  }
  else {
    local_10 = 1;
  }
  return local_10;
}

